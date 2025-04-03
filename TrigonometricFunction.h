#ifndef TRIGONOMETRIC_FUNCTION_H
#define TRIGONOMETRIC_FUNCTION_H

//define the constant
const double PI=3.141592653589793;
const double INF=1.0E+20;

//prototype claim the function
double sin(double x); //x is an angle in radian
double sinDeg(double x); // x is an angle in degree
double cos(double x); //x is an angle in radian
double cosDeg(double x); // x is an angle in degree
double tan(double x); //x is an angle in radian
double tanDeg(double x); // x is an angle in degree
double cot(double x); //x is an angle in radian
double cotDeg(double x); // x is an angle in degree

//claim the factorial and power function
double factorial1(int x);//caculate x!
double root1(double x,int n);//caculate x^n
#endif
