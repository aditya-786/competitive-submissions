#include<bits/stdc++.h>
#define pb(x) push_back(x);
#define int long long 
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    
    if(n<=125) cout<<4;
    else if(n<=211) cout<<6;
    else cout<<8;
    
    cout<<endl;
    
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

