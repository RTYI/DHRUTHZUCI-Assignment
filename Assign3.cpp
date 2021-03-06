
Q3Solution:-
#include<bits/stdc++.h>
using namespace std;
bool checkForValid(string str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{'|| str[i]=='['|| str[i]=='(')
        {
            s.push(str[i]);
        }
        else
        {
            if(str[i]=='}' && s.top()=='{')
            {
                s.pop();
            }
            else if(str[i]==']' && s.top()=='[')
            {
                s.pop();
            }
            else if(str[i]==')' && s.top()=='(')
            {
                s.pop();
            }
            else{
                s.push(str[i]);
            }
        }
    }
    if(s.empty())
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string str;
    cin>>str;
    if(checkForValid(str))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
}





