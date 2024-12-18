#include<bits/stdc++.h>
using namespace std;

void getdigit(int n,vector<int>&v){
    while(n!=0){
        if(n%10!=0){
             v.push_back(n%10);
        }
       
        n/=10;
    }
    
}

int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    vector<int>v;
    getdigit(n,v);
    
    int result=INT_MAX;
    
    for(auto it: v){
        if(it!=0){result=min(result,f(n-it));}
        
    }
    return result +1;
}
int main(){
    int n;
    cout<<"Enter the value of N: "<<endl;
    cin>>n;
   // vector<int>dp(1000005,INT_MAX);
    cout<<f(n);
}