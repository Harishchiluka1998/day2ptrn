#include <stdio.h>
int main()
{
   int a[20],b[20];
   int n,i,j=0,k,temp=0;
   printf("enter elements");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("\norginal sequence : ");
   for(i=0;i<n;i++)
   for(k=0;k<=i;k++)
   {  j++;
     if(j<=n)
     {
     b[j]=i+1;
     printf("%d  ",i+1);
     }
   }
   printf("\n");
for(k=0;k<n;k++)
{
    if(a[k]==b[k+1]) 
	temp++;
}
if(temp==n) 
{
printf("input sequence is correct"); 
}
else
{
 printf("input sequence is not correct");
}
return 0;
}
