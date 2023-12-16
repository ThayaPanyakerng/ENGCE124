#include<stdio.h>
 
int main()
{
    int dec;
    int bin[100];
    int i=0, j;
     
    printf(" Input Decimal value : ");
     
    scanf("%d", &dec);
     
    do
    {
        bin[i] = dec % 2;
        dec /= 2;
        i++;
    }while(dec > 0);
 
 
    printf("\n Binary value is ");
     
    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", bin[j]);   
    }
     
    return 0;
}

