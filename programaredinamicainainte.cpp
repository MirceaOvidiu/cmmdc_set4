#include<iostream>
using namespace std;
///programare dinamica inainte
int main(){
int n=5;

int V[5]={3,5,9,2,3};
 int L[5];
 L[n-1]=1;

for(int i=n-1; i>=0; i--)
    {
    int maxim=0;
    for(int j=i+1; j<=n-1; j=j+1){
    if((L[j]>=maxim)&&(V[j]>=V[i])) {maxim=L[j];}
    }

    L[i]=1+maxim;}

    for(int i=0; i<=n-1; i++)
        {
        cout<<L[i]<<" ";
        }
    return 0;

}

