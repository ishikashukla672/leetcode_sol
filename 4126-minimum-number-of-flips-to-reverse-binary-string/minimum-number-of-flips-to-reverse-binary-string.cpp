class Solution {
public:
    int minimumFlips(int n) {
        string s = "";
        
        
        while (n > 0) {
            s = char('0' + (n & 1)) + s;
            n >>= 1;
        }
        
        string r = s;
        reverse(r.begin(), r.end());
        
        int flips = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != r[i]) {
                flips++;
            }
        }
        
        return flips;
    }
};
