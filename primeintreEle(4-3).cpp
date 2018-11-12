
#include<iostream>///test daca sunt prime intre ele
using namespace std;
int main(){
int a, b;
cout<<"a=...";
cin>>a;
cout<<"b=...";
cin>>b;
if((a=b-1) || (a=b+1)){cout<<"prime intre ele";
                   return 0;}
if(a==b){cout<<a;}
if(a==0){cout<<b;
         return 0;}
if(b==0){cout<<a;
        return 0;}
else{
        while(a!=b)
            {
            if(a>=b){a=a-b;}
            else{b=b-a;}
            a=b;
    cout<<a;
    if(a==1){cout<<"prime intre ele";
    }
     }///while
    }///else
    return 0;
}
