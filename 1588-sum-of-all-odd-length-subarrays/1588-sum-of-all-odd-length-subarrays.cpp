class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            int currentSum = 0;

            for (int j = i; j < n; j++) {
                currentSum += arr[j];

                int length = j - i + 1;

                if (length % 2 == 1) {
                    sum += currentSum;
                }
            }
        }

        return sum;
    }
};