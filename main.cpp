#include<iostream>
#include "TrigonometricFunction.h"
using namespace std;
void testing1(double angle1)
{
    cout<<"sin("<<angle1<<")="<<sin(angle1)<<endl;
    cout<<"cos("<<angle1<<")="<<cos(angle1)<<endl;
    cout<<"tan("<<angle1<<")="<<tan(angle1)<<endl;
    cout<<"cot("<<angle1<<")="<<cot(angle1)<<endl;
}
void testing2(double angle2)
{
    cout<<"sinDeg("<<angle2<<")="<<sinDeg(angle2)<<endl;
    cout<<"cosDeg("<<angle2<<")="<<cosDeg(angle2)<<endl;
    cout<<"tanDeg("<<angle2<<")="<<tanDeg(angle2)<<endl;
    cout<<"cotDeg("<<angle2<<")="<<cotDeg(angle2)<<endl;
}
int main()
{
    cout<<"Testing..."<<endl;
    //demonstrate the sin() functions
    testing1(0.0);
    testing1(0.5);
    testing1(-1.0);
    testing1(100.0);
    //demonstrate the sinDeg() functions
    testing2(0.0);
    testing2(45.0);
    testing2(-186.0);
    testing2(750.0);
    cout<<"End";
    return 0;
}