#include <stdio.h>
void main()
{
    int a[20],b,d,f,h,i;
    b=sizeof(a);
    float c[25];
    d=sizeof(c);
    char e;
    f=sizeof(e);
    double g[40];
    h=sizeof(g);
    i=b+d+f+h;
    printf("%d",i);
}
