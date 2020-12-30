#include<bits/stdc++.h>
using namespace std;
string mod(string s,int n)
{
    string str;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==' '){
            str.push_back('%');
            str.push_back('2');
            str.push_back('0');
        }
        else
        {
            str.push_back(s[i]);
        }
    }
    return str;
}
int main()
{
    string s="Mr John Smith   ";
    //cin>>s;
    int n;
    cin>>n;
    cout<<mod(s,n);
    return 0;
}