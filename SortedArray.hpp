/*
 * SortedArray.hpp
 *
 *  Created on: Apr 24, 2023
 *      Author: henry
 */

#ifndef SORTEDARRAY_HPP_
#define SORTEDARRAY_HPP_
#include <iostream>
#include "ErrorClass.hpp"
using namespace std;

template<class T>
class SortedArray :public ErrorClass {
public:
	SortedArray();
	virtual ~SortedArray();
	SortedArray(int arraySize, bool ToF){
		this->Tarray = new T[arraySize];
			this->arrayCounter = 0;
			this->numOfItems = 0;
			SetSorted(ToF);

			arrayCounter = arraySize;

				SetSorted(this->sort);
	}

	void AddEnd(T entryEnd){
		ErrorClass* throwError = nullptr;
			throwError = new ErrorClass;
			throwError->Message = "Cannot AddEnd because array is full";
			throwError->ErrorCode = 001;

			if(numOfItems == arrayCounter){//if the num of items in the array is equal to the size it wont add
				throw throwError;
			}else{}
			T tempArray[numOfItems];
					for(int i = 0; i< numOfItems; i++){
						tempArray[i] = this->Tarray[i];
					}
					this->Tarray[0] = entryEnd;
					for(int i = 0; i< numOfItems; i++){
						this->Tarray[i + 1] = tempArray[i];
					}
					if(this->sort == true){
						SortArray();
					}else{}

					numOfItems++;
					delete throwError;

	}
	void AddBegin(T entryBegin){

		if (arrayCounter <= numOfItems) {
					ErrorClass* throwError = new ErrorClass();
					throwError->Message = "Cannot AddBegin because array is full";
					throwError->ErrorCode = 98;
					throw throwError;
					delete throwError;
				}
				else {
					this->Tarray[numOfItems] = entryBegin;
					numOfItems++;
					if (this->sort == true) {
						SortArray();
					}
					else{}
				}

	}
	void PrintArray(){
		for(int i = 0; i < numOfItems; i++){
				std::cout << this->Tarray[i] << " ";
			}
			cout << "\n" << endl;
	}
	void SortArray(){

		for (int i = 0; i < numOfItems - 1; i++) {
			for (int j = i + 1; j < numOfItems; j++) {
				if (Tarray[i] > Tarray[j]) {
					swap(Tarray[i], Tarray[j]);
				} else {
				}
			}
		}
	}
	void SetSorted(bool ToF){
		if(ToF == true){
				this->sort = true;
			}else{
				this->sort = false;

			}
	}
	void setASortedArray(T *aSortedArray) {
			this->Tarray = aSortedArray;
		}
	void setNumOfItems();

private:
	T* Tarray;
	int arrayCounter;
	int numOfItems;
	bool sort;

};
template<class T>
SortedArray<T>::~SortedArray(){
	delete [] this->Tarray;
}
void swap(int &firstPointer, int &secondPointer)
	{
	    int temp = firstPointer;
	    firstPointer = secondPointer;
	    secondPointer = temp;
	}

#endif /* SORTEDARRAY_HPP_ */
