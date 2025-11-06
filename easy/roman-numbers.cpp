class Solution {
public:
	int romanToInt(string s) {
		unordered_map<char, int> um1 = {
			{ 'I': 1},
			{'V': 5},
			{'X': 10},
			{'L': 50},
			{'C': 100},
			{'D': 500},
			{'M': 1000}
		};
		unordered_map<char, int> um2 = {
			{'V': 3},
			{'X': 8},
			{'L': 30},
			{'C': 80},
			{'D': 30},
			{'M': 800}
		};
		
		const int n = string.size();
		int i = 0;
		bool b = false;
		int pv = MAX_INT;
		int sum = 0;
		while (i < n) {
			const int v = um1[s[i]];
			b = pv < v;
			pv = v;
			s = b ? s + um2[si] : s + v;
			i++;
		}
	}
};
