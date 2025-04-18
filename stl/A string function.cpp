// Problem: A. String Functions
// Contest: Codeforces - Standard #2 (binary search , stack , queue, deque , priority queue)
// URL: https://codeforces.com/group/c3FDl9EUi9/contest/263096/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// Problem: L. Diverse Team
// Contest: Codeforces - Standard #1 (Frequency , prefix sum , vector , pair ,struct)
// URL: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/L
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>  


#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based
#define for0l(i, n) for (ll i = 0; i < (ll)(n); ++i) // 0 based indexing

//short hand for usual tokens
#define pbb pop_back
#define pb push_back
#define fi first
#define se second

// to be used with algorithms that processes a container Eg: find(all(c),42)
#define all(x) (x).begin(), (x).end() //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal

// traversal function to avoid long template definition. Now with C++11 auto alleviates the pain.
#define tr(c,i) for(__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)

// find if a given value is present in a container. Container version. Runs in log(n) for set and map
#define present(c,x) ((c).find(x) != (c).end())

//find version works for all containers. This is present in std namespace.
#define cpresent(c,x) (find(all(c),x) != (c).end())

// Avoiding wrap around of size()-1 where size is a unsigned int.
#define sz(a) int((a).size())


using namespace std;

// Shorthand for commonly used types
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
typedef unordered_map<int, int> umii;
typedef map<int, int> omii;
typedef map<int, int> omiil;
void solve(){
	int n,q ;cin>>n>>q;
	string arr;cin>>arr;
	while(q--){
		string str ;cin>>str;
		ll x ;
		if(str == "pop_back"){
			arr.pbb();
		}
		else if (str == "front"){cout<<arr.front()<<endl;}
		else if (str == "back"){cout<<arr.back()<<endl;}
		else if (str == "sort"){
			ll y ; cin>>x>>y;
			if(x>y){swap(x,y);}
			x--;y--;
			sort(arr.begin() + x, arr.begin() +y+1);
		}
		else if (str == "reverse"){
			ll y ; cin>>x>>y;
			if(x>y){swap(x,y);}
			x--;y--;
			reverse(arr.begin() + x, arr.begin() +y+1);
		} 
		else if (str == "print"){
			cin>>x;
			cout<<arr.at(x-1)<<endl;
		}
		else if(str == "substr"){
			ll y; cin>>x>>y;
			if(x>y){swap(x,y);}
			x--;y--;
			cout<<arr.substr(x,y-x+1)<<endl;
		}
		else if (str == "push_back"){
			char x;
			cin>>x;
			arr.pb(x);
		}
		
		
	}

	
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    int t=1;
	// cin>>t; 
	while(t--) 
	{ 
	  solve(); 
	  cout<<"\n"; 
	} 
    return 0;
}