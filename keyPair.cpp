//     GFG Problem
#include<iostream> 
using namespace std;
#include<math.h>

// class Solution{
// public:	
// 	// Function to check if array has 2 elements
// 	// whose sum is equal to the given value
// 	bool hasArrayTwoCandidates(int arr[], int n, int x) {
// 	    // code here
//     sort(arr,arr + n);
	   
// 	   int csum,left=0,right = n-1;
// 	   while(left<right){
// 	       csum = arr[left] + arr[right];
// 	       if(csum == x){
// 	           return true;
// 	       }
// 	       else if(csum<x){
// 	           left++;
// 	       }
// 	       else{
// 	           right--;
// 	       }
// 	   }
	   
// 	   return false;
	   
// 	}
// };

//{ Driver Code Starts.

int main() {

    int arr[] = {5,5,4,8,6,7,2,3};
    int size = 8;
    sort(arr,arr + size);
      for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}
