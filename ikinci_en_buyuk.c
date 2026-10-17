#include <stdio.h>
#include <limits.h>

int secondLargest(int arr[], int n)
{
    int enb = arr[0];
    int enb2 = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > enb)
        {
            enb = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > enb2 && arr[i] < enb)
        {
            enb2 = arr[i];
        }
    }
    return enb2;
}

int main(void)
{
    int boyut;
    int c = 0;

    do {
        printf("İçindeki ikinci en büyük sayıyı bulmak istediğiniz dizi kaç haneli? :\n");
        scanf("%d", &boyut);

        if (boyut <= 0) {
            printf("Hata: Dizi boyutu 0 veya negatif olamaz! Lütfen tekrar giriniz.\n\n");
        }
    } while (boyut <= 0);

    int dizi[boyut];
    for (int i = 0; i < boyut; i++)
    {
        printf("%d. sayıyı yazınız\n", i + 1);
        scanf("%d", &dizi[i]);

        if (dizi[i] == INT_MIN)
        {
            c = 1;
        }
    }

    int enb_kontrol = dizi[0];
    for (int i = 1; i < boyut; i++) {
        if (dizi[i] > enb_kontrol) {
            enb_kontrol = dizi[i];
        }
    }

    int sonuc = secondLargest(dizi, boyut);

    if (sonuc != INT_MIN)
    {
        printf("Dizideki en büyük ikinci sayı %d\n", sonuc);
    }
    else if (sonuc == INT_MIN && c == 1 && enb_kontrol > INT_MIN)
    {
        printf("Dizideki en büyük ikinci sayı %d\n", INT_MIN);
    }
    else
    {
        printf("Dizideki en büyük ikinci sayı yoktur!\n");
    }

    return 0;
}
