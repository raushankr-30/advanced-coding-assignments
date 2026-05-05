#include <bits/stdc++.h>
using namespace std;

/*
Problem 1: Cyclic Substring Maximum Sum

Approach:
- Duplicate string to simulate circular substrings.
- Use sliding window + set to maintain unique characters.
- Keep window size ≤ original string length.
- Track maximum sum.

Time Complexity: O(n)
Space Complexity: O(1) (at most 26 characters)
*/

int maxCyclicSubstringSum(string S) {
    int n = S.size();
    string T = S + S;

    unordered_set<char> seen;
    int left = 0;
    int currSum = 0;
    int maxSum = 0;

    for (int right = 0; right < T.size(); right++) {
        char ch = T[right];
        int val = ch - 'a' + 1;

        
        while (seen.count(ch)) {
            char leftChar = T[left];
            seen.erase(leftChar);
            currSum -= (leftChar - 'a' + 1);
            left++;
        }

        
        while (right - left + 1 > n) {
            char leftChar = T[left];
            seen.erase(leftChar);
            currSum -= (leftChar - 'a' + 1);
            left++;
        }

        
        seen.insert(ch);
        currSum += val;

        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main() {
    string S = "abca";
    cout << maxCyclicSubstringSum(S) << endl; 
}
