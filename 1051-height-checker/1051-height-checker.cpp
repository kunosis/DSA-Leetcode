class Solution {
public:
int heightChecker(vector<int>& heights) {
int i, j;
int n = heights.size();
int newheights[100];


    for (i = 0; i < n; i++) {
        newheights[i] = heights[i];
    }

    int temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (newheights[j] > newheights[j + 1]) {
                temp = newheights[j];
                newheights[j] = newheights[j + 1];
                newheights[j + 1] = temp;
            }
        }
    }

    int count = 0;
    int flag;

    for (i = 0; i < n; i++) {
        flag = 0;

        if (newheights[i] ^ heights[i]) {
            flag = 1;
        }

        if (flag == 1) {
            count++;
        }
    }

    return count;
}

};
