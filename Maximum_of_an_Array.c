#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    printf("%d",m);
}