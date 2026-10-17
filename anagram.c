#include <stdio.h>
#include <string.h>



int isAnagram(char a[],char b[])
{
int frekans[26] = {0};
int frekans1[26] = {0};

int d = strlen(a); int f = strlen(b);
for(int i=0;i<d;i++)
{
    frekans[a[i] - 'a']++;

}

for(int i=0;i<f;i++)
{
    frekans1[b[i] - 'a']++;



}

for(int i=0;i<26;i++)
{
if(frekans[i] != frekans1[i])

{
    
    return 0;

}
}
    return 1;
}



int main(void)


{

char a1[]  = {"silent"};   char b1[]  = {"listen"};
printf("1)  %d (beklenen 1)\n", isAnagram(a1, b1));

char a2[]  = {"abc"};      char b2[]  = {"abd"};
printf("2)  %d (beklenen 0)\n", isAnagram(a2, b2));

char a3[]  = {"aab"};      char b3[]  = {"abb"};
printf("3)  %d (beklenen 0)\n", isAnagram(a3, b3));

char a4[]  = {"abc"};      char b4[]  = {"abcd"};
printf("4)  %d (beklenen 0)\n", isAnagram(a4, b4));

char a5[]  = {"abcd"};     char b5[]  = {"abc"};
printf("5)  %d (beklenen 0)\n", isAnagram(a5, b5));

char a6[]  = {"a"};        char b6[]  = {"a"};
printf("6)  %d (beklenen 1)\n", isAnagram(a6, b6));

char a7[]  = {"a"};        char b7[]  = {"b"};
printf("7)  %d (beklenen 0)\n", isAnagram(a7, b7));

char a8[]  = {"hello"};    char b8[]  = {"hello"};
printf("8)  %d (beklenen 1)\n", isAnagram(a8, b8));

char a9[]  = {"abc"};      char b9[]  = {"cba"};
printf("9)  %d (beklenen 1)\n", isAnagram(a9, b9));

char a10[] = {"aabbcc"};   char b10[] = {"abcabc"};
printf("10) %d (beklenen 1)\n", isAnagram(a10, b10));

char a11[] = {"zzz"};      char b11[] = {"zzy"};
printf("11) %d (beklenen 0)\n", isAnagram(a11, b11));

char a12[] = {""};         char b12[] = {""};
printf("12) %d (beklenen 1 mi 0 mı, sen karar ver)\n", isAnagram(a12, b12));





return 0;
}