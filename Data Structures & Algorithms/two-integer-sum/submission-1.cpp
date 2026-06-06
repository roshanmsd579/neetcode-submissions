class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> test;
         for (int i = 0; i < n; i++) {
             int diff = target - nums[i];

        if (test.find(diff) != test.end()) {
            return {test[diff], i};   
        }
        test[nums[i]] = i;            
    }
        return {};
        
    }
};
