#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
#define int long long
#define soa(arr) accumulate(arr.begin(),arr.end(),0)
#define mod 10000007
#define vi vector<int>
int binarySearch(vector<int>& v, int target, int low, int high) {
    if (low > high) return -1; 
    int mid = (low + high) >> 1;
    if (v[mid] == target)
        return mid; 
    else if (v[mid] > target)
        return binarySearch(v, target, low, mid - 1);
    else
        return binarySearch(v, target, mid + 1, high);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, target;
    cin >> n >> target;
    int low = 0, high = n - 1;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int result = binarySearch(v, target, low, high);
    if (result != -1)
        cout << "found at index " << result << endl;
    else
        cout << "not found" << endl;

    return 0;
}
