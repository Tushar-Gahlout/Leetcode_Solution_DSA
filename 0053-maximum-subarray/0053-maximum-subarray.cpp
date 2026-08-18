class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int cur=0, Max=INT_MIN;
        for (int val : nums)
        {
            cur+=val;
            Max=max(cur,Max);
            if (cur <0)
            cur =0;
        }
        return Max;
    }
};