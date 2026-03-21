#include <math.h>
#include "triangle.h"
double calc_perimeter(double a, double b, double c) {
return a + b + c;
}
double calc_area(double a, double b, double c) {
double p = calc_perimeter(a, b, c) / 2.0;
return sqrt(p * (p - a) * (p - b) * (p - c));
}
int check_triangle(double a, double b, double c) {
if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
return 1;
}
return 0;
}
