#include<iostream>
#include<vector>
using namespace std;


vector<int> getConcatenation(vector<int>& nums) {
    int size = nums.size();
    int size2 = 2*size;
    vector<int> ans(size2, 0);
    for (int i = 0 ; i < size; i++) {
        ans[i] = nums[i];
        ans[i+size] = nums[i];
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<int> result = getConcatenation(nums);
    
    cout << "The concatenated array is: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
