/*
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). 
n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). 
Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Note: You may not slant the container and n is at least 2.
*/


class Solution {
public:
    int maxArea(vector<int>& height) {
        int i, j, n = height.size();
        int max = -1;
        int mini = -1;
        for(i = 0; i < n; i++) {
            for(j = i + 1; j < n; j++) {
                mini = height[i] < height[j] ? height[i] : height[j];
                if((mini * (j - i)) > max) {
                    max = mini * (j - i);
                }
            }
        }
        return max;
    }
};
