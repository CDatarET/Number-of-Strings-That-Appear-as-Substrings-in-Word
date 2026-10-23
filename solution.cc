class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = 0;
        for(string s : patterns){
            if(word.find(s) != string::npos){
                n++;
            }
        }

        return n;
    }
};
