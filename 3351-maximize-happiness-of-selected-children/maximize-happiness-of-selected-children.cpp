class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.begin(), h.end(), greater<int>());
        
        long long ans = 0;
        for (int i = 0; i < k; i++) {
            long long val = h[i] - i;
            if (val <= 0) break;
            ans += val;
        }
        return ans;
    }
};
