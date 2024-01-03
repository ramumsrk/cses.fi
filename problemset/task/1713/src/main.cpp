// read_number_of_integers()
// read_number()
// count_of_divisors()
#include "constraints.hpp"

// std::cout
// std::endl
#include <iostream>

// 
/*
* C++ program execution starts from
* builtin main() function
*/
int
main()
{
    unsigned int number_of_integers { read_number_of_integers() };
    for ( auto number {1U} ; number <= number_of_integers ; number += 1 )
    {
      auto input_number { read_number() };
      std::cout<<
      count_of_divisors(input_number)
      <<std::endl;
    }
  return EXIT_SUCCESS;
}