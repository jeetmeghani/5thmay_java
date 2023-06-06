#include<stdio.h>
int main()
{
    int a,b,addition,substraction,multiplication,division,modulo;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("enter the value of b ");
    scanf("%d",&b);

addition=a+b;
printf("add : %d",addition);

substraction=a-b;
printf("\nsub : %d",substraction);

multiplication=a*b;
printf("\nmul : %d",multiplication);

division=a/b;
printf("\ndiv : %d",division);

modulo=a%b;
printf("\nmodulo : %d",modulo);
    
}