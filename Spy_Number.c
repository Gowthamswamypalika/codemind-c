#include<stdio.h>
int main()
{
    int n,r,sum=0,product=1,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        product=product*r;
        n=n/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    
}