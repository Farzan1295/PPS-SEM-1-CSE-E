#include<stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("ENTER TWO NUMBERS :");
    scanf("%d %d" , &a,&b);
    printf("enter the operator (+,-,*,/,%%):");
    scanf(" %c" , &choice);
    switch(choice)
    {
        case '+':
           printf("ADDITION=%d\n",a+b);
           break;
        case '-':
           printf("SUBTRACTION=%d\n",a-b);
           break;
        case '*':
           printf("MULTIPLICATION=%d\n",a*b);
           break;
        case '/':

           if(b!=0)
           printf("DIVISION=%d\n",a/b);
           else

           printf("UNDEFINED");
           break;
        case '%':

           if(b!=0)
           printf("MODULUS=%d\n",a/b);
           else

           printf("UNDEFINED");
           break;
        default:
           printf("THE OPERATOR IS INVALID");

    }
    return 0;

}
