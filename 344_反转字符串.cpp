/*

��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� char[] ����ʽ������
��Ҫ�����������������Ŀռ䣬�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣
����Լ��������е������ַ����� ASCII ����еĿɴ�ӡ�ַ���

1.˫ָ��
2.STL
    reverse(s.begin(),s.end());
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int left = 0, right = s.size() - 1; left < right; left++, right--)
        {
            swap(s[left], s[right]);
        }
    }
};