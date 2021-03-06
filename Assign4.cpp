
Q4Solution:-
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m;
    int n1,n2;
    cin>>n1;
    int num1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>num1[i];
    }
    for(int i=0;i<n1;i++)
    {
        m[num1[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second==1)
        {
            cout<<it->first;
        }
    }
}
