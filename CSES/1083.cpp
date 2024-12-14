#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n+1]={0};

    for(long long int i=1; i<n; i++){
        long long int in;
        cin>>in;
        arr[in]++;
    }
    for(long long int i=1; i<=n; i++){
        if(arr[i] == 0){
            cout<<i <<endl;
            break;
        }
    }
}
