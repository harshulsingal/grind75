class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int left = 0;
        int right = n - 1;

        int maxA = 0;

        while (left < right) {

            int wall = min(height[left], height[right]);
            int area = wall * (right - left);

            maxA = max(maxA, area);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxA;
    }
};
