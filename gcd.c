#include<stdio.h>
int gcd(int,int);
void main()
{
    int a,b,result;
    printf("enter 2 numbers:");
    scanf("%d%d",&a,&b);
    result=gcd(a,b);
    printf("gcd is:%d\n",result);
}
int gcd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            return gcd(a-b,b);
        }
        else
        {
            return gcd(a,b-a);
        }
    }
    return a;
}
