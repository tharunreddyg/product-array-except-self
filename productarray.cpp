#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"enter the size of an array";
    cin>>N;
    int num[N];
    cout<<"enter the elements into the array"<<endl;
    for(int i=0;i<N;i++){
        cin>>num[i];
    }
    int ans[N];
    ans[0]=1;
    for(int i=1;i<N;i++){
        ans[i]=num[i-1]*ans[i-1];
    }
    int suffix=1;
    for(int i=N-2;i>=0;i--){
        suffix*=num[i+1];
        ans[i]*=suffix;

    }
    for(int i=0;i<N;i++){
        cout<<ans[i]<<" ";
    }
}