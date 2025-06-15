class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> num;
        for(int i=0 ; i <nums.size() ; i++){
                if(num.count(nums[i]) && i-num[nums[i]] <= k)
                    return true;
                num[nums[i]]=i;
        }
        return false;
    }
};