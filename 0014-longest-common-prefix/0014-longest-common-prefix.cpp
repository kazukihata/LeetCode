class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        bool flg=true;
        int i=0,j;
        while (flg && (i<v[0].size() )){
            for (j=1;j<v.size();j++){
                flg = v[0][i]==v[j][i];
                if (!flg){
                    break;
                };
            }
            i+= flg;
        }
        return  v[0].substr(0,i);
    }
};