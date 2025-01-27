class Solution {
public:
    // double bruteForce(vector<int>& nums, int& k) {

    //     long long maxsum = INT_MIN;
    //     int i = 0, j = k - 1;

    //     while (j < nums.size()) {
    //         long long sum = 0;
    //         for (int y = i; y <= j; ++y) {
    //             sum += nums[y];
    //             maxsum = max(maxsum, sum);
    //             ++i, ++j;
    //         }
    //     }
    //     double maxavg = maxsum / (double)k;
    //     return maxavg;
    // }

    double slidingWindow(vector<int>& nums, int& k){
        int i = 0, j = k -1;
        int sum = 0;
        for(int y = i; y<= j; ++y)
            sum += nums[y];
            int maxsum = sum;
            j++;
    
        while(j < nums.size()){
            sum -= nums[i++];
            sum += nums[j++];
            maxsum = max(maxsum, sum);
        }
        double maxavg = maxsum/ (double)k;
        return maxavg;
    }

    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    }
};