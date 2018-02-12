#ifndef _BTREE_HPP
#define _BTREE_HPP
#include<iostream>
<<<<<<< HEAD
#include<vector>
#define ll int
#define fi first
#define sec second
#define mp make_pair
using namespace std;
=======
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
#define ll li
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
 
 
// #define INTMAX 200000000 
 
// using namespace boost;
// #define si short int
 
using namespace std;
using namespace __gnu_pbds;             
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
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
ll BMAX = 5;
ll BMIN = 2;
class BTreenode{  
    public: 
    vector < ll > data;
    vector < BTreenode* > pointers;
    bool isleaf;  
    ll len; 
    BTreenode()
    {
        data.resize(BMAX);
        pointers.resize(BMAX+1);
        isleaf = 1;
        len = 0;
    }  
    BTreenode(BTreenode& newnode)
    {
        for ( ll i =0; i < BMAX; i ++)
            data[i] = newnode.data[i];
        for ( ll i =0; i <= BMAX; i ++)
            pointers[i] = newnode.pointers[i];
        isleaf = newnode.isleaf;
        len = newnode.len;
    }  
};
BTreenode* le;BTreenode* ri; 
BTreenode* lt;BTreenode* rt;
<<<<<<< HEAD
pair < BTreenode*, bool >  searchinnode ( BTreenode& nod, ll val)
=======
pair < BTreenode*, bool >  searchinnode ( BTreenode& nod, ll val )
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
{
    ll idx = nod.len;
    bool found = 0;
    for ( ll i = 0; i < nod.len ; i ++)
    {
        if ( nod.data[i] > val )
        {
            idx = i;
            break;
        }
        else if ( nod.data[i] == val)
        {
            idx = i;
            found = 1;
            break;
        }
    }
    return mp ( nod.pointers[idx], found);
}
<<<<<<< HEAD
void insertinnode( BTreenode& nod , ll& val, BTreenode* &left, BTreenode* &right, BTreenode* &root)
=======
BTreenode* root;
void insertinnode( BTreenode& nod , ll& val, BTreenode* &left, BTreenode* &right)
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
{
    bool flg = 0; 
    for ( ll i = 0; i < nod.len; i ++ )
    {
        if ( nod.data[i] >= val )
        {
            nod.data.insert(nod.data.begin() + i,val);flg = 1;
            nod.pointers[i] = ((rt == right ) ? NULL : right);
            nod.pointers.insert(nod.pointers.begin() + i,((lt == left ) ? NULL : left));
            break;
        }
    }
    if ( !flg )
    {
        nod.data.insert(nod.data.begin() + nod.len,val);flg = 1;
        nod.pointers[nod.len] = ((rt == right ) ? NULL : right);
        nod.pointers.insert(nod.pointers.begin() + nod.len,((lt == left ) ? NULL : left));
    }
    nod.data.resize(BMAX);
    nod.pointers.resize(BMAX+1,NULL);
    nod.len ++;
}
<<<<<<< HEAD
void split ( BTreenode& nod , ll& val, BTreenode* &left, BTreenode* &right, BTreenode* &root)
=======
void split ( BTreenode& nod , ll& val, BTreenode* &left, BTreenode* &right)
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
{
    BTreenode* newnode = new BTreenode();
    ll xx = nod.data[BMAX/2];
    nod.data[BMAX/2] = 0;
    nod.pointers[BMAX] = NULL;
    nod.len = (BMAX)/2;
    newnode->len = (BMAX)/2;
    for ( ll i = (BMAX/2)+1; i < BMAX; i ++)
    {
        newnode->data[i-((BMAX/2)+1)] = nod.data[i];
        nod.data[i] = 0;
        nod.pointers[i] = NULL;
    }
    if ( nod.isleaf )
        newnode->isleaf = 1;
    else
        newnode->isleaf = 0;
    if ( val <= nod.data[BMAX/2] )
<<<<<<< HEAD
        insertinnode(nod,val,left,right,root);
    else
        insertinnode(*newnode,val,left,right,root);
=======
        insertinnode(nod,val,left,right);
    else
        insertinnode(*newnode,val,left,right);
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
    left = &nod;
    right = newnode;
    val = xx;
}
<<<<<<< HEAD
void insert ( BTreenode& nod, ll& val, BTreenode* &left, BTreenode* &right, bool& done, BTreenode* &root)
=======
void insert ( BTreenode& nod, ll& val, BTreenode* &left, BTreenode* &right, bool& done)
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
{
    if ( nod.isleaf )
    {
        if ( nod.len == BMAX )
        {
<<<<<<< HEAD
            split (nod,val,left,right,root);
        }
        else
        {
            insertinnode(nod,val,left,right,root);
=======
            split (nod,val,left,right);
        }
        else
        {
            insertinnode(nod,val,left,right);
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
            done = 1;
        }
        return ;
    }
    pair < BTreenode*, bool >  direct = searchinnode ( nod, val);
<<<<<<< HEAD
    insert(*direct.fi,val,left,right,done,root);
=======
    insert(*direct.fi,val,left,right,done);
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
    if ( !done )
    {
        if ( nod.len == BMAX )
        {
<<<<<<< HEAD
            split (nod,val,left,right,root);
        }
        else
        {
            insertinnode(nod,val,left,right,root);
=======
            split (nod,val,left,right);
        }
        else
        {
            insertinnode(nod,val,left,right);
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
            done = 1;
        }
        if ( &nod == root and !done )
        {
            BTreenode* newnode = new BTreenode();
            newnode->isleaf = 0;
            newnode->len = 1;
            root = newnode;
            newnode->data[0] = val;
            newnode->pointers[0] = left;
            newnode->pointers[1] = right;
            done = 1;
        }
    }
    else
    {
        return;
    }
}
bool search ( BTreenode& nod, ll val )
{
    pair < BTreenode*, bool >  direct = searchinnode ( nod, val);
    if ( nod.isleaf  )
    {
        pair < BTreenode* , bool > direct = searchinnode(nod,val);
        return direct.sec;
    }
    if ( direct.sec == 1 )
        return 1;
    else
        return search((*direct.fi),val);
}
pair < BTreenode* , ll > findpre( BTreenode& nod )
{
    if ( nod.isleaf )
        return mp(&nod,nod.data[nod.len-1]);
    else
        return findpre(*nod.pointers[nod.len]);
}
bool rotate ( BTreenode& sib1, BTreenode& sib2 , BTreenode& nod , ll idx )
{
    if ( sib1.len <= BMIN and sib2.len <= BMIN)
        return 0;
    else
    {
        if ( sib1.len > BMIN )
        {
            sib2.data.insert(sib2.data.begin(),nod.data[idx]);
            sib2.pointers.insert(sib2.pointers.begin(),sib1.pointers[sib1.len]);
            sib1.pointers[sib1.len] = NULL;
            nod.data[idx] = sib1.data[sib1.len-1];
            sib1.data[sib1.len-1] = 0;
            sib1.len --;
            sib2.len++;
        }
        else
        {
            sib1.data.insert(sib1.data.begin()+sib1.len,nod.data[idx]);
            sib1.pointers.insert(sib1.pointers.begin()+sib1.len+1,sib2.pointers[0]);
            sib2.pointers.erase(sib2.pointers.begin());
            sib2.pointers.resize(BMAX+1,NULL);
            nod.data[idx] = sib2.data[0];
            sib2.data.erase(sib2.data.begin());
            sib2.data.resize(BMAX);
            sib1.len++;
            sib2.len--;
        }
        return 1;
    }
}
void merge ( BTreenode& sib1, BTreenode& sib2 , BTreenode& nod, ll idx)
{
    sib1.data[sib1.len] = nod.data[idx];
    for ( ll i = 0; i < sib2.len; i ++)
    {
        sib1.data[sib1.len+i+1] = sib2.data[i];
        sib1.pointers[sib1.len+i+1] = sib2.pointers[i];
    }
    sib1.pointers[sib1.len] = sib2.pointers[sib2.len];
    delete(&sib2);
    nod.data.erase(nod.data.begin() + idx );
    nod.data.resize(BMAX);
    nod.pointers.erase(nod.pointers.begin() + idx + 1);
    nod.pointers.resize(BMAX+1);
    nod.len--;
    sib1.len = sib1.len + sib2.len + 1;
    if ( nod.len == 0 )
    {
        nod = sib1;
        nod.isleaf = 1;   
    }   
}
<<<<<<< HEAD
void del ( BTreenode& nod, ll val , bool done, BTreenode* &root)
=======
void del ( BTreenode& nod, ll val , bool done )
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
{
    bool found = 0;
    ll idx = nod.len;
    for ( ll i = 0; i < nod.len; i ++ )
    {
        if ( nod.data[i] == val )
        {
            found = 1;
            idx = i;
            break;
        }
        else if ( nod.data[i] > val )
        {
            idx = i;
            break;
        }
    }
    if ( found )
    {
        if ( nod.isleaf )
        {
            nod.data.erase(nod.data.begin()+idx);
            nod.data.resize(BMAX);
            nod.len--;
            if ( nod.len < BMIN and (&nod != root ))
                done = 0;
            else
                done = 1;
            return;
        }
        else
        {
            pair < BTreenode* , ll > xx = findpre(*nod.pointers[idx]);
            nod.data[idx] = xx.sec;
<<<<<<< HEAD
            del(*nod.pointers[idx],xx.sec,0,root);
=======
            del(*nod.pointers[idx],xx.sec,0);
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
        }
    }
    else
    {
<<<<<<< HEAD
        del(*nod.pointers[idx],val,0,root);
=======
        del(*nod.pointers[idx],val,0);
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
    }
    if ( (nod.len < BMIN and &nod!=root) or (*nod.pointers[idx]).len < BMIN )
        done = 0;
    else
        done = 1;

    if ( !done )
    {
        bool check = 0;
        if ( idx )
            check = rotate ( *nod.pointers[idx-1],*nod.pointers[idx],nod,idx-1);
        if ( !check and idx < nod.len )
            check = rotate ( *nod.pointers[idx],*nod.pointers[idx+1],nod,idx);
        done = check;
        if ( !check )
        {
            if ( idx )
                 merge( *nod.pointers[idx-1],*nod.pointers[idx],nod,idx-1);
            else
                 merge( *nod.pointers[idx],*nod.pointers[idx+1],nod,idx);
            check = 1;
        }
    }
    else
        return;
    if ( nod.len < BMIN and (&nod != root ))
        done = 0;
    else
        done = 1;

}
<<<<<<< HEAD
bool SEARCH ( BTreenode* &root, ll val )
{
    return search ( *root, val );
}
void INSERT ( BTreenode* &root, ll val )
=======
bool SEARCH ( ll val )
{
    return search ( *root, val );
}
void INSERT ( ll val )
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
{
    bool d = 0;
    le = lt;
    ri = rt;
<<<<<<< HEAD
    insert ( *root, val , le , ri , d ,root);
=======
    insert ( *root, val , le , ri , d );
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
    if ( !d )
    {
        root = new BTreenode();
        root->isleaf = 0;
        root->len = 1;
        (root->data)[0] = val;
        (root->pointers)[0] = le;
        (root->pointers)[1] = ri;
    }
}
<<<<<<< HEAD
void DELETE ( BTreenode* &root , ll val )
{
    if ( !SEARCH(root, val) )
=======
void DELETE ( ll val )
{
    if ( !SEARCH(val) )
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
        cout << "VALUE TO BE DELETED DOESN'T EXIST\n";
    else
    {
        bool d = 0;
<<<<<<< HEAD
        del(*root,val,d,root);
=======
        del(*root,val,d);
>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
        cout << "VALUE DELETED\n";
    }
}
void PRINT ( bool val )
{
    if ( val )
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}
<<<<<<< HEAD
void PRINTROOTDATA ( BTreenode* &root )
{
    cout << "CONTENTS OF ROOT ARE :\n";
    for ( ll i = 0; i < (root->len); i ++)
        cout << root->data[i] <<" ";
    cout <<"\n";
}
=======


>>>>>>> 1026a8ae6837d1a9187e086e81f35d3446e507b5
#endif



