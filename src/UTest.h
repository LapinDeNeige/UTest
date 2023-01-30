#ifndef UTEST_H
#define UTEST_H

#include <iostream>
#include <string>

//#include <type_traits>
#include <experimental/tuple>
#include <utility>
#include "color.h"
#include <vector>

#include <stdarg.h>

template <typename  FuncType,typename... ArgsType>

class UTest
{
private:
	

	FuncType (*result)(ArgsType ...arg); //arguments
	void (*void_result)(); //result of type void function

	FuncType result_value; //result of function of some type
	
	/*void printColor()*/

public:

	//template <typename FuncType>
	
	//template <typename ArgsType>
	UTest(FuncType (*function)(ArgsType ...args)) //conrtuctor of function with argument
	{
		//check input function type 
		if(std::is_same<FuncType,void>::value)
		{
			std::cout<<"Function type shouldn't be void";
			exit(0);
		}

		this->result=function;
		
	}

	
	//template <typename ArgsType>	
	bool Assert(FuncType desired_value,ArgsType ...args)
	{
	//	FuncType rst_val;
	//	this->result_value=(this->result(arg));

		this->result_value=(this->result(args...));
		//std::experimental::apply([](auto&&...arg){rst_val=rst(arg...);},arg);
		
		if(this->result_value ==desired_value)
		{
			//std::cout<<"Values are equal\n";
			print_color("\nValues ",GREEN_BOLD);
			print_color(result_value,GREEN_BOLD);
			print_color(" and ",GREEN_BOLD);
			print_color(desired_value,GREEN_BOLD);
			print_color(" are equal\n",GREEN_BOLD);
		}
		else
		{
			print_color("\n Values ",RED_BOLD);
			print_color(result_value,RED_BOLD);
			print_color(" and ",RED_BOLD);
			print_color(desired_value,RED_BOLD);
			print_color(" are not equal\n",RED_BOLD);
		}
		//	std::cout<<"Values are not equal\n";
	}


	
	
};





#endif
