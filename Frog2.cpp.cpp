/* Recursion */

// #include<iostream>
// #include<vector>
// #include<cstring>
// #include<climits>
// using namespace std;

// int rec(int i, vector<int> &a, int k) {
//     if(i <= 0) return 0;
//     int step = INT_MAX;
//     for(int j = 1 ; j <= k ; j++) {
//         int op1 = rec(i-j, a, k) + abs(a[i]-a[i-j]);
//         if(i >= j) step = min(step, op1);
//     }
//     return step;
// }

// int32_t main(){
//     int n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for(int i = 0 ; i < n ; i++) cin >> a[i];
//     cout << rec(n-1, a, k);
// }

/*  Memoisation  */

#include <iostream>
#include <vector>
#include <cstring>
#include <climits>
using namespace std;
int dp[100006];

int rec(int i, vector<int> &a, int k)
{
   
}

int32_t main()
{
   string s = "1abc3dc4";
   cout << "sum " << (s[0]-'0')+(s[4]-'0');
}

/*  Tabulation  */
