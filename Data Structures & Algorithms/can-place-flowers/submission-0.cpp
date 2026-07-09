class Solution {
   public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        int count = 0;

        for (int i = 0; i < s; i++) {
            if (flowerbed[i] == 0) {
                bool left_empty = (i == 0 || flowerbed[i - 1] == 0);
                bool right_empty = (i == s - 1 || flowerbed[i + 1] == 0);

                if (left_empty && right_empty) {
                    flowerbed[i] = 1;
                    count++;

                    if (count >= n) {
                        return true;
                    }
                }
            }
        }

        return count >= n;
    }
};