class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        // Approach-1(Using sorted property)
            int n = nums.size();
            if (n < 4)
                return false;

            int i = 1;

            // 1️⃣ strictly increasing
            while (i < n && nums[i] > nums[i - 1])
                i++;
            if (i == 1 || i == n)
                return false;

            // 2️⃣ strictly decreasing
            int peak = i - 1;
            while (i < n && nums[i] < nums[i - 1])
                i++;
            if (i == peak + 1 || i == n)
                return false;

            // 3️⃣ strictly increasing
            while (i < n && nums[i] > nums[i - 1])
                i++;

            return i == n;
    }
};