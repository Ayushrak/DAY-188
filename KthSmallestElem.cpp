//1st mwthod 
// first sort the element then return kth element
//time complexity -> nlogn and space complexity -> o(1)


//2nd method
//using min heap
//time complexity -> o(n + klogn) and space complexity -> o(k)

//3rd method 
//using max heap(best method)
//also priority_queue
//time complexity -> o(nlogk) (step down) and space complexity -> o(k)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        priority_queue<int>p;
        
        for(int i=0;i<k;i++)
        p.push(arr[i]);
        
        for(int i=k;i<=r;i++){
            if(arr[i]<p.top()){
                p.pop();
                p.push(arr[i]);
            }
        }
        return p.top();
    }
};