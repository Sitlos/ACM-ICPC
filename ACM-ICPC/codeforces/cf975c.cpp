#include<bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i=j;i<=k;i++)
typedef long long ll;

ll a[200005];
ll sum[200005];

int main(){
    int n,q;
    cin>>n>>q;
    rep(i,1,n) scanf("%lld",&a[i]),sum[i]=sum[i-1]+a[i];
    ll now=0;

    for(int i=1;i<=q;i++){
        ll k;
        scanf("%lld",&k);
        if(now+k>=sum[n]){
            cout<<n<<endl;
            now=0;
        }else{
            int t=upper_bound(sum+1,sum+1+n,now+k)-sum;
            cout<<n-t+1<<endl;
            now+=k;
        }
    }
    return 0;
}
