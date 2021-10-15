///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define ld long double
#define pll pair<ll, ll>
#define vpp vector<pair<ll, ll>>
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a, b) memset(a, b, sizeof(a))
#define all(vtor) vtor.begin(), vtor.end()
#define rall(vtor) vtor.rbegin(), vtor.rend()
 
#define pi 2 * acos(0.0)
#define tani(a) atan(a) / (pi / 180)
#define sini(a) asin(a) / (pi / 180)
#define cosi(a) cos(a) / (pi / 180)
#define cos(a) cos(a *pi / 180)
#define sin(a) sin(a *pi / 180)
#define tan(a) tan(a *pi / 180)
const ll mod = 1e9 + 7;
 
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
 
#define EPS 1e-13
#define maxii 32000
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return ((a * b) / gcd(a, b)); }
 
 
int main()
{
    // ll c=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // avoiding collision using unordered_map only in CF
    //map_name.load_factor(0.25);
    //map_name.reserve(1024);
 
    // #ifndef ONLINE_JUDGE
    //     freopen("D:/Code_c++/input.txt", "r", stdin);
    //     freopen("D:/Code_c++/output.txt", "w", stdout);
    // #endif
    ll t;
    cin>>t;
    while(t--)
    {
    ll a,b,n,k;
    ll m,d;
    cin>>n>>m>>a>>d;
    vector<ll>v;
    
    for(ll i=0;i<=4;i++)
    v.pb(a+d*i);
 
   // cout<<"vector -> "<<endl;
    // for(auto it: v)
    // cout<<it<<" ";
    // cout<<endl;
    ll ans=0;  
    for(ll mask=1;mask<(1<<5);mask++)
    {
        ll lc = 1, cnt=0;
        for(ll i=0;i<5;i++)
        {
            if(mask & (1<<i))
            {
                lc = lcm(lc,v[i]);
                cnt++;
            }
        }
        if(cnt%2!=0)
        ans+=m/lc;
        else
        ans-=m/lc;
    }
    ll n2 = n-1;
    ll ans2=0;
 
    for(ll mask=1;mask<(1<<5);mask++)
    {
        ll lc = 1, cnt=0;
        for(ll i=0;i<5;i++)
        {
            if(mask & (1<<i))
            {
                lc = lcm(lc,v[i]);
                cnt++;
            }
        }
        if(cnt%2!=0)
        ans2+=n2/lc;
        else
        ans2-=n2/lc;
    }
     ll total_div = ans - ans2;
     ll not_div = (m-n+1)-total_div;
     cout<<not_div<<endl;
    }
 
    return 0;
} 