class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r =height.size()-1;
        int ans =0;
        while(l<= r){
            int ar = (r-l)* min(height[l],height[r]);
            ans =max(ar, ans);

            if(height[l] < height[r]){
                l++;
            } else {
                r--;
            }
            
        }
    return ans;
    }
};