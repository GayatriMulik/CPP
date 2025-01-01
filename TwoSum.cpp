class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // To store value and its index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; // Return indices of complement and current number
            }

            // Store the current number and its index in the map
            numMap[nums[i]] = i;
        }

        // In case no solution is found (though the problem guarantees one solution)
        return {};
    }
};
