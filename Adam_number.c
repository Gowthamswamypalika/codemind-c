#include<stdio.h>
int main()
{
    int n,i,t,sq,r,rev=0,r1,rev1=0;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
       r=n%10;
       rev=rev*10+r;
       n=n/10;
    }
    t=rev*rev;
    while(t!=0)
    {
      r1=t%10;
      rev1=rev1*10+r1;
      t=t/10;
}  

    
if(rev1==sq)
{
    printf("True");
}
else
{
    printf("False");
}

}
