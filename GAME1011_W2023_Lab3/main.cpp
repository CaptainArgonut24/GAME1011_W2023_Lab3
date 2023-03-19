/*
Class: GAME1011
Name: John Husky
ID: 101426515
Date: Mar 19 2023
Prod: Templates and Recursion

*/

#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <vector>
#include "Messager.h"
#include "UnorderedArray.h"
#include "SearchType.h"
#include <string>

using namespace std;

int main() {

	// Array of floats 
	UnorderedArray<float> float_array = UnorderedArray<float>(3);
	
	float_array.push_back(3.5f);
	float_array.push_back(1.2f);
	float_array.push_back(7.8f);


	cout << "Array of floats: \n";
	Messager::OutputList(float_array);
	cout << "---------------------------------------------------\n";
	cout << "\nFinding value '3.5' via Linear search: \n";
	cout << float_array.SearchForValue(3.5f, SearchType::LINEAR) << endl;
	cout << "---------------------------------------------------\n";
	cout << "\nFinding value '1.2' via Binary search: \n";
	cout << float_array.SearchForValue(1.2f, SearchType::BINARY) << endl;
	cout << "---------------------------------------------------\n";

	cout << "\nSorted array of floats: \n";
	Messager::OutputList(float_array);

	float_array.clear();
	return 0;
}