#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three nums:");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
{

printf("%d is the largest",a);
}
else if (b>a && b>c)
    {


printf("%d is the largest",b);}
else
{printf("%d is the largest",c);}
if (a<b && a<c)
{printf("%d is the smallest",a);}
else if (b<a && b<c)
{printf("%d is the smallest",b);}
else
    printf("%d is the smallest",c);
}
