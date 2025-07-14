#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;


int missingNumber(vector<int>& nums) {
      sort(nums.begin(), nums.end());

      int left =0 ;
      int right = nums.size()-1;

      while(left <= right){
        int mid = (left + right)/2;

        if(nums[mid] == mid){
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
      }

      return left;
}


int main(){
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<missingNumber(v);
}

