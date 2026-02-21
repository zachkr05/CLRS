
#include <vector>
#include <iostream>
#include "include/sort.hpp"


//Sort increasing order
std::vector<int> sort_increasing(std::vector<int> unsorted_arr){
	
	//Loop thru array
	for (int i =1; i<unsorted_arr.size(); i++){
		int curr_num = unsorted_arr[i];
		int curr_idx = i;
		while(unsorted_arr[curr_idx-1]>curr_num){
			unsorted_arr[curr_idx] = unsorted_arr[curr_idx-1];
			unsorted_arr[curr_idx-1] = curr_num;
			curr_idx--;
		}
	}
	return unsorted_arr;
}

//Sort decreasing order
std::vector<int> sort_decreasing(std::vector<int> unsorted_arr){

	for (int i = unsorted_arr.size()-1; i >= 0; i--){
		int curr_num = unsorted_arr[i];
		int curr_idx = i;

		//Can assume right portion is already sorted therefore we always just compare to the right side
		while(curr_idx < unsorted_arr.size() -1 && unsorted_arr[curr_idx+1] > curr_num){
			unsorted_arr[curr_idx] = unsorted_arr[curr_idx+1];
			curr_idx++;
		}

		unsorted_arr[curr_idx] = curr_num;

	}

	return unsorted_arr;

}


//Recursive solution


