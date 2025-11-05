class Solution {
	public:
		bool isPalindrome(int x) {
			if (x < 0) return false;
			
			std::list<int> nums;
			int k = 0;
			
			while (x > 0) {
				int d = x % 10;
				x /= 10;
				nums.append(d);
				k++;
			}
			
			for (int i = 0; i < k; i++) {
				if (nums[i] != nums[k-i]) return false;
			}
			
			return true;
		}
}