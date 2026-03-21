#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "triangle.h"
int main() {
double a, b, c, perimeter, area;
printf( "Calculator triangle\n ");


while (1) {
 printf( "enter the sides of the triangle\n ");
 scanf( "%lf %lf %lf ",  &a,  &b,  &c);

 if (check_triangle(a, b, c) == 1) {
  break;
 }

 else {
  printf( "Triagle with this sides does not exist\n ");
  printf( "Try again\n ");
 }

}

perimeter = calc_perimeter(a, b, c);
area = calc_area(a, b, c);

printf( "\nResult:\n ");
printf( "Perimeter: %lf\n ", perimeter);
printf( "Area: %lf\n ", area);
}
