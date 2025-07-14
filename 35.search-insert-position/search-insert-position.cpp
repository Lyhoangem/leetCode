#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int> &nums, int target){
    int left =0;
    int right = nums.size()-1;

    while(left <= right){
        int mid = (left + right)/2;
        if(target == nums[mid]) return mid;

        else if(target < nums[mid]){
            right = mid - 1;
        }

        else {
            left = mid +1;
        }
    }

    return left;
}

int main(){
    int n, target;
    cin>>n>>target;

    vector<int> nums;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    cout<<"vi tri chen: "<<searchInsert(nums, target);
}