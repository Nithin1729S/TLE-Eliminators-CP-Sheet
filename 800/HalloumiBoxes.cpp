#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
#define fr first
#define sc second
#define INF LLONG_MAX
#define MOD 1000000007
#define pii pair<int,int>
#define int long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(),x.end()
#define clr(x) memset(x,0,sizeof(x))
#define sortUni(v) sort(all(v)), v.erase(unique(all(v)), v.end())
#define fast_io ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define f0(i,n)  for(int i=0;i<(int)n;i++)
#define f1(i,n)  for(int i=1;i<=(int)n;i++)
#define test int t;cin>>t;while(t--)
#define take(a,n) vi a(n); f0(i,n) cin >> a[i];
#define give(a,n) f0(i,n){cout << a[i] << ' ';}cout << nl;

bool alreadySorted(vi nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]>nums[i+1]) return false;
    }
    return true;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    vi boxes;
    for(int i=0;i<n;i++) {
        int m;
        cin>>m;
        boxes.pb(m);
    }
    if(alreadySorted(boxes)){
        cout<<"YES"<<endl;
        return;
    }
    if(k>=2){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }


}
int32_t main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
    fast_io;
    test
        solve();
    return 0;}

