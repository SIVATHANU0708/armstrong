#include<stdio.h>
int main(0
{
int n,,digits,sum=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
digits=n%10;
  sum=sum+(digits*digits*digits);
n=n/10;
}
  if(sum==n)
    printf("yes");
  else
    printf("no");
  return 0;
  }
