#include<stdio.h>
int main()
{
    int a=0,b=1,c,num,i;
    printf("Enter the number of terms: ");
    scanf("%d",&num);
    printf("%d %d",a,b);
    for(i=1;i<=num;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
   return 0; 
}