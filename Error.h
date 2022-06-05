#pragma once
#include <iostream>
#include <string>
using namespace std;
class Error
{
	string name;
public:
	Error(string name)
		:name(name) {}
	string what() const { return name; }

};