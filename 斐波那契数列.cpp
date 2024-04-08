////#include<iostream>
////#include<cstdio>
////#include <vector>
////using namespace std;
////int main() {
////	int n;
////	cin >> n;
////	vector<int> dp(n + 1);
////	dp[0] = 0; dp[1] = 1;
////	for (int i = 2; i <= n; i++) {
////		dp[i] = dp[i - 1] + dp[i - 2];
////	}
////	cout << dp[n] << endl;
////	return 0;
////}
//
////�Ż���
//#include<iostream>
//#include<cstdio>
//#include <vector>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int dp[2];
//	dp[0] = 0; dp[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		int sum = dp[0] + dp[1];
//		dp[0] = dp[1];
//		dp[1] = sum;
//	}
//	cout << dp[1] << endl;
//	return 0;
//}