#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long ans= 0;
    string str;
    cin>>str;
    for(int i = 0;i < str.length()-1;i++){
        if(str[i] == '1' && str[i+1] == '0')
            ans += 1;
    }
    if(str[str.length()-1] == '1')
                ans += 1;
    cout<<ans<<"\n";
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
   return 0;
}
