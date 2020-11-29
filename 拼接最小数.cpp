//输入一个非负整数数组，把数组里所有数字拼接起来排成一个数，打印能拼接出的所有数字中最小的一个。
//
//
//
//示例 1:
//
//输入: [10, 2]
//输出 : "102"
//示例?2 :
//
//    输入 : [3, 30, 34, 5, 9]
//    输出 : "3033459"
//
//
//    提示 :
//
//    0 < nums.length <= 100
//    说明 :
//
//    输出结果可能非常大，所以你需要返回一个字符串而不是整数
//    拼接起来的数字可能会有前导 0，最后结果不需要去掉前导 0



#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    string minNumber(vector<int>& nums) {
        sort(begin(nums), end(nums), [](const int& a, const int& b) -> bool { return (to_string(a)+to_string(b))< (to_string(b) + to_string(a)); });//升序
        string get = "";
        for (int i = 0; i < nums.size(); i++)
        {
            get+=to_string(nums[i]);
        }
        return get;
    }
};
/*     ！！！！！！ 本题证明
    反证法：假设ab<ba的时候，在最小数中b排在a前,为不可能的情况
*/



