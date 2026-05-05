#include <bits/stdc++.h>
using namespace std;

/*
Problem 2: Array Transformation Cost Minimization

Approach:
- All elements must have same remainder modulo K, else impossible.
- Normalize array by dividing each element by K.
- Minimum operations = sum of distances from median.

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

long long minOperations(vector<int>& A, int K) {
    int n = A.size();

    
    int remainder = A[0] % K;
    for (int i = 1; i < n; i++) {
        if (A[i] % K != remainder) {
            return -1;
        }
    }

    
    vector<long long> B(n);
    for (int i = 0; i < n; i++) {
        B[i] = A[i] / K;
    }

    
    sort(B.begin(), B.end());
    long long median = B[n / 2];

    
    long long operations = 0;
    for (int i = 0; i < n; i++) {
        operations += abs(B[i] - median);
    }

    return operations;
}

int main() {
    vector<int> A = {2, 4, 6, 8, 10};
    int K = 2;

    cout << minOperations(A, K) << endl; // Output: 6
}
