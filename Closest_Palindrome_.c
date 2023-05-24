#include<stdio.h>
int p(int);
int main()
{
    int i,n,a,b,d1,d2;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(p(i))
        {
            a=i;
            d1=i-n;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(p(i))
        {
            b=i;
            d2=n-i;
            break;
        }
    }
    if(d1>d2)
    {
        printf("%d",b);
    }
    else if(d1==d2)
    {
        printf("%d %d",b,a);
    }
    else
    {
        printf("%d",a);
    }
}
int p(int n)
{
    int t,r,rev=0;
    t=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}