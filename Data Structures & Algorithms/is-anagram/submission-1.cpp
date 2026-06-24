class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> hash1;
        unordered_map<char, int> hash2;
        for (int i = 0; i < s.length(); i++) {
            hash1[s[i]]++;
            hash2[t[i]]++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (hash1[s[i]] != hash2[s[i]]) {
                return false;
            }
        }
        return true;
    }
};
