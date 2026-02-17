
#include <vector>
#include <iostream>
#include "include/sort.hpp"


//Way one with three assertions inside the while loop
std::vector<int> sort(std::vector<int> unsorted_arr){
	
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

//Recursive solution
//


//Binary insertion
//
//


//Shell sort
