//#include <iostream>
////#include <cmath>
//#include <vector>
//using namespace std;
//int main() {
//	vector<int> cost = { 10,15,20 };
//	//����һ
//	Solution p = Solution();
//	//��������
//	Solution* q = new Solution();
//
//	int res = q->minCost(cost);
//
//	return 0;
//}
//class Solution {
//public:
//	int minCost(vector<int>& cost) {
//		
//		int dp0 = 0, dp1 = 0;
//		for (int i = 2; i <= cost.size(); i++) {
//			int dpi = min(dp1 + cost[i - 1], dp0 + cost[i - 2]);
//			dp0 = dp1;
//			dp1 = dpi;
//		}
//		return dp1;
//	}
//};
//
