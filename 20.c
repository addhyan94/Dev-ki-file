// Write a program to input length of base and height of a triangle and calculate its area.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float b,h,a;
     printf("\n Enter the length of the tringle = ");
     scanf("%f",&b);
     printf("\n Enter the height of the tringle = ");
     scanf("%f",&h);
     a=0.5*b*h;
     printf("\n Area of the triangle = %f",a);
}
