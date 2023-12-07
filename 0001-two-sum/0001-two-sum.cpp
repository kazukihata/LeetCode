class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int howManyNum = nums.size();
        for(int i = 0; i < howManyNum - 1; i ++){
            for(int j = i +1; j < howManyNum; j ++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
    return {};
    }
};