/* Recursion */

// #include<iostream>
// #include<vector>
// #include<cstring>
// #include<climits>
// using namespace std;
// int dp[100006];

// int rec(int i, vector<int> &a) {
//     if(i <= 0) return 0;
//     int one = rec(i-1, a) + abs(a[i]-a[i-1]);
//     int two = INT_MAX;
//     if(i >= 2) two = rec(i-2, a) + abs(a[i]-a[i-2]);
//     return min(one, two);
// }

// int32_t main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     memset(dp, -1, sizeof(dp));
//     for(int i = 0 ; i < n ; i++) cin >> a[i];
//     cout << rec(n-1, a);
// }


/*  Memoisation  */

// #include<iostream>
// #include<vector>
// #include<cstring>
// #include<climits>
// using namespace std;
// int dp[100006];

// int rec(int i, vector<int> &a) {
//     if(i <= 0) return 0;
//     if(dp[i] != -1) return dp[i];
//     int one = rec(i-1, a) + abs(a[i]-a[i-1]);
//     int two = INT_MAX;
//     if(i >= 2) two = rec(i-2, a) + abs(a[i]-a[i-2]);
//     return dp[i] = min(one, two);
// }

// int32_t main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     memset(dp, -1, sizeof(dp));
//     for(int i = 0 ; i < n ; i++) cin >> a[i];
//     cout << rec(n-1, a);
// }


/*  Tabulation  */


