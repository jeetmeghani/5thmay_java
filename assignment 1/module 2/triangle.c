#include<stdio.h>
int main()
{
    int b,l;
    float area;
    printf("enter the length of triangle : ");
    scanf("%d",&l);
    printf("enter the side length  of triangle : ");
    scanf("%d",&b);

    area=0.5*l*b;
    printf("area=%d",area);
}