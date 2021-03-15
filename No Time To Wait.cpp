#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,H,x,curr;
    cin>>n>>H>>x;
    for (int i = 0;i < n;i++){
        cin>>curr;
        if(curr + x >= H){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
}
int main(){
   solve();
   return 0;
}
