#include<stdio.h>
int main()
{
int i,from,to;
    printf("enter the in between range");
scanf("%d%d",&from,&to);
printf("even :");
for(i=from;i<=to;i++)
{
if(i%2==0)
        printf("%d ",i);

}
printf("\n");
printf("odd :");
for(i=from;i<=to;i++)
{
        if(i%2!=0)
        printf("%d ",i);

}
}
