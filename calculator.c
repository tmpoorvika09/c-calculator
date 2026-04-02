#include<stdio.h>
int main()
{
int a,b, choice;
float c;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("Enter the choice:1=add,2=sub,3=mul,4=div-");
scanf("%d",&choice);
if(choice==1)
{
    c=a+b;
    printf("The Sum is:%f",c);
}
else if(choice==2)
{
    c=a-b;
   printf("The Difference is:%f",c); 
}
else if(choice==3)
{
    c=a*b;
    printf("The Product is:%f",c);
}
else if(choice==4)
{
    c=a/b;
    printf("The Quotient is:%f",c);
}
else
{
    printf("Invalid!");
}
}
