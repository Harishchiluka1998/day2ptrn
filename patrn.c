
#include<stdio.h>
int main()
{
        int i,j,space,a,n;
        printf("no of rows");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
                for(j=-n;j<=n;j++)
                {
                        if(j<0)
                                a=-j;
                        else
                                a=j;
                        if((a<=i)&&(a!=0))
                        {
                                if((i==a)&&(a<0))
                                        printf("%c",47);
                                else if((i==a)&&(a>0))
                                        printf("%c",92);
                                else printf(" ");
                        }
                        else printf(" ");
                }
                printf("\n");
        }}
~         
