class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int lt = 0, rt = 0;
        
        while (rt < len)
        {
            if (nums[rt]) 
            {
                swap(nums[lt], nums[rt]);
                lt++;
            }
            rt++;
        }
    }
};
