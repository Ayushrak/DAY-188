//1st mwthod 
// first sort the element then return kth element
//time complexity -> nlogn and space complexity -> o(1)


//2nd method
//using max heap
//time complexity -> o(n + klogn) and space complexity -> o(k)

//3rd method 
//using min heap(best method)
//also priority_queue
//time complexity -> o(nlogk) (step down) and space complexity -> o(k)


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int ,vector<int> , greater<int>>p;

        for(int i=0;i<k;i++)
        p.push(nums[i]);

        for(int i=k;i<nums.size();i++){
            if(nums[i]>p.top()){
                p.pop();
                p.push(nums[i]);
            }
        }
        return p.top();
    }

    //quick sort method also in O(n)
};