class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size())return false;
        vector<int>freq(26);
        for(auto &a:s)freq[a-'a']++;
        for(auto &a:t)freq[a-'a']--;

       for (int i=0;i<26;i++){
            if (freq[i] !=0) return false;
        }
        return true;
    }
};
