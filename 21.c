// Write a program to input the diameter of the circle, calculate area and circumference.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    int  d,r,a,c;
    printf("\n Enter the diameter of the circle =");
    scanf("%d",&d);
    r=d/2;
    a=3.14159*r*r;
    c=2*3.14159*r;
    printf("\n Area of the circle =%d",a);
    printf("\n Circumference of the circle =%d",c);
}
