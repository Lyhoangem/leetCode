#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

bool binary_search(vector<int> &nums, int target){
    int left =0;
    int right = nums.size()-1;

    while(left <= right){
        int mid = (left + right)/2;

        if(nums[mid] == target) return true;

        else if(nums[mid] < target){
            left = mid +1;
        }

        else {
           right = mid - 1;
        }
    }
         return false;
}


vector<int> intersect(vector<int>& nums1, vector<int>& nums2){

            int a = nums1.size();
            int b = nums2.size();

            vector<int> nho;
            vector<int> lon;
            if(a<=b){
                nho = nums1;
                lon = nums2;
            }

            else if(a>b){
                nho = nums2;
                lon = nums1;
            }

        sort(nho.begin(), nho.end());
        sort(lon.begin(), lon.end());

        vector<int> PhanLoai;
        if(a==b){
            for(int i=0; i<nho.size(); i++){
            int count=0;
                for(int j=0; j<lon.size(); j++){
                    if(lon[j]==nho[i]){
                        count++;
                    }
                }
                while(count != 0){
                        PhanLoai.push_back(nho[i]);
                        count--;
                    }
                    
        }
        }
        else {
            for(int i=0; i<nho.size(); i++){
                if(binary_search(lon, nho[i])){
                    PhanLoai.push_back(nho[i]);
                }
            }

        }
        

       return PhanLoai;
}


int main(){
    int n1,n2;
     
    vector<int> v1;
    vector<int> v2;

    cin>>n1;
    for(int i=0; i<n1; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }

    cin>>n2;
    for(int i=0; i<n2; i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    vector<int> ketqua;
    ketqua = intersect(v1, v2);
     
    for(int i=0; i<ketqua.size(); i++){
        cout<<ketqua[i]<<" ";
    }
}
