#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

vector<int> decimaltobinary(int n) {
        vector<int> binary;
        while (n) {
            binary.push_back(n & 1);
            n >>= 1;
        }
        reverse(binary.begin(), binary.end());
        return binary;
    }

vector<int> graytobinary(vector<int>& gray) {
        int n = gray.size();
        vector<int> binary(n);
        binary[0]= gray[0];
        for (int i = 1; i < n; i++) {
            binary[i] = gray[i] ^ binary[i-1];
        }
        return binary;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    vector<int> gray = obj.decimaltobinary(n);
    vector<int> binary = obj.graytobinary(gray);
    cout << "gray code: ";
    for (int i = 0; i < gray.size(); i++) {
        cout << gray[i];
    }
    cout << endl;
    cout << "binary: ";
    for (int i = 0; i < binary.size(); i++) {
        cout << binary[i];
    }
    cout << endl;
    return 0;

}