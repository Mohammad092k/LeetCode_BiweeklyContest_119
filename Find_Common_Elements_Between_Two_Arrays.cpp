Problem
You are given two 0-indexed integer arrays nums1 and nums2 of sizes n and m, respectively.

Consider calculating the following values:

The number of indices i such that 0 <= i < n and nums1[i] occurs at least once in nums2.
The number of indices i such that 0 <= i < m and nums2[i] occurs at least once in nums1.
Return an integer array answer of size 2 containing the two values in the above order.

My Code--

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1;
         unordered_map<int,int> m2;
        int n= nums1.size();
        int m= nums2.size();
        
        
        for(int i=0;i<n;i++){
            m1[nums1[i]]++;
        }
         for(int i=0;i<m;i++){
            m2[nums2[i]]++;
        }
        
        vector<int> ans;
        int x=0,y=0;
        
        for(int i=0;i<n;i++){
            if(m2[nums1[i]]>=1) x++;
            
        }
        for(int i=0;i<m;i++){
            if(m1[nums2[i]]>=1) y++;
            
        }
        
        ans.push_back(x);
        ans.push_back(y);
        return ans;
        
        
    }
};
