class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        int n = code.size();
        vector<int> sum(n, 0);

        if(k > 0) {
            for(int i = 0; i < n; i++) {
                for(int j = 1; j <= k; j++) {
                    sum[i] = sum[i] + code[(i + j) % n];
                }
            }
            return sum;
        }

        if(k < 0) {
            for(int i = 0; i < n; i++) {
                for(int j = 1; j <= (-k); j++) {
                    sum[i] = sum[i] + code[(i - j + n) % n];
                }
            }
            return sum;
        }

        return sum;
    }
};