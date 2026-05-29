class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=0;
        int maxS=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            sum+=(prices[i]-prices[i-1]);
            sum=max(sum,0);
            maxS=max(maxS,sum);
        }
        return maxS;
    }
};
