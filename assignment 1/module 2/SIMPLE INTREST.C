#include<stdio.h>
int main()
{
    int p,r,n,SI;
    printf("enter the value of principal amount: ");
    scanf("%d",&p);
    printf("enter the rate of intrest : ");
    scanf("%d",&r);
    printf("enter the value of  time: ");
    scanf("%d",&n);

SI =p*r*n/100;

printf("simple intrest = %d",SI );
}