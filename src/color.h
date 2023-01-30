#ifndef COLOR_H
#define COLOR_H

#include <iostream>

#if defined (__linux__) //if linux is os
#define OS "LINUX"
#define COLOR_END "\033[0m"

#define RED_BOLD "\033[1;31m"

#define RED "\033[0;31m"

#define GRAY_BOLD "\033[1;30m"

#define GRAY "\033[0;30m"

#define GREEN_BOLD "\033[1;32m"

#define GREEN "\033[0;32m"

#define YELLOW_BOLD "\033[1;33m"

#define YELLOW "\033[0;33m"

#define BLUE_BOLD "\033[1;34m"

#define BLUE "\033[0;34m"

#define LIGHT_BLUE_BOLD "\033[1;36m"

#define LIGHT_BLUE "\033[0;36m"

#elif (_WIN32) //else if win system
#define OS "WINDOWS"

#else
#define OS "OTHER"
#endif



template <typename T>
void print_color(T val,char* color)
{
	std::cout<<color<<val<<COLOR_END;
}

/*
template <typename ...T>
void print_color(T ...val,char *color)
{

}
*/
#endif