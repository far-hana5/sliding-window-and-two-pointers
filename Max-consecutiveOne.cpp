/*
Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.

 

Example 1:

Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: [1,1,1,0,0,1,1,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
Example 2:

Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
*/

#include<bits/stdc++.h>
using namespace std;
 int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0;int maxLen=INT_MIN;
          int zeros=0;
        while(r<nums.size()){
           if(nums[r]==0)zeros++;

           while(zeros>k){
            if(nums[l]==0)zeros--;

            l++;
           }
            if(k>=zeros){
                maxLen=max(maxLen,r-l+1);
            }
           r++;
        }
        return maxLen;
    }
int main(){
 int n,k;
        cin>>n;
        vector<int>cP(n);
        for(int i=0;i<n;i++){
            cin>>cP[i];
        }
        cin>>k;
        int res=longestOnes(cP,k);
        cout<<res<<endl;
}