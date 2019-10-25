#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll solve(vector<ll>v, ll m)
{
    ll l = v.size();
    ll dp[l+1][m+1];
    memset(dp,0,sizeof(dp));
    for(ll i=0;i<l;i++)
        dp[i][0] = 1;
    for(ll i=1;i<=l;i++)
    {
        for(ll j=1; j<=m; j++)
        {
                if(v[i-1] > j)
                {
                    dp[i][j] = dp[i-1][j];
                }
                else
                {
                    dp[i][j] = dp[i-1][j] + dp[i][j - v[i-1]];
                }
        }
    }

    for(ll i=0;i<=l;i++)
    {
        for(ll j=0; j<=m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return dp[l][m];
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i,x,m;
	    cin>>n;
	    vector<ll>v;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        v.push_back(x);
	    }

	    cin>>m;
	    cout<< solve(v,m)<<endl;
	}
	return 0;
}
