#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;
    int count=0;
    while(i<n)
    {
        if(a[i]==0)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    i++;
    while(i<n-1)
    {
        int l=i-1;
        int r=n-1;
        int lmax=0,rmax=0;
        int min=0;
        while(l>=0)
        {
            if(a[l]>=lmax)
            {
                lmax=a[l];
            }
            l--;
        }
        while(i<r)
        {
            if(a[r]>=rmax)
            {
                rmax=a[r];
            }
            r--;
        }
        if(lmax<rmax)
        {
            min=lmax;
        }
        else
        {
            min=rmax;
        }
        if((min-a[i])>0)
        {
            count=count+(min-a[i]);
        }
        i++;
    }
    cout<<count<<endl;
    return 0;
}
