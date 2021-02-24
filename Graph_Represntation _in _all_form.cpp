#include <bits/stdc++.h>
using namespace std;

#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"
#define int long long int

int32_t main()
{
    IOS;
    int n;
    cin >> n;

    // These all are for Directed edges for undirected edges just add one
    // more line and swap(u,v);

    // adjacency list with weight representation of Graph
    // vector<pair<int,int>>adj[n];
    // while (n--)
    // {
    //     int u, v,w;
    //     cin >> u >> v>>w;
    //     adj[u].push_back({v,w});
    // }

    // adjacency list without weight representation of Graph
    // vector<int> adj[n];
    // while(n--){
    // int u,v;
    // cin>>u>>v;
    // adj[u].push_back(v);
    // }

    // edge list with weight representation of Graph;
    // vector<tuple<int,int,int>> edges;
    // while(n--){
    //     int u,v,w;
    //     cin>>u>>v>>w;
    //     edges.push_back({u,v,w});
    // }

    // edge list without  weight representation of Graph
    // vector<pair<int,int>> edges;
    // while(n--){
    //     int u,v;
    //     cin>>u>>v;
    //     edges.push_back({u,v});
    // }

    //Adjacency Matrix representation of Graph
    // int g[n][n];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>g[i][j];
    //     }
    // }
}
