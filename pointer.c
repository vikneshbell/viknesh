
#include <stdio.h>
void main()
{
    int a[3],b,c,*s;
    printf("enter the array variable:");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a;
    for(int i=0;i<3;i++)
    {
        printf("%u\n",s);
        s++;
    }
}



