//APLLY SIZE OF ALL THE OPERATORS ON ALL ABOVE OPERATORS AND THEIR VARIABLES??


#include<iostream>
using namespace std;
 void integerfunction()
{
    int a=10;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(int)<<endl;
}
void floatfunction()
{
    float a=10.00;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(float)<<endl;
}
void doublefunction()
{
    double a=10.00;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(double)<<endl;
}
void characterfunction()
{
    char a='A';
    cout<<sizeof(a)<<endl;
    cout<<sizeof(char)<<endl;
}
void Bollianfunction()
{
    bool a=1;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(bool)<<endl;
}
void shortfunction()
{
    short a=10;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(short)<<endl;
}
void longfunction()
{
    long a=1000000;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(long)<<endl;
}
void longdoublefunction()
{
    long double a=10.0000000;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(int)<<endl;
}

int main()
{

 integerfunction();
 floatfunction();
 doublefunction();
 characterfunction();
 Bollianfunction();
 shortfunction();
 longfunction();
 longdoublefunction();
 return 0;
}
