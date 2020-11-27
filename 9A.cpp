#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a%b==0)return b;
    else gcd(b,a%b);
}

int main(){
    int a,b;cin>>a>>b;
    if(a>b)swap(a,b);
    int n=max(a,b);
    int x=6-(n-1);
    int y=gcd(x,6);
    cout<<x/y<<"/"<<6/y<<endl;
}
