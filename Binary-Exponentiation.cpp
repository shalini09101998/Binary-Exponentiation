#include<bits/stdc++.h>
#define ll long long
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<" ";
#define n() cout<<endl;
#define inp(x) cin>>x;
#define pa(a,n) for(ll i=0;i<n;i++)cout<<a[i]<<" ";
#define ll long long
using namespace std;

ll power(ll a,ll b) {
	ll res = 1;
    	while (b > 0) {
        	if (b & 1)
            	res = res * a;
        	a = a * a;
        	b >>= 1;
    	}
    return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,p;
	inp(n);inp(p);
	pn(power(n,p));
	return 0;
}
