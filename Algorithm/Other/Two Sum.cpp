//
//  Two Sum.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/23.
//

#include "Two Sum.hpp"

// 这是leecode第一题  解法一:暴力解法

vector<int> twoSum(int arr[],int arrLength,int target){
    vector<int> vec;
    for(int i=0;i<arrLength;i++){
        for(int j=0;j<arrLength;j++){
            if(arr[i]+arr[j]==target){
                vec.push_back(i);
                vec.push_back(j);
                return vec;
            }
        }
    }
    throw "数组中没有相加为target的两个值";
};

