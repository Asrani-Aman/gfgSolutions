//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr, arr + n);
    int left = 0;
    int right = n-1;
    int floor  = -1;
    int ceil  = -1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]>=x)
        {
            ceil  = arr[mid];
            right = mid-1;
        }
        else
        {
            left = mid+1;
        }
    }
    
    left =0;
    right= n-1;
     while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]>x)
        {
         
            right = mid-1;
        }
        else
        {
            floor = arr[mid];
            left = mid+1;
        }
    }
   return make_pair(floor, ceil);
    
}