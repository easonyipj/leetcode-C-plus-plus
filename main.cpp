#include<iostream>
#include <vector>
#include "./sort/selectSort.cpp"
#include "./sort/shellSort.cpp"
#include "./sort/mergeSort.cpp"
#include "./sort/quickSort.cpp"
#include "./sort/insertSort.cpp"
#include "./tsinghua/rankScore.cpp"
#include <iostream>
#include <fstream>
#include <cstdlib> //qsort在此头文件中声明

using namespace std;

int main()
{

//    ifstream srcFile("score.txt");
//    if(!srcFile.is_open()) {
//        cout << "not open" << endl;
//    }
//
//    double score;
//    double weight;
//    double scoreSum = 0;
//    double weightSum = 0;
//    while(srcFile >> score >> weight) {
//        scoreSum += score * weight;
//        weightSum += weight;
//        cout << scoreSum / weightSum << endl;
//    }
    vector<int> nums = {2, 1, 8, 3, 4};
       nums = sort::insertSort::sort(nums);
       for(int i : nums) {
           cout << i << endl;
       }
}



