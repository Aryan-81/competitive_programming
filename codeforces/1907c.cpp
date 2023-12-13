//Removal of Unattractive Pairs

#include<bits/stdc++.h>
using namespace std;

// Short forms
#define int                 long long

// Faster Input Output
#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));

//Debugging
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; _print(x); cerr << endl;
#define dbgin(x) cerr << #x <<" "; _print(x); cerr << "; ";
#else
#define dbg(x)
#define dbgin(x)
#endif


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solution()
{
    int n;
    string str;
    cin>>n>>str;
    map<char,int> frq;
    int mx=0;
    for(int i=0; i<n; ++i)
    {
        frq[str[i]]++;
        mx=max(mx,frq[str[i]]);
    }
    if(mx>n/2)
        cout<<2*mx-n<<endl;
    else
        cout<<n%2<<endl;
}

int32_t main()
{
    FAST_IO;
    int TestCase = 1;
    cin >> TestCase;
    while (TestCase--) solution();
}