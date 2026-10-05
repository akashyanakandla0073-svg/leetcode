class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        int score = 0;
        int left = 0;
        for(int i = 0 ; i < n; ++i){
            if(s[i]=='(') left++;
            else{
                left--;
                if(s[i-1]=='('){
                    score = score + (1 << left);
                }
            }
        }
        return score;
    }
};