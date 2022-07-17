#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int i = 0;
        bool vl = false;
        int end = nums.size() - 1;
        while (i <= end && vl == false)
        {
            if (nums[i] == target)
            {
                return i;
                vl = true;
            }
            i++;
        }
        if (vl == false)
        {
            return -1;
        }
        return 0;
    }
};