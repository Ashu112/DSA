class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxHeight = INT_MIN;
        int preffixSum = 0;
        for(int i = 0 ; i <gain.size();i++){
            preffixSum += gain[i];
            maxHeight = max(preffixSum,maxHeight);
        }
        if(maxHeight < 0 )return 0;
        return maxHeight;
    }
};