#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int insertPosition(vector<int> &nums, int target) {
    //! cout << "running" << endl;
    //! cout << ">>>>" << nums.at(nums.size()-1)<< endl;
    if (target < nums.at(0)){
        return 0;
    }
    else if (target > nums.at(nums.size()-1)){
        return nums.size(); 
    }
    else {
        int i = 0;
        // int j =0;
        while(i < nums.size()){
            if (nums.at(i) < target){
                i++;
                continue;
                // j++;
            }
            return i;
        }
    }

    return -1;
}

int main (){
    vector<int> nums ={3,5,7,9};
    int num = 6;

    cout << insertPosition(nums, num) << endl;

    return 0;
}