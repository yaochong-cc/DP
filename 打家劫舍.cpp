//#include<iostream>
//#include<vector>
//using namespace std;
//////
////class Solution {
////public:
////    int rob(vector<int>& nums) {
////        if (nums.size() == 0) return 0;
////        if (nums.size() == 1) return nums[0];
////
////        vector<int> dp(nums.size());
////        dp[0] = nums[0];
////        dp[1] = max(nums[0], nums[1]);
////
////        for (int i = 2; i < nums.size(); i++) {
////            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
////        }
////        return dp[nums.size() - 1];
////    }
////};
////利用滑动窗口递推
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        int dp0, dp1;
//        dp0 = dp1 = 0;
//        for (int i = 0; i < nums.size(); i++) {
//            int tem = max(dp1, dp0 + nums[i]);
//            dp0 = dp1;
//            dp1 = tem;
//        }
//        return dp1;
//    }
//};
//int main(){
//    Solution s;
//    vector<int> nums{2,3,2};
//    cout<<s.rob(nums)<<endl;
//    return 0;   
//}   