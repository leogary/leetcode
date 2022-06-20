class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hashmap;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int temp = target - nums[i];
            if (hashmap.count(temp) == 1) {
                ans.push_back(hashmap[temp]);
                ans.push_back(i);
                break;
            } else {  //建hashmap
                hashmap.insert({nums[i], i});
            }
        }
        return ans;
    }
};