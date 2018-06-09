/*
 * MathOp.cpp
 *
 *  Created on: May 19, 2018
 *      Author: lo
 */

#include "MathOp.h"

MathOp::MathOp() {
	// TODO Auto-generated constructor stub
}

MathOp::~MathOp() {
	// TODO Auto-generated destructor stub
}

int MathOp::add(int a, int b)
{
	return (a+b);
}

extern "C"
{
MathOp *mathOp=new MathOp();
int add(int i, int j){return mathOp->add(i,j);};
//delete mathOp;
}
