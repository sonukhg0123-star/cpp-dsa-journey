#include<iostream>
using namespace std;
int main(){
    // wap to area of circle
    cout<<"enter radius of circle: ";
    float radius;
    float pi = 3.14;
    cin>> radius;
    cout<<"area of circle :"<<pi * radius * radius;
    // wap to volume of sphere
    cout<<"\nenter radius of sphere : ";
    float r;
    cin>> r;
    float volume = (4 * 3.14 * r * r * r)/3;
    cout<<"Volume of sphere: ";
    cout<<volume<<endl;
    // square of a number
    cout<<"\nenter a number:";
    float n;
    cin>> n;
    float square = n * n;
    cout<<"square of this number :";
    cout<<square;
    //take 2 numbers input and print their sum
    float a ,b;
    cout<<"\nenter 1st number:";
    cin>> a; 
    cout<<"enter 2nd number:";
    cin>> b;
    float sum = a + b;
    cout<<"sum of this:";
    cout<<sum;
    //calculate simple interest
    float p,ra,t;
    cout<<"\nenter principle :";
    cin>> p;
    cout<<"enter rate :";
    cin>> ra;
    cout<<"enter time:";
    cin>> t;
    cout<<"simple interest is :"<<(p * ra * t)/100;
    
}