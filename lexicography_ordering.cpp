#include <bits/stdc++.h>
using namespace std;
string lexmaxstr(string str)
{
    string mx="";
    for(int i=0;i<str.length();++i)
    {
        mx=max(mx,str.substr(i));
        
    }
    return mx;
}
int main()
{
    string str="9601";
    cout <<lexmaxstr(str);
    return 0;
}