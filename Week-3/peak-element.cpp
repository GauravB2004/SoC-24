class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        int n = nums.size();

        while(s<= e){
            int mid = s + (e-s)/2;
            if((mid == 0 || nums[mid-1] <= nums[mid]) && ( mid== n-1 || nums[mid+1] <= nums[mid])){
                return mid;
            }
            if(mid > 0 && nums[mid-1] >= nums[mid])
            e =mid -1;
            else
            s = mid+1;
        }
        return -1;
    }
};