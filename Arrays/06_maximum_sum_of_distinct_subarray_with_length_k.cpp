class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> freq;
        long long sum = 0;
        long long ans = 0;

        int start = 0;

        for (int end = 0; end < nums.size(); end++) {

            sum += nums[end];
            freq[nums[end]]++;

            if (end - start + 1 > k) {
                sum -= nums[start];

                freq[nums[start]]--;
                if (freq[nums[start]] == 0)
                    freq.erase(nums[start]);

                start++;
            }

            if (end - start + 1 == k && freq.size() == k) {
                ans = max(ans, sum);
            }
        }

        return ans;
    }
};