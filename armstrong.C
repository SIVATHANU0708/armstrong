#include<stdio.h>
int main(0
{
int n,multiple=1,digit;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
digits=n%10;
for(i=1;i<=3;++i)
{
multiple=multiple*digits;
}
n=n/10;
}

