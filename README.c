#include<stdio.h>
int main()
{
int r,n,s=1,temp,temp1;
scanf("%d",&n);
temp=n;
while(n!=0)
{
r=n%10;
s=s*r;
n/=10;
}
temp1=temp*s;
printf("%d",temp1);
return 0;
}
