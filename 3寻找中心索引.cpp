/*
给定一个整数类型的数组 nums，请编写一个能够返回数组“中心索引”的方法。

我们是这样定义数组中心索引的：数组中心索引的左侧所有元素相加的和等于右侧所有元素相加的和。

如果数组不存在中心索引，那么我们应该返回 -1。如果数组有多个中心索引，那么我们应该返回最靠近左边的那一个。
*/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    
      for(int i = 0;i<nums.size();i++){
          int sum1=0,sum2=0;
          for(int j=0;j<i;j++){
              sum1 += nums[j];
            }
          for(int k = nums.size()-1;k>i;k--){
              sum2 += nums[k];
          }
          if(sum1 == sum2) {
             return i;
          }
        } 
        return -1;
    }
};