#include <iostream>
using namespace std::cout; 

/*

Problem: 
Given an array of n integers, where a[i] denotes the maximum distance 
you can advance from the index i, returns whether it is possible to 
advance  to the last index starting from the begining of the array.


Input	: Array of integers
Output	: True or false if you can advance to the end 

Constraints:
		- Array element value 0 - can't move furthher
		- What happens if elements has negative values. 


Example: 
	A = {3,3,1,0,2,0,1} leads to last position { 1, 3, 2} 
	A = {3,2,0,0,2,0,1} not possible to advance beyond position 3.
	
Ideas:
	- If we consider each element as a node in the graph and 
	  all positions, that it can reach to are the neighbors of 
	  the give node with the weight from the originating node. 
	- Kadane kind of array  
		
Complexities:
	Sol1: 	time : O (n ) space : O (n)
	Sol2: 	time : O (n)  space : O (n)
*/


int main() { 
	return 0; 
} 
