#include <stdio.h>
void main()
{
    int a;
    printf("enter the years:");
    scanf("%d",&a);
    if(a>5)
    {
        int b,c,d;
        printf("enter the loan details:");
        scanf("%d",&b);
        printf("enter the salary of employee:");
        scanf("%d",&c);
        printf("enter the loan amount:");
        scanf("%d",&d);
        if(b==0)
        {  
            if(d<(3*c))
            {
                printf("loan is sancation");
            }
            else
            {
                printf("loan is not sancation");
            }
        }
        
    }
    else
    {
        printf("loan is not sancation");
    }
}
