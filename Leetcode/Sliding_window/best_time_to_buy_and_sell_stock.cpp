/*
    https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
    Time complexity - O(n)
    Space complexity - O(1)
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maxProfit = 0;
        while (right < prices.size()) {
            if(prices[left] < prices[right]) {
                int profit = prices[right] - prices[left];
                maxProfit = max(maxProfit, profit);
            } else {
                left = right;
            }
            right ++;
        }
        return maxProfit;
    }
};

