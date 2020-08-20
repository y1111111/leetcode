class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int right = 0;
    for (int i = 0; i != nums.size(); ++i) {
      if (i > right) return false;
      right = max(right, i + nums[i]);
    }
    return true;
  }
};
