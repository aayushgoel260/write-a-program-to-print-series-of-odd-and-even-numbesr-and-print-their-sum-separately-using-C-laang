#include<stdio.h>
int main()
{
    int n,i,sum=0,s=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Odd \t Even ");
    for (i=1;i<=n;i=i+2)
    {
        printf("\n %d \t %d",i,i+1);
        sum=sum+i;
        s=s+1+i;
    }
    printf("\n %d \t %d",sum,s);
    return 0;
}