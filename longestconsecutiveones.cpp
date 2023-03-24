//Given a number N. Find the length of the longest consecutive 1s in its binary representation.


#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        int count = 0, max = 0;
        while(n)
        {
            int r = n & 1;
            n = n >> 1;
            if(r == 1)
            {
                count++;
                if(count > max)
                {
                    max = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        return max;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution obj;
        int result = obj.maxConsecutiveOnes(n);
        cout << result << endl;
    }
    return 0;
} 