#include "TrigonometricFunction.h"
double sin(double x) //x is an angle in radian
{
    //restrain the size of x into [-PI,PI]
    while(x>PI)
    x-=2*PI;
    while(x<-PI)
    x+=2*PI;
    double ans=0.0;
    //use the formula to caculate
    //The function caculate the first 15 items to get the approximate value
    for(int i=1;i<=30;i+=2)
    ans+=root1(double(-1),(i-1)/2)*root1(x,i)/factorial1(i);
    return ans;
}
double sinDeg(double x)// x is an angle in degree
{
    //turn the degree to radian and us sinfunction
    return sin(x*PI/180);
}
double cos(double x)//x is an angle in radian
{
    while(x>PI)
    x-=2*PI;
    while(x<-PI)
    x+=2*PI;
    double ans=0.0;
    for(int i=0;i<=30;i+=2)
    ans+=root1(double(-1),(i)/2)*root1(x,i)/factorial1(i);
    return ans;
}
double cosDeg(double x)// x is an angle in degree
{
    return cos(x*PI/180);
}
double tan(double x)//x is an angle in radian
{
    //check if the tan(x)=INF first
    if(cos(x)==0.0)
    return INF;
    return sin(x)/cos(x);
}
double tanDeg(double x)// x is an angle in degree
{
    if(cosDeg(x)==0.0)
    return INF;
    return sinDeg(x)/cosDeg(x);
}
double cot(double x) //x is an angle in radian
{
    if(sin(x)==0.0)
    return INF;
    return cos(x)/sin(x);
}
double cotDeg(double x) // x is an angle in degree
{
    if(sinDeg(x)==0.0)
    return INF;
    return cosDeg(x)/sinDeg(x);
}

double factorial1(int x)//caculate x!
{
    double ans=1.0;
    for(int i=1;i<=x;++i)
    {
        ans*=i;
    }
     return ans;
}
double root1(double x,int n)//caculate x^n
{
    double ans=1.0;
    for(int i=0;i<n;++i)
    {
        ans*=x;
    }
    return ans;
}
    