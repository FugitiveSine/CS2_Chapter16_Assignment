/*
 * ErrorClass.hpp
 *
 *  Created on: Apr 24, 2023
 *      Author: henry
 */

#ifndef ERRORCLASS_HPP_
#define ERRORCLASS_HPP_
#include <iostream>

class ErrorClass {
public:
	ErrorClass();
	virtual ~ErrorClass();

	std::string Message;
	int ErrorCode;
};

#endif /* ERRORCLASS_HPP_ */
