#include<stdio.h>
#include<conio.h>
void main()
{
    int num,r,dig=0;
    printf("Enter a number");
    scanf("%d",&num);
    while(num!=0)
    {
        r=num%10;
        dig=dig+1;
        num=num/10;
    }
    printf("The no. of digits are:%d",dig);
    getch();
}