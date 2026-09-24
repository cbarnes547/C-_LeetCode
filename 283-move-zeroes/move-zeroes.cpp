class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int positive = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[positive], nums[i]);
                positive++;
            }

        }
    }
};