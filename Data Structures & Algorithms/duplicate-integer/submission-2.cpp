class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // bool flag=false;
        sort(nums.begin(),nums.end());
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]!=nums[i+1]){
                continue;
            }else{
                 return true;
            }
        }
        return false;
    }
};