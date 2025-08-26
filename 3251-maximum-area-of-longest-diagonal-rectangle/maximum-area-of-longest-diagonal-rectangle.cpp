class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagonal = INT_MIN;
        int maxArea = INT_MIN;

        for(int i = 0 ; i <dimensions.size();i++){
            int l = dimensions[i][0];
            int b = dimensions[i][1];
            int diagonal = pow(l,2)+pow(b,2);
            int area = l*b;
            if(maxDiagonal == diagonal){
            maxArea = max(maxArea,area);
            }else if( diagonal > maxDiagonal ){
                maxArea = area;
                maxDiagonal = diagonal;
            }
           
        }
        return maxArea;
    }
};