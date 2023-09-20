#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& v, int target) {
    if(target==0) {
        return 0;
    }
    if(target<0) {
    return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i=0;i<v.size();i++) {
        int ans = solve(v,target-v[i]);
        if(ans != INT_MAX) {
            mini = min(mini,ans+1);
        }
    }
    return mini;

}
int main() {
    vector<int> arr{1,2};
    int target = 3;
    int ans = solve(arr, target);
    cout<<"answer is: "<<ans<<endl;
}