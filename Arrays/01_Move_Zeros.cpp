class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left,right;
        left=0;
        right=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
               nums[left]=nums[i];
                left++;
            }
        }
        while(left<nums.size()){
            nums[left]=0;
            left++;
        }  
    }
};

// here we using a logic of two pointer, where we use left and right pointer. As left pointer track the array and right move non zero element to first.
