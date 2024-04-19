#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
class Solution {
private :
    int rob(vector<int>& nums) {
        int dp0, dp1;
        dp0 = dp1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            int tem = max(dp1, dp0 + nums[i]);
            dp0 = dp1;
            dp1 = tem;
        }
        return dp1;
    }
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxValue = 0;
        for (int val : nums) {//找到最大值
            maxValue = max(maxValue, val);
        }
        vector<int> sum(maxValue + 1);
        for (int val : nums) {
            sum[val] += val;
        }
        return rob(sum);
    }
};
int main()
{
    Solution s;
    vector<int> nums = {3, 4, 2};
    cout << s.deleteAndEarn(nums) << endl;  
    return 0;
}