#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> nums;
    vector<pair<int, int>> nums1;
    for (int i = 0;i < n;i++) {
        int a, b, g, k;
        cin >> a >> b >> g >> k;
        nums.push_back({ a,b });
        nums1.push_back({ g,k });
    }
    int x, y;
    cin >> x >> y;
    bool truth = false;
    for (int i = n - 1;i >= 0;i--) {
        if (nums[i].first <= x && nums[i].second <= y && x <= nums[i].first + nums1[i].first && y <= nums[i].second + nums1[i].second) {
            cout << i + 1 << endl;
            truth = true;
            break;
        }
    }
    if (truth == false) {
        int k = -1;
        cout << k << endl;
    }
    return 0;
}