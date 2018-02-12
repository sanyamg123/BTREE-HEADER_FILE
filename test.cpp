#include"BTREE.hpp"
<<<<<<< HEAD
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<bitset>
// #include<unordered_map> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// #include "boost/algorithm/string.hpp"
#define fio ios_base::sync_with_stdio(false)
#define mod 1000000007
#define mod1 mod
#define mod2 100000009
#define li long long int
#define ll int
#define readi(x) scanf("%d",&x)
#define  reads(x)  scanf("%s", x)
#define readl(x) scanf("%I64d",&x)
#define rep(i,n) for(i=0;i<n;i++)
#define revp(i,n) for(i=(n-1);i>=0;i--)
#define myrep1(i,a,b) for(i=a;i<=b;i++)
#define myrep2(i,a,b) for(i=b;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define MAXN 1000000000000000000
#define MINN -1000000000000000000
#define pii pair<ll,ll> 
#define pdd pair<double,double>
#define pic pair<int,char>
#define N 1000050
#define lgn 20
#define ddouble long double
#define minus minu
#define PI 3.1415926535
#define lgn 20
 
=======
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
 
// #define INTMAX 200000000 
 
// using namespace boost;
// #define si short int
 
using namespace std;
using namespace __gnu_pbds;             
<<<<<<< HEAD
typedef priority_queue<ll, vector<ll> > max_pq;
// typedef priority_queue<pii, vector<pii> , greater<pii >  > min_pq;
ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}
 
typedef priority_queue<pair < ll , pair < pii , ll > >  , vector<pair < ll , pair < pii , ll > >  > ,greater<pair < ll , pair < pii , ll > >  > > min_pq;
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << std::endl;
        //use cerr if u want to display at the bottom
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif
 
typedef tree< ll, null_type, less<ll>, rb_tree_tag, 
tree_order_statistics_node_update > OST;
// typedef priority_queue< pair < ll,pii >  , vector<pair <ll,pii>> > max_pq;
// typedef priority_queue<pair <pii,pii>, vector<pair <pii,pii> > , greater <pair <pii,pii> >  > min_pq; 
 
using namespace std;
using namespace __gnu_pbds;             
=======
// typedef priority_queue< pair < ll,pii >  , vector<pair <ll,pii>> > max_pq;
// typedef priority_queue<pair <pii,pii>, vector<pair <pii,pii> > , greater <pair <pii,pii> >  > min_pq;
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5

int main()
{

    ios::sync_with_stdio(false);
<<<<<<< HEAD
    BTreenode* root = new BTreenode();
    // root is the pointer
    PRINT(SEARCH(root, 2));
    INSERT( root,6 );
    INSERT( root, 2 );
    INSERT( root, 4 );
    INSERT( root,8 );
    INSERT( root,10 );
    PRINTROOTDATA(root);
    INSERT( root,20 );
    PRINTROOTDATA(root);
    INSERT( root,40 );
    PRINTROOTDATA(root);
    INSERT( root,60 );
    PRINTROOTDATA(root->pointers[1]);
    INSERT( root,50 );
    PRINTROOTDATA(root->pointers[2]);
    DELETE(root,6);
    PRINTROOTDATA(root->pointers[1]);
    DELETE(root,20);
    PRINTROOTDATA(root->pointers[0]);
    DELETE(root,40);
    PRINTROOTDATA(root);
    DELETE(root,50);
    PRINTROOTDATA(root);
    PRINTROOTDATA(root->pointers[0]);
    DELETE(root,2);
    PRINTROOTDATA(root);
=======
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    
    // root may also change while splitting
    root = new BTreenode();
    // root is the pointer
    PRINT(SEARCH(2));
    INSERT( 2 );
    INSERT( 4 );
    INSERT( 6 );
    INSERT( 8 );
    INSERT( 10 );
    INSERT( 20 );
    INSERT( 40 );
    INSERT( 60 );
    INSERT( 80 );
    DELETE(6);
    DELETE(20);
    DELETE(80);
    DELETE(8);
    PRINT(SEARCH(6));
    DELETE(10);
    DELETE(2);
    DELETE(40);
    DELETE(4);
    DELETE(60);
    DELETE(40);
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
}


