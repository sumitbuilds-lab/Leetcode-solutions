class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (count1 == 0 && nums[i] != el2) {
                el1 = nums[i];
                count1 = 1;
            } else if (count2 == 0 && nums[i] != el1) {
                el2 = nums[i];
                count2 = 1;
            }

            else if (nums[i] == el1)
                count1++;

            else if (nums[i] == el2)
                count2++;
            else {
                count1--;
                count2--;
            }
        }
        int count3 = 0, count4 = 0;
        vector<int> ls;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == el1) {
                count3++;
            }
            if (nums[i] == el2) {
                count4++;
            }
        }
        if (count3 > (int)(nums.size() / 3)) {
            ls.push_back(el1);
        }
        if (count4 > (int)(nums.size() / 3)) {
            ls.push_back(el2);
        }
        sort(ls.begin(), ls.end());
        return ls;
    }
};