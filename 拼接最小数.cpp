//����һ���Ǹ��������飬����������������ƴ�������ų�һ��������ӡ��ƴ�ӳ���������������С��һ����
//
//
//
//ʾ�� 1:
//
//����: [10, 2]
//��� : "102"
//ʾ��?2 :
//
//    ���� : [3, 30, 34, 5, 9]
//    ��� : "3033459"
//
//
//    ��ʾ :
//
//    0 < nums.length <= 100
//    ˵�� :
//
//    ���������ܷǳ�����������Ҫ����һ���ַ�������������
//    ƴ�����������ֿ��ܻ���ǰ�� 0�����������Ҫȥ��ǰ�� 0



#include<bits/stdc++.h>

using namespace std;


class Solution {
public:
    string minNumber(vector<int>& nums) {
        sort(begin(nums), end(nums), [](const int& a, const int& b) -> bool { return (to_string(a)+to_string(b))< (to_string(b) + to_string(a)); });//����
        string get = "";
        for (int i = 0; i < nums.size(); i++)
        {
            get+=to_string(nums[i]);
        }
        return get;
    }
};
/*     ������������ ����֤��
    ��֤��������ab<ba��ʱ������С����b����aǰ,Ϊ�����ܵ����
*/



