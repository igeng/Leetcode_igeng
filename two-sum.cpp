class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> t;
        // unordered_map<int, int> hash;
        // for (int i = 0; i < nums.size(); i++) {
        //     //每次循环做两件事：1、判断哈希表中是否有tmp；2、将nums[i]插入表中
        //     int tmp = target - nums[i];
        //     if (hash.count(tmp)) {
        //         //因为当结果中较小的索引先查询时，hash表中并没有tmp，
        //         //只有当较大索引进入时，才会查到tmp，所以i为较大那个索引，放后边
        //         t = vector<int>({hash[tmp], i});
        //         break;
        //     }
        //     hash[nums[i]] = i;
        // }
        // return t;
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i ++) {
            int tmp = target - nums[i];
            if (hash.count(tmp)) return {hash[tmp], i};
            hash[nums[i]] = i;
        } 
        return {};
    }
};
//使用哈希表：时间复杂度O(n)