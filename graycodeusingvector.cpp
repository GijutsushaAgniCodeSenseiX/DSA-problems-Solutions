#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> (int n) {
        vector<int> binary;
        while (n) {
            binary.push_back(n & 1);
            n >>= 1;
        }
        reverse(binary.begin(), binary.end());
        return binary;
    }
    
    vector<int> toGrayCode(vector<int>& binary) {
        int n = binary.size();
        vector<int> gray(n);
        gray[0] = binary[0];
        for (int i = 1; i < n; i++) {
            gray[i] = binary[i] ^ binary[i-1];
        }
        return gray;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    vector<int> binary = obj.toBinary(n);
    vector<int> gray = obj.toGrayCode(binary);
    cout << "Binary: ";
    for (int i = 0; i < binary.size(); i++) {
        cout << binary[i];
    }
    cout << endl;
    cout << "Gray: ";
    for (int i = 0; i < gray.size(); i++) {
        cout << gray[i];
    }
    cout << endl;
    return 0;
}
