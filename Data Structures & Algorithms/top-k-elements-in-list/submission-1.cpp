class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> vec(n + 1);
        unordered_map<int, int> mapp;
        
        for (int i = 0; i < n; i++) {
            mapp[nums[i]]++;
        }
        for (auto no : mapp) {
            vec[no.second].push_back(no.first);
        }
        vector<int> res;
        for (int i = (vec.size() - 1); i >= 0; i--) {
            for (int v : vec[i]) {
                res.push_back(v);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};
