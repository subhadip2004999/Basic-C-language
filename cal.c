#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,ch,ans;
    printf("Enter First Value :");
    scanf("%d",&a);
    printf("Enter Second Value :");
    scanf("%d",&b);
    printf("__Enter your choice__\n");
    printf("\n1.Add\n2.Subtract\n3.Multiplication\n4.Division\n5.Modulus\n\nYour choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        ans=a+b;
        break;
        
        case 2:
        ans=a-b;
        break;

        case 3:
        ans=a*b;
        break;

        case 4:
        ans=a/b;
        break;

        case 5:
        ans=a%b;
        break;

        default:
        printf(" Invalid !");
        break;
    }
    printf("The answer is :%d",ans);
    getch();
}