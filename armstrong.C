#include<stdio.h>
int main()
{
int n,num,digits,sum=0;
printf("enter the number:");
scanf("%d",&n);
  num=n;
while(num!=0)
{
digits=num%10;
  sum=sum+(digits*digits*digits);
num=num/10;
}
  if(sum==n)
    printf("yes");
  else
    printf("no");
  return 0;
  }
