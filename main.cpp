#pragma once
#include <iostream>
#include "TestData.h"

#define GETNAME(VariableName) # VariableName

using namespace std;

class OutPut {
private:
	OutPut() {}

public:
	static OutPut& GetInstance() {
		static OutPut instance;
		return instance;
	}

	template<class T>

	void DataWriteToConsole(T value) {
		cout << GETNAME(Value) << ":" << value << endl;
	}
};


void main() {
	int age = 20;
	OutPut output = OutPut::GetInstance();
	
	output.DataWriteToConsole(age);
}

