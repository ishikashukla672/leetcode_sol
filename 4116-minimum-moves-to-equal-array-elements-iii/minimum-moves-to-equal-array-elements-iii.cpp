class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn = *max_element(nums.begin(), nums.end());
        int sum = 0;
        
        for (int x=0;x<nums.size();++x) {
            sum =sum+abs(mn-nums[x]);
        }
        
        return sum ;
    }
};
