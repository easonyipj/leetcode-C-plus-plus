//
// Created by Eason on 2019/8/14.
// 不同路径 https://leetcode-cn.com/problems/unique-paths/
// 不同路径2 https://leetcode-cn.com/problems/unique-paths-ii/
#include<cmath>
#include "limits.h"
#include<iostream>
#include "vector"

using namespace std;

namespace dp{
    class uniquePaths{
    public:
        static int getUniquePaths(int m, int n){
            vector<vector<int>> dp(m, vector<int>(n));
            dp[0][0] = 1;
            for(int i = 0; i < n; i++) {
                dp[0][i] = 1;
            }

            for(int i = 0; i < m; i++) {
                dp[i][0] = 1;
            }

            for(int i = 1; i < m; i++) {
                for(int j = 1; j < n; j++){
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }

            return dp[m - 1][n - 1];

        }

        static int getUniquePathsII(vector<vector<int>>& obstacleGrid){
            int m = obstacleGrid.size();
            int n = obstacleGrid[0].size();
            vector<vector<int>> dp(m, vector<int>(n));
            dp[0][0] = 1;
            for(int i = 0; i < n; i++) {
                if(obstacleGrid[0][i] == 1) {
                    for(int j = i; j < n; j++){
                        dp[0][j] = -1;
                    }
                    break;
                }
                dp[0][i] = 1;
            }

            for(int i = 0; i < m; i++) {
                if(obstacleGrid[i][0] == 1) {
                    for(int j = i; j < m; j++){
                        dp[j][0] = -1;
                    }
                    break;
                }
                dp[i][0] = 1;
            }

            for(int i = 1; i < m; i++) {
                for(int j = 1; j < n; j++){
                    if(obstacleGrid[i][j] == -1) {
                        dp[i][j] = 0;
                    }else {
                        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                    }

                }
            }

            return dp[m - 1][n - 1];

        }
    };
}
