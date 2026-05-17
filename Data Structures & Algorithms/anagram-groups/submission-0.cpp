class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sortMap;
        for (const auto&c : strs) {
            string sortedC = c;
            sort(sortedC.begin(), sortedC.end());
            sortMap[sortedC].push_back(c);
        }

        vector<vector<string>> anagrams;
        for (auto& pair : sortMap){
            anagrams.push_back(pair.second);
        }
        return anagrams;
        
    }
};
