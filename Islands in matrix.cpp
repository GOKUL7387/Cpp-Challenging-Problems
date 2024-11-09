#include <iostream>
using namespace std;

void explore(int sea[5][5],int i,int j,int row,int column)
{
    if(i<0 || j<0 || i>=row || j>=column)
    {
        return;
    }
    if(sea[i][j]==0)
    {
        return;
    }
    sea[i][j]=0;
    explore(sea,i-1,j,row,column);
    explore(sea,i+1,j,row,column);
    explore(sea,i,j-1,row,column);
    explore(sea,i,j+1,row,column);
    explore(sea,i-1,j-1,row,column);
    explore(sea,i-1,j+1,row,column);
    explore(sea,i+1,j-1,row,column);
    explore(sea,i+1,j+1,row,column);
}
int find_islands(int sea[5][5])
{
    int res=0,row=5,column=5;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(sea[i][j]==1)
            {
                explore(sea,i,j,row,column);
                res++;
            }
        }
    }
    return res;
}
int main()
{
    int n=5,m=5;
    int sea[5][5],i,j;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>sea[i][j];
        }
    }
    int f=find_islands(sea);
    cout<<f<<endl;
    return 0;
}
