#include<iostream>
#include<vector>

using namespace std;

int main(vector <string>& strs, int m, int n) {
	/*vector<pair<int,int>> dp 是一维数组*/
	vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
	for (const string& str : strs) {
		int zero = count(str.begin(), str.end(), '0');
		int one = count(str.begin(), str.end(), '1');
		for (int i = m; i >= zero; i--) {
			for (int j = n; j >= one; j--) {
				dp[i][j] = max(dp[i][j], 1 + dp[i - zero][j - one]);
			}
		}
	}
	return dp[m][n];
}