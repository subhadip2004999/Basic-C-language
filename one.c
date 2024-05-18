#include<stdio.h>
int main()
{
int num,r,rev=0,sub;
printf("Enter any number: ");
scanf("%d",&num);
sub=num;
while(num>0)
   {
    r=num%10;
    rev=rev*10+r;
    num=num/10;
   }
   if(sub==rev)
   printf("It is a palindrome");
   else
   printf("It is not a palindrome");
return 0;
}