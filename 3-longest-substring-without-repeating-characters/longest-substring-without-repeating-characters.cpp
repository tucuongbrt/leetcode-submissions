class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> Vmap;
        int l = 0, r =0, Vmax =0;
        while(r<s.size()){
            if(Vmap.count(s[r])){
                l=max(l, Vmap[s[r]]+1);
            }

            int va = r-l+1;
            Vmax= max(Vmax,va);
            Vmap[s[r]]=r;
            r++;
        }
        return Vmax;


    }
};