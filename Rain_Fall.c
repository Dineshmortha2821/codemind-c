#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<3)
    {
        printf("LIGHT");
    }
    else if(3>=n && n<7)
    {
        printf("MODERATE");
    }
    else
    {
        printf("HEAVY");
    }
}