#include<bits/stdc++.h>
using namespace std;

// Faster Input Output
#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void solve()
{
    int a,b,k1,k2,q1,q2;
    cin>>a>>b>>k1>>k2>>q1>>q2;
    set<pair<int,int> > k,q;
    int x[4]={-1,1,-1,1}, y[4]={-1,-1,1,1};
    for(int i=0; i<4; ++i)
    {
        k.insert({k1+a*x[i],k2+b*y[i]});
        k.insert({k1+b*x[i],k2+a*y[i]});
        q.insert({q1+a*x[i],q2+b*y[i]});
        q.insert({q1+b*x[i],q2+a*y[i]});
    }

    int ct=0;
    for(auto it:k)
        if(q.find(it)!=q.end())
            ct++;
    cout<<ct<<endl;

}

int32_t main()
{
    FAST_IO;
    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}