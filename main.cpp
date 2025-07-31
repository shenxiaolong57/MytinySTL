#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    for (const auto& num : arr) {
        cout << num << " ";
    }
    
    cout << endl;
    return 0;
}