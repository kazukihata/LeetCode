class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        int length = v.size();
        string ans = "";
        if(length == 1){
            return v[0];
        }
        for(int i = 0; i < 200; i ++){
           for(int j = 0; j < length - 1; j++){
               if(v[j].substr(0, i+1) == v[j + 1].substr(0, i+1)){
                    ans = v[j].substr(0, i+1);
                }else{
                   ans = v[j].substr(0, i);
                   return ans;
               }
           }
       }
        return ans;
    }
};