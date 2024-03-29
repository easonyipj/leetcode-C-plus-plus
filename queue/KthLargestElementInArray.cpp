//
// Created by Eason on 2019/9/11.
//
/**
 * Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

Example 1:

Input: [3,2,1,5,6,4] and k = 2
Output: 5
Example 2:

Input: [3,2,3,1,2,4,5,5,6] and k = 4
Output: 4
Note:
You may assume k is always valid, 1 ≤ k ≤ array's length.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/kth-largest-element-in-an-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 */
#include "vector"
#include "queue"

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<> > q;
        for(int i = 0; i < nums.size(); i++) {
            if(q.size() < k) {
                q.push(nums[i]);
                continue;
            }
            if(nums[i] > q.top()) {
                q.pop();
                q.push(nums[i]);
            }
        }
        return q.top();
    }
};
