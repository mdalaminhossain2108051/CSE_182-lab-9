#include<iostream>
using namespace std;
int main()
{
    float r,D,A,C,PI=3.1416;
    cout<<"Enter the value of radius= ";
    cin>>r;
    D=2*r;
    cout<<"\nDiameter= "<<D;
    C=2*PI*r;
    cout<<"\nCircumference= "<<C;
    A=PI*r*r;
    cout<<"\nArea= "<<A;
    return 0;
}
