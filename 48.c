//Write a program to input 3 numbers and print largest number.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("\n Enter the value of a: ");
    scanf("%d", &a);
    printf("\n Enter the value of b: ");
    scanf("%d", &b);
    printf("\n Enter the value of c: ");
    scanf("%d", &c);
    if(a>b&&a>c){
        printf("%d is the largest",a);
    }
    else if(b>a&&b>c){
        printf("%d is the largest",b);
    }
    else{
        printf("%d is the largest",c);
    }
}
