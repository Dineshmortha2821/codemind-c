#include<stdio.h>
int main()
{
    int n,s=0,firstDigit,lastDigit;
    scanf("%d",&n);
    lastDigit= n % 10;
    while(n >= 10)
    {
        n=n / 10;
    }
    firstDigit= n;
    s= lastDigit+firstDigit;
    printf("%d",s);
}