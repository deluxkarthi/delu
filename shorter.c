#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d \nis the largest number",a);
    else if(b>c)
    printf("%d \nis the largest number",b);
    else
    printf("%d \nis the largest number",c);
};
