#include<iostream>///cel mai mare divizor comun
using namespace std;
int main(){
int a, b;
cout<<"a=...";
cin>>a;
cout<<"b=...";
cin>>b;
if((a=b-1) || (a=b+1)){cout<<"1";
                   return 0;}
if(a==0){cout<<b;
         return 0;}
if(b==0){cout<<a;
        return 0;}
if(a==b){cout<<a;
        return 0;}
else{
        while(a!=b)
            {
            if(a>=b){a=a-b;}
            else{b=b-a;}
            a=b;
    cout<<a;
    if(a==1){cout<<"1";
    }
     }///while
    }///else
    return 0;
}
