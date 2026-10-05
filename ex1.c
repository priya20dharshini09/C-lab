#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("=====OPERATORS AND EXPRESSION===== \n");
printf("enter the first number");
scanf("%d",&a);
printf("enter the second number");
scanf("%d",&b);
printf("\n_____MENU_____\n");
printf("1.addiion \n");
printf("2.subtraction \n");
printf("3.multiplication \n");
printf("4.division \n");
printf("5.modulus \n");
printf("\n enter your choice :");
scanf("%d",&choice);
switch(choice)
{
case1:
    res=a+b;
    printf("result=%d",res);
    break;
case2:
    res=a-b;
    printf("result=%d",res);
    break;
case3:
    res=a*b;
    printf("result=%d",res);
    break;
case4:
    if (b!=0)
    {
    res=a|b;
    printf("result=%d",res);
    }
    else
    {
    printf("division by zero is not possible.");
    }
    break;
case5:
    if(b!=0)    
    {
    res=a%b;
    printf("result=%d",res);
    }
    else
    {
    printf("modulus by zero is not possible");
    }
    break;
default:
    printf("invalid choice");
}
return 0;
}


