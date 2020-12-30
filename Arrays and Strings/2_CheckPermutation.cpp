#include<bits/stdc++.h>
using namespace std;
bool check(string s1, string s2)
{
    if(s1.length()!=s2.length())
        return false;
    map<char,int> m1,m2;
    for (int i = 0; i < s1.length(); i++)
    {
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    if(m1==m2)
        return true;
    else
        return false;
    
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<check(s1,s2);
    return 0;
}
