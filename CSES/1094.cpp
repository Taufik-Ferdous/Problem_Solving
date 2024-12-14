#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    long long int ans=0;
    for(int i=1; i<n; i++)
        if(arr[i-1]>arr[i]){
            ans+=(arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }

    cout<<ans <<endl;
}
