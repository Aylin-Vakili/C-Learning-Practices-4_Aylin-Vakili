#include <stdio.h>
#include <math.h>

int main ()
{
    int x, y, z;

    printf("Input the three sides of a triangle: ");
     scanf("%d %d %d", &x, &y, &z);

    // Let's check if it is possible to draw a right triangle
    printf("Is it possible to draw a right triangle?\n");

    if( (x*x) + (y*y) == (z*z) || (x*x) + (z*z) == (y*y) || (y*y) + (z*z) == (x*x) )
        printf(" Yes\n ");
    else
        printf(" No\n ");

    return(0);
}
//Made by Aylin Vakili - Student number : 14025141115 - Practice 1
