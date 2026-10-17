#include <stdio.h>

char enCokGecenHarf(char str[], int n)
{
    int frekans[26] = {0};

    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') {
            frekans[str[i] - 'a']++;
        }
    }

    int index = 0;
    int kazananIndex = 0;

    for (int i = 0; i < 26; i++)
    {
        if (frekans[i] > index)
        {
            index = frekans[i];
            kazananIndex = i;
        }
    }

    return kazananIndex + 'a';
}

int main(void)
{
    char str1[] = {"nfsafynasy"};
    
    char sonuc = enCokGecenHarf(str1, 10);

    printf("Dizide en cok gecen harf: %c\n", sonuc);

    return 0;
}
