class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = INT_MAX;
        int j = 0;

        for (int k : prices){
            if( k < i )
                i = k;
            else
                j = max( j , k-i);
        }
        return j;
    }
};