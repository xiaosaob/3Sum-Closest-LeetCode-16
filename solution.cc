// Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

//     For example, given array S = {-1 2 1 -4}, and target = 1.

//     The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int error = INT_MAX;
        int res = 0;
        sort(num.begin(), num.end());
        for(int i = 0; i < num.size()-2; ++i) {
            int j = i+1;
            int k = num.size()-1;
            while(j < k) {
                int sum = num[i]+num[j]+num[k];
                if(sum == target)
                    return target;
                if(abs(sum-target) < error) {
                    error = abs(sum-target);
                    res = sum;
                }
                if(sum < target) ++j;
                else --k;
            }
        }
        return res;
    }
};
