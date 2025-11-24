#include <bits/stdc++.h>
#define N int(10e6)
using namespace std;
int n,m,s;
int check[N];
vector<int>g[N];
queue<int>qu;
void inp()
{
    cin>>n>>m>>s;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        
    }
    for(int i=i;i<=n;i++)
    {
        sort(g[i].begin(),g[i].end());
    }
}
void bfs(int s)
{
    qu.push(s);
    check[s]=1;
    while(!qu.empty())
    {
        int u=qu.front();
        qu.pop();
        cout<<u<<" ";
        for(auto i : g[u])
        {
            int v = int(i);
            if(check[v]==0)
            {
                qu.push(v);
                check[v]=1;
            }
        }
    }
}
int main()
{
    inp();
    bfs(s);
    return 0;
}
