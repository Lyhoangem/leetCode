#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v;
	
	int n;
	while(cin>>n){
		v.push_back(n);
	}
	
	int target;
	cin>>target;
	bool find;
	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v.size(); j++){
			if(v[i] + v[j] == target){
				cout<<"["<<i<<","<<j<<"]";
				find = true;
				break;
			}
		}
		if(find) break;
	}
}
