#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int count=0;
    int count1=0;
    for(int i=0;i<s1.size();i++)
    {
        for(int j=0;j<s2.size();j++)
        {
            if(s1[i]==s2[j])
            {
                s1[i]='*';
                s2[j]='*';
            }
        }
    }
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==' ')
        {
            continue;
        }
        if(s1[i]!='*')
        {
            count++;
        }
    }
    for(int j=0;j<s2.size();j++)
    {
        if(s2[j]==' ')
        {
            continue;
        }
        if(s2[j]!='*')
        {
            count++;
        }
    }
    int i=0;
    vector<char> flames={'F','L','A','M','E','S'};
    while(flames.size()>1)
    {
        i = (i+count-1)%flames.size();
        flames.erase(flames.begin()+i);
    }
    cout<<flames[0]<<" ";
    
}
