#include <stdio.h>
void main()
{
    float a,b,c;
    printf("Enter the selling price of articles:");
    scanf("%f",&a);
    printf("Enter the original cost of articles:");
    scanf("%f",&b);
    c=b-a;
    printf("the profit of that articles is:%f",c);
}
