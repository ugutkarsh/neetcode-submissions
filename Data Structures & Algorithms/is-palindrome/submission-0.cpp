class Solution {
   public:
    bool isPalindrome(string s) {
        string cleaned = "";
        for (char c : s) {
            if (isalnum(c)) cleaned += tolower(c);
        }

        int n = cleaned.length();
        if (n == 0) return true;

        int j = n - 1;

        for (int i = 0; i < n / 2; i++) {
            if (cleaned[i] != cleaned[j--]) {
                return false;
            }
        }
        return true;
    }
};