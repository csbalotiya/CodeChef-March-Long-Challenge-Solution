#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n,counter = 0;
    cin>>n;
    long long arr[n];
//    bool flag = false;
    for(long long i = 0;i < n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(long long i = 0;i < n;i++){
        if(arr[i] > i+1){
            cout<<"Second\n";
            return;
        }else{
            counter += (i+1 - arr[i]);
        }
    }
    if(counter%2 == 0)
        cout<<"Second\n";
    else
        cout<<"First\n";
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
   return 0;
}
