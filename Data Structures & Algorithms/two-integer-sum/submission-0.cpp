class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vec;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    if (i < j) {
                        vec.push_back(i);
                        vec.push_back(j);
                    } else {
                        vec.push_back(j);
                        vec.push_back(i);
                    }
                }
            }
        }
        return vec;
    }
};
