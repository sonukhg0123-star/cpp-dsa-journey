#include<iostream>
using namespace std;
int main(){
    // take age as input and tell if person can drive or not
    int age;
    cout<<"enter your age:";
    cin>>age;
    if(age>=18)
    cout<<"you can drive";
    else cout<<"you cannot drive";
    
    //take positive integer input and tell it is odd or even
    int n;
    cout<<"\nenter anumber:";
    cin>>n;
    if(n%2==0)
    cout<<"this number uis even";
    else cout<<"this number is odd";
    
    // take positive integer input and tell iof it is divisible by 5 or not
    int nu;
    cout<<"\nenter your number:";
    cin>>nu;
    if(nu%5==0)
    cout<<"number is divisible by 5";
    else cout<<"number isn't divisible by 5";
    
    //take integer input and print the absolute value of that integer
    int m;
     cout<<"\nenter your number:";
     cin>>m;
     if(m<0) cout<<-m;
     else cout<<m;
     
     //take real number inputr and check if it is an integer or not
     float i;
     cout<<"\nenter real number:";
     cin>>i;
     int j = (int)i;
     if(i==j)
     cout<<"this is integer";
     else cout<< "this is not integer";
    
     //if cost price and selling price of an item ius input through the keyboard, wap to determine whether the seller 
     // has made profit or incurred loss. also determine how much profit he made or loss he incurred.
     float cp;
     float sp;
     cout<<"\nenter cost price:";
     cin>>cp;
     cout<<"enter selling price:";
     cin>>sp;
     if(sp < cp) cout<<"loss="<<cp-sp;
     if(sp > cp)cout<<"profit="<<sp-cp;
     if(sp == cp) cout<<"\nnothing";
    
     //second method
     float ccp;
     float ssp;
     cout<<"\nenter cost price:";
     cin>>ccp;
     cout<<"enter selling price:";
     cin>>ssp;
     if(ssp < ccp) cout<<"loss="<<ccp-ssp;
     else if(ssp > ccp)cout<<"profit="<<ssp-ccp;
     else cout<<"\nnothing";

}
