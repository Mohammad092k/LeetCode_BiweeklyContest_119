You are given a 0-indexed string word.

In one operation, you can pick any index i of word and change word[i] to any lowercase English letter.

Return the minimum number of operations needed to remove all adjacent almost-equal characters from word.

Two characters a and b are almost-equal if a == b or a and b are adjacent in the alphabet.
My Code---
class Solution {
public:

    int removeAlmostEqualCharacters(string s) {
        int n = s.length();
        int ans=0;
        int i=0;
        while(i<n-1)
        {
            char ch1= s[i],ch2= s[i+1];
            if(ch1==ch2 or ch1==ch2-1 or ch1==ch2+1)
            {
                ans++;
                i++;
            }
                        i++;   
        }
        return ans;
    }
};
