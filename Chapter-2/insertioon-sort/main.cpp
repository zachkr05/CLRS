
#include <vector>
#include <iostream>
#include "include/sort.hpp"

int main(){

	std::vector<int> unsorted_arr = {1,5,5,7,1,1,2,5,1200, 9000, 10, 5,9 ,3, 4,8,9, 20, 280, 190, 2850, 10, 13, 14 , 15 ,13, 14, 15, 29};

	//Show user the array we are going to sort
	std::cout << "Sorting Array: " << std::endl;
	for (auto& num : unsorted_arr){
		std::cout << num << " ";
	}		
	std::cout << std::endl;
	
	unsorted_arr = sort(unsorted_arr);

	for (auto& num : unsorted_arr){
		std::cout << num << " ";
	}		
	std::cout << std::endl;
	
	return 0;

}
