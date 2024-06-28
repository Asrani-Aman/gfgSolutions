//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        //{weight,{node,parent}}
        int sum =0;
        
        vector<pair<int,int>> mst;
        
        priority_queue< pair<int,pair<int,int>>,
        vector< pair<int,pair<int,int>> >,
        greater< pair<int,pair<int,int>> >> pq;
        
        vector<int> vis(V,0);
        // hum set and map mein hi insert use karte hai baakiyon mein push
        pq.push({0,{0,-1}});

        
        while(!pq.empty())
        {
            auto top = pq.top();
            int weight  = top.first;
            int node = top.second.first;
            int parent  = top.second.second;
            pq.pop();
            
            if(vis[node] == 1) continue;
            // add it to mst
            vis[node] =1;
            if(parent!=-1)
                mst.push_back({parent,node});
            sum+=weight;
            
            for(auto it : adj[node])
            {
                int adjNode = it[0];
                int edW = it[1];
                if(vis[adjNode]!=1)
                {
                    pq.push({edW,{adjNode,node}});
                }
            }
            
            
        }
        return sum;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends