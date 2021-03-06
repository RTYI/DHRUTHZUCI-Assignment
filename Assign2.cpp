Q2Solution:-
#include<bits/stdc++.h>
using namespace std;
void Intersection(int num1[],int n1,int num2[],int n2)
{
    map<int,int> m1;
    map<int,int> m2;
    vector<int> v;
    for(int i=0;i<n1;i++)
    {
        m1[num1[i]]++;
    }
    for(int i=0;i<n2;i++)
    {
        m2[num2[i]]++;
    }
    for(auto it=m1.begin();it!=m1.end();it++)
    {
        if(m2.find(it->first)!=m2.end())
        {
            v.push_back(it->first);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    
    int n1,n2;
    cin>>n1>>n2;
    int num1[n1];
    int num2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>num1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>num2[i];
    }
    Intersection(num1,n1,num2,n2);
}



