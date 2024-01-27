#include<iostream>
#include<vector>
using namespace std;
bool anagram(string &s1,string &s2)
{
    if(s1.size()!=s2.size())
    return false;
vector<int> ch(26);
for(int i=0;i<s1.size();i++)
{
    ch[s1[i]]++;
}
for(int i=0;i<s2.size();i++)
{
    int x=--ch[s2[i]];
    if(x<0)
    return false;
}
return true;
}
int main()
    {
string s1="listen";
string s2="silent";
bool r=anagram(s1,s2);
if(r)
{
    cout<<"anagram";
}
else
{
    cout<<"not anagram";
}

    }
