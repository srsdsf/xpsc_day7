#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin>>test;
    while(test--)
    {
        int n;
        string s;
        char ch;
        cin>>n>>ch;
        cin>>s;
        set<int> green_signal_pos;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='g')
            {
                green_signal_pos.insert(i+1);
            }
        }
        int ans=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(s[i]==ch)
            {
                auto LB=green_signal_pos.lower_bound(i+1);;
                if(LB!=green_signal_pos.end())
                {
                    int diff=(*LB-(i+1));
                    ans=max(ans,diff);
                }
                else
                {
                    int x=n-(i+1),y=*green_signal_pos.begin();
                    ans=max(ans,x+y);
                }
            }
        }
        cout<<ans<<'\n';
    }
}