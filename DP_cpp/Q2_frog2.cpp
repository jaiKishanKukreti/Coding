 #include<bits/stdc++.h>
 using namespace std;

 // recursive:
 int frog(int h[],int i,int n,int k){
    if(i==n-1) return 0;
    int ans=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i+j<n){
        ans=min(ans,abs(h[i]-h[i+j])+frog(h,i+j,n,k));
        }
    }
    return ans;

 }
 int main(){
    int n;
    cout<<"Enter the number of stone : "<<endl;
    cin>>n;
    int h[n];
    cout<<"Enter the heights of the stone: "<<endl;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    int k;
    cout<<"Enter the no of possible jumps: "<<endl;
    cin>>k;
    cout<<frog(h,0,n,k);
 }