#include<bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;
#define ll long long
#define ld long double
#define ull u ll
#define vi vector<ll>
#define vc vector<char>
#define MOD 1000000007
#define MOD1 998244353
#define MAX 1000001
#define pb push_back
#define pop pop_back
#define umap unordered_map
#define mp make_pair
#define fill(a,k) memset(a,k,sizeof(a))
#define pi pair<ll,ll>
#define F first
#define S second
#define asort(a,n) sort(a,a+n)
#define adsort(a,n) sort(a,a+n,greater<int>())
#define vsort(v)  sort(v.begin(),v.end())   
#define vdsort(v) sort(v.begin(),v.end(),greater<int>())
#define sreverse(s) reverse(s.begin(),s.end())    
#define upbound(v,x) upper_bound(v.begin(),v.end(),x)
#define lbound(v,x) lower_bound(v.begin(),v.end(),x)
#define oset ordered_set
#define int ll
#define debug(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<" "<<y<<"\n"

//std ::nth element
 
//Space for Global variables--------------------
 
//vi a[100];// list of neighbours of the given node n-index
//bool vis[100];
// int a[1000001];
// map<int,vector<pi>> m;
// map<int,vi> a;
// int ans=0;

//----------------------------------------------

 
//Functions-------------------------------------



// ll gcd(ll a, ll b) 
// { 
//     if (b == 0) 
//         return a; 
//     return gcd(b, a % b);  
      
// }
// int power(int x, int y, int p)
// {
//     int res = 1;     // Initialize result
 
//     x = x % p; // Update x if it is more than or
//                 // equal to p
  
//     if (x == 0) return 0; // In case x is divisible by p;
 
//     while (y > 0)
//     {
//         // If y is odd, multiply x with result
//         if (y & 1)
//             res = (res*x) % p;
 
//         // y must be even now
//         y = y>>1; // y = y/2
//         x = (x*x) % p;
//     }
//     return res;
// }
 

// ll mod(ll x)
// {
//   if(x<0)
//     return(-x);
//   else
//     return(x);
// }

// ll digits(ll x){
//     int count=0;
//     while(x){
//         count++;
//         x/=10;
//     }
//     return count;
// }

// int len(int x){
//     if(x==0)
//         return 1;
//     int ans=0;
//     while(x){
//         ans++;
//         x/=10;
//     }
//     return ans;
// }
int modFact(int n, int p)
{
    if (n >= p)
        return 0;
 
    int result = 1;
    for (int i = 1; i <= n; i++)
        result = (result * i) % p;
 
    return result;
}
 
// int meX(int v[],int n){
//     int x=0;
//     unordered_map<int,int> m;
//     for(int i=0;i<n;i++){
//         int cur = v[i];
//         m[cur]++;
//      if(cur == x){
//          while(m[x]){
//              x++;
//          }
//      }   
//     }
//     return x;
// }



//----------------------------------------------
signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);// input from input.txt
  freopen("output.txt","w",stdout);// output into output.txt
#endif
 
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  int p[n];
  for(int i=0;i<n;i++){
    cin>>p[i];
  }

  int flag=0;
  for(int i=0;i<n;i++){
    if(p[p[i]-1]==i+1)
        flag=1;
  }
  if(flag==1)
    cout<<"2"<<"\n";
    
    else
        cout<<"3"<<"\n";

}

  
    return 0;
}