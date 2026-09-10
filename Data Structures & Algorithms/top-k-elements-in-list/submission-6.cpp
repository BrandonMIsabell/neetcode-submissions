class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> frequencyNums; // num maps to its frequency
        for (const auto&num : nums) {
            frequencyNums[num]++;
        }
        vector<int> result;
        vector<pair<int , int>> pass;

        for(const auto& [num, count]  : frequencyNums){
            pass.push_back({count, num});
        }

    
        sort(pass.rbegin(), pass.rend());

        for(const auto& [count, num]  : pass){
            cout << num << "," << count << endl;
        }
    
        for (int i = 0; i < k; ++i){
            result.push_back(pass[i].second);
        }    

    
        return result;
    }
};
