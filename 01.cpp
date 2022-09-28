#include<iostream>
using namespace std;

int main(){
    int r;
    float pi = 3.14;
    float area;
    float circumference;

    cout<<"Enter the radius: "<< endl;
    cin>>r;

    area = pi*r*r;
    cout<<"Area of the circle is: \n"<< area<< endl;
    circumference = 2*pi*r;
    cout<<"Circumference of the circle is: \n"<< circumference;

    return 0;
}