#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <time.h>
//#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define per(i,a,n) for(int i=n-1;i>=a;i--)
#define pb push_back
using namespace std;
typedef vector<int> VI;
typedef long long ll;
const ll mod=1000000007;
const int N=2048;


int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int _,n,ans,tp;
    scanf("%d",&_);
	while(_--)
	{
		scanf("%d",&n);
		ans=0;
		tp=n/2;
		n-=tp;
		ans+=(tp+10-1)/10;
		tp=n*2/3;
		n-=tp;
		ans+=(tp+10-1)/10;
		ans+=(n+10-1)/10;
		cout<<ans<<endl;
	}
    return 0;
}
