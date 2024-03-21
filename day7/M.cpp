#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,s=0;
    cin>>n;
    ll a[n];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s%2==0)
    {
        cout<<s<<endl;
    }
    else
    {
        sort(a,a+n);
        for(ll i=0; i<n; i++)
        {
            if((s-a[i])%2==0)
            {
                cout<<s-a[i]<<endl;
                break;
            }
        }
    }
    return 0;
}