#include<stdio.h>
int main()
{
    char X;
    scanf("%c",&X);
    if(X>='A'&& X<='Z'){
    printf("uppercase alphabet");
    }
    else if (X>='a'&& X<='z'){
    printf("lowercase alphabet");
    }
    else{
    printf("not an alphabet");
    }
}