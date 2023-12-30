
/*
  Problem-- 
You are given an integer array nums and an integer k.

The frequency of an element x is the number of times it occurs in an array.

An array is called good if the frequency of each element in this array is less than or equal to k.

Return the length of the longest good subarray of nums.

A subarray is a contiguous non-empty sequence of elements within an array.
*/
My Code --

  class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        int n= nums.size();
        int i=0,j=0;
        
        int ans=0;
        unordered_map<int,int> mp;
        
        while(i<n){
            
            mp[nums[i]]++;
            if(mp[nums[i]]>k){
                while(j<i and mp[nums[i]]>k){
                    if(mp[nums[j]]==1) mp.erase(nums[j]);
                    else{
                        mp[nums[j]]--;
                    }
                    j++;
                }
                
            }
            ans= max(ans,i-j+1);
            i++;
            
        }
        
        return ans;
    }
};
