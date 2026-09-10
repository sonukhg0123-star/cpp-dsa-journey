#include<iostream>
using namespace std;
int main(){
int x = 10;
cout<<x<<endl;
x++; //x = x + 1
cout<<x<<endl;
int y = 10;
cout<<y<<endl;
y--; //y = y - 1
cout<<y<<endl;
int z = 8;
cout<<z<<endl;
++z; 
cout<<z<<endl;
int a = 10;
cout<<a<<endl;
--a; 
cout<<a<<endl;
int b = 10;
    int c = 10;

    // Prefix Decrement: 
    cout << "Prefix (--b): " << --b << endl; // output: 9
    cout << "present value of b: " << b << endl;   // output: 9

    // Postfix Decrement: 
    cout << "\nPostfix (c--): " << c-- << endl; // output: 10 (old value)
    cout << "persent value of c: " << c << endl;   // output: 9 (now value is decreased)
}