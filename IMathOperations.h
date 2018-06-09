/*
 * IMathOperations.h
 *
 *  Created on: May 19, 2018
 *      Author: lo
 */

#ifndef IMATHOPERATIONS_H_
#define IMATHOPERATIONS_H_

class IMathOperations
{
public:
	virtual int add(int a, int b)=0;
    virtual int sub(int a, int b)=0;
};

#endif /* IMATHOPERATIONS_H_ */
