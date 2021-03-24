class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int Max = 0;
        vector <bool> res;
        for(int i = 0; i<candies.size();i++)
            Max = max(Max,candies[i]);
        for(int i = 0;i<candies.size();i++)
        {
            if(candies[i] + extraCandies >= Max)
                res.push_back(true);
            else if(candies[i] + extraCandies < Max)
                res.push_back(false);
        }
        return res;
    }
};
