#include<iostream>
using namespace std;
///c.m.m.d.c din A(n) a.k.a ex2 din setul 4
///!!!momentan este un ciot, nu ruleaza corect

int main(){
int a,b,c,d,n;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
int cmmdc;

 for(int i = 0; i<n; i++)
 {
     if(i == 0)
     {
          if(a == b)
          {
           cmmdc = a;
          }
          while(a != b)
          {
              if(a>b)
              {
                  a=a-b;
              }
          if(b>a)
          {
              b=b-a;
          }
         cmmdc = a;
         cout<<"a";
          }
          continue;
     }
     if(i==1){
     if(cmmdc == c)
          {
           cmmdc = c;
          }
          while(cmmdc != c)
          {
              if(cmmdc>c)
              {
                  cmmdc=cmmdc-c;
              }
          if(c>cmmdc)
          {
              c=c-a;
          }
         cmmdc = c;}
         continue;}


        if(i==2)
        {
        cout<<"d=...";cin>>d;
        if(cmmdc == d)
          {
           cmmdc = d;
          }
          while(cmmdc != d)
          {
              if(cmmdc>d)
              {
                  cmmdc=cmmdc-d;
              }
          if(d>cmmdc)
          {
                d=d-a;
          }
         cmmdc = d;}
         cout<<d;







 }



return 0;}
}
