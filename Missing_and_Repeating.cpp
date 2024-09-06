//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int> arr) {
        // code here
        map<int,int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        vector<int> p;
        for(auto j: mp){
            if(j.second==2){
                p.push_back(j.first);
            }
        }
        int m = 1;
        for(int i=0; i<arr.size(); i++){
            if(mp.find(m)==mp.end()){
                p.push_back(m);
                break;
            }
            else{
                m = m + 1;
            }
        }
        
        return p;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
