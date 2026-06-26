class Solution {
   public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;
        int i = 0;
        while (i < n) {
            int sum = ((details[i][11] - '0') * 10) + (details[i][12]-'0');

            if (sum > 60) {
                count++;
            }
            i++;
        }

        return count;
    }
};