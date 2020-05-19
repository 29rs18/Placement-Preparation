// { Driver Code Starts
#include <bits/stdc++.h>
#define debug(x) { cerr << #x << " = " << x << endl; }
using namespace std;

void bfs(int s, vector<int> g[], vector<bool> &vis, int N);

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        vector<bool> vis(N, false);
        for (int i = 0; i < E; i++) 
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        bfs(0, adj, vis, N);
        cout << endl;
    }
}
// } Driver Code Ends


/* You have to complete this function*/

/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> g[], vector<bool> &vis, int N) 
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while(!q.empty())
    {
        cout<<q.front()<<" ";

        for(auto it: g[q.front()])
        {
            if(!vis[it])
            {
                vis[it] = true;
                q.push(it);
            }
        }

        q.pop();
    }
}