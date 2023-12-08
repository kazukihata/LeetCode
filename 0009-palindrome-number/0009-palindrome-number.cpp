class Solution {
public:
    bool isPalindrome(int x) {
        bool ans = true;
        int  i = 0;
        std::string s = std::to_string(x);
        int num = s.size();
        while (ans){
            if(i > num - 1 -i){
                return ans;
            }
            if(s.at(i) == s.at(num - 1 - i) ){
                ans = true;
            }else{
                ans = false;
            }
            i ++;
        }
        return ans;
    }
};