#include<bits/stdc++.h>
#define pb(x) push_back(x);
#define int long long 
using namespace std;

void solve(){
    
    int s,t;
    cin>>s>>t;
    
    int count = 0;
    
    for(int i=0;i<=s;i++){
        for(int j=0;j<=s;j++){
            for(int k=0;k<=s;k++){
                if(i+j+k <= s && i*j*k<=t) count++;
            }
        }
    }
    
    cout<<count;
    
}

int32_t main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
   // cin>>t;
    
    while(t--) solve();
    
    return 0;
}

