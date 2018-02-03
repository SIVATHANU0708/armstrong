#include<stdio.h>
int main(0
{
int n,multiple=1,digit,sum=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
digits=n%10;
for(i=1;i<=3;++i)
{
multiple=multiple*digits;
}
  sum=sum+multiple;
n=n/10;
}
  if(sum==n)
    printf("yes");
  else
    printf("no");
  return 0;
  }
