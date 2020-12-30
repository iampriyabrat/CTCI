#include<bits/stdc++.h>
using namespace std;
bool is_Unique(string s)
{
	set<char> u;
	for(auto c: s)
	{
		if(u.count(c))
		{
			return false;
		}
		else
			u.insert(c);
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    cout<<is_Unique(str);
    return 0;
}