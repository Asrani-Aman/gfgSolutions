//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    static bool comp(Job A, Job B)
    {
        return A.profit > B.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr, arr+n, comp);
        
        int check[n+1] = {-1};
        
        // Finding the maximum deadline
        int maxDeadline = 0;
        for(int i = 0; i < n; i++) {
            maxDeadline = max(maxDeadline, arr[i].dead);
        }
        
        int maxProfit =0;
        int countJobs = 0; // Number of jobs done
        
        // Creating a slot array to keep track of which time slots are occupied
        vector<int> slot(maxDeadline + 1, -1);
        for(int i =0; i<n; i++)
        {
            // iterating through all the jobs
            
           for(int j = arr[i].dead; j > 0; j--) {
                if(slot[j] == -1) { // If the slot is free
                    slot[j] = arr[i].id; // Assign job to this slot
                    countJobs++;
                    maxProfit += arr[i].profit; // Add profit
                    break; // Move to the next job after scheduling this one
                }
            }
            
            
            // for (int j =maxDeadline-1; j>=0; j-- )
            // {
            //     if(slot[])
            // }
            
        }
        return {countJobs, maxProfit};
        
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends