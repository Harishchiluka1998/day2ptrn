
#include<stdio.h>
int main()
{
        double i,j;
        char choice;
printf("enter the 2 numbers : ");
scanf("%lf%lf",&i,&j);
printf("enter a for add enter s for sub");
scanf(" %c",&choice);
switch(choice)
{

        case 'a' :
                printf("%lf",i+j);
                 break;
        case 's' :
                 printf("%lf",i-j);
                 break;
        default :printf("wrong choice");
}
return 0;
}

