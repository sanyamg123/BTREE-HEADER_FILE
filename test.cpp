#include"BTREE.hpp"
 
// #define INTMAX 200000000 
 
// using namespace boost;
// #define si short int
 
using namespace std;
using namespace __gnu_pbds;             
// typedef priority_queue< pair < ll,pii >  , vector<pair <ll,pii>> > max_pq;
// typedef priority_queue<pair <pii,pii>, vector<pair <pii,pii> > , greater <pair <pii,pii> >  > min_pq;

int main()
{

    ios::sync_with_stdio(false);
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
}


