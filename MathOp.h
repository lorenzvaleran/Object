/*
 * MathOp.h
 *
 *  Created on: May 19, 2018
 *      Author: lo
 */

#ifndef MATHOP_H_
#define MATHOP_H_

#include "IMathOperations.h"

class MathOp : public IMathOperations
{
public:
	MathOp();
	virtual ~MathOp();

	virtual int add(int a, int b);
    virtual int sub(int a, int b);
};

#endif /* MATHOP_H_ */
