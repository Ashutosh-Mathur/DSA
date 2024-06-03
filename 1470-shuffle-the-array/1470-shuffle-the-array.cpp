class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>suf;
        int i=0;
        int j=n;
        while(j<2*n)
        {
            suf.push_back(nums[i]);
            suf.push_back(nums[j]);
            i++;
            j++;
        }
        return suf;
    }       
    
};