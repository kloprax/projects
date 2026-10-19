
Random rnd = new Random();
int sayi = rnd.Next(1, 101);
int x = 0;
int sayac = 0;

Console.WriteLine("----------  1 -100 Arası Sıcak/Soğuk Oyunu  ----------");

do
{
    Console.ResetColor();
    Console.WriteLine("Sayı giriniz; ");
    string girdi = Console.ReadLine() ?? string.Empty;

    if (!int.TryParse(girdi, out x))
    {
        Console.WriteLine("Sadece tam sayı girişi yapılabilir !");
        continue;
    }

    if (x > 100 || x < 1)
    {
        Console.WriteLine("1-100 arası sayı girişi yapılabilir !");
        continue;
    }

    sayac++;

    int fark = Math.Abs(sayi - x);

    if (fark != 0)
    {
        if (fark <= 5)
        {
            Console.ForegroundColor = ConsoleColor.Red;
            Console.WriteLine("🔥 Çok Sıcak!");
        }
        else if (fark <= 10)
        {
            Console.ForegroundColor = ConsoleColor.DarkRed;
            Console.WriteLine("☀️ Sıcak");
        }
        else if (fark <= 15)
        {
            Console.ForegroundColor = ConsoleColor.Yellow;
            Console.WriteLine("⛅ Ilık");
        }
        else if (fark <= 30)
        {
            Console.ForegroundColor = ConsoleColor.Cyan;
            Console.WriteLine("❄️ Hafif Soğuk");
        }
        else
        {
            Console.ForegroundColor = ConsoleColor.Blue;
            Console.WriteLine("🧊 Soğuk!");
        }
    }
}
while (x != sayi);

Console.ResetColor();
Console.WriteLine($"Tebrikler! Sayıyı {sayac}. denemede doğru tahmin ettiniz. {sayi} doğru cevaptı.");
