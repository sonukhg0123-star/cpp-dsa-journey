#include<iostream>
using namespace std;

int main(){
    char x;
    cout<<"enter any character:";
    cin>> x;
    cout<<(int)x; //implicat typecasting
    // interesting for me 
    int b;
    cout<<"\nenter any number 1 to 127:";
    cin>> b;
    cout<<(char)b;
    //Q
    char ch1='a';
    char ch2='A';
    cout<<ch1+ch2<<endl;

}