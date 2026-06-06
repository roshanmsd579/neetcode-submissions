class Solution {
public:
    bool isAnagram(string s, string t) {
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        t.erase(remove(t.begin(),t.end(),' '),t.end());
        transform(s.begin(),s.end(),s.begin(),::tolower);
        transform(t.begin(),t.end(),t.begin(),::tolower);
        if(s.length()!=t.length()) return false;
        int freq[26]={0};
        for(auto c:s)freq[c-'a']++;
        for(auto c:t)freq[c-'a']--;
        for (int i=0;i<26;i++){
            if(freq[i]!=0)return  false;
        }
        return true;
    }
};
