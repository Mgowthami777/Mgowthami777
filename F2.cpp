#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vpp vector<pair<ll,ll>>
#define sll set<ll>
#define vll vector<ll>
#define stll stack<ll>
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0)
int main()
{
    fast_io;
    int n;
    cin>>n;
    ll a[n],ans=0,l=0,c=0;
    vll b;
    b.assign(1000006,0);
    stll st;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        st.push(i);
        else if(st.empty()==false&&a[st.top()]+a[i]==0)
        {
            b[st.top()+i]+=2;
            st.pop();
        }
    }
    auto it=max_element(b.begin(),b.end());
    cout<<*it;
    return 0;
}
