#pragma once
#include <iostream>
#include <string>
#include "QSInterface.h"
using namespace std;

class QS : public QSInterface{
public:
	QS();
	~QS();
	void sortAll();
    int medianOfThree(int left, int right);
	int partition(int left, int right, int pivotIndex);
	string getArray() const;
    int getSize() const;
	bool addToArray(int value);
	bool createArray(int capacity);
	void clear();
};
	
