#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pw(b,p)         pow(b,p) + 0.1
#define rep(i,s,e)		for(int i=s ; i<e ; i++)

void file(){

	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" , stdout);
	#endif
}

int32_t main(){	
	//file();

	w(t){

		string s;
		cin >> s;
		vi v;
		v.pb(0);

		rep(i , 0 , s.length()){
			if(s[i]=='R')
				v.pb(i+1);
		}
		v.pb(s.length()+1);

		int ans = 0;

		rep(i,0,v.size()-1){
			ans = max(ans , v[i+1]-v[i]);
		}

		cout << ans << endl;

	}
	

}
