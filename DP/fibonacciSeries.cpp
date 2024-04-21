//Topdown approach
class Solution {
public:
 int topDownSolve(int n, vector<int>& dp){
    //base case
    if(n==1 || n==0){
        return n;
    }
    //Check answer is alredy exist in dp aray
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n] = topDownSolve(n-1)+topDownSolve(n-2, dp);
    return dp[n];
 }
    int fib(int n) {
        //Step 1: create dp array
        vector<int> dp(n+1,-1);
        int ans = topDownSolve(n, dp);
        return ans;
    }
};


//Bottom Up approach
class Solution {
public:
  int bottimUpSolve( int n){
    vector<int> dp(n+1,-1);
    dp[0] = 0;
    if(n==0)
    return dp[0];
    dp[1] = 1;


    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
  }

    int fib(int n) {
        return bottimUpSolve(n);
    }
};