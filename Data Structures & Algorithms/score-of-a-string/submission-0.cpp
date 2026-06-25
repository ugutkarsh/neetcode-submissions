class Solution {
   public:
    int scoreOfString(string s) {
        int sum = 0;
        int n = s.length();
        int diff = 0;

        for(int i=1;i<n;i++){
            diff = std::abs(s[i-1]-s[i]);
            sum = sum + diff;
        }

        return sum;
    }
};