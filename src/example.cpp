#include "UTest.h"
#include <iostream>

int sum(int a,int b)
{

	return (a+b);
}

double sub(double a,double b)
{

	return (a-b);
}


int main()
{
   UTest <int,int,int>sumTest(&sum); //Unit test of sum function
   UTest <double,double,double>subTest(&sub); //Unit test of sub function
   
   int a=3,b=5;
   int desiredValue=8;
	
   sumTest.Assert(desiredValue,a,b);
   return 0;
}

