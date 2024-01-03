// minimum_value_for_number_of_integers
// maximum_value_for_number_of_integers
#include "constraints.hpp"

// assert()
#include <cassert>

// std::cin
#include <iostream>

/**
 * Read number of integers from standard input
 * and return the same
*/
unsigned int
read_number_of_integers()
{
    unsigned int number_of_integers{};
    std::cin>>number_of_integers;
    assert(
      number_of_integers >= minimum_value_for_number_of_integers
      &&
      number_of_integers <= maximum_value_for_number_of_integers
    );
  return number_of_integers;
}
/**
 * Read a number from standard input
 * and return the same
*/
unsigned int
read_number()
{
    unsigned int input_number {};
    std::cin>>input_number;
    assert(
      input_number >= minimum_value_for_input_number
      &&
      input_number <= maximum_value_for_input_number
    );
  return input_number;
}
/**
 * Return count of divisors
*/
unsigned int
count_of_divisors(int unsigned input_number)
{
    int unsigned divisors_count {0U};
    for ( auto iteration_count {1U} ; iteration_count <= input_number ; iteration_count += 1)
    {
      if ( input_number % iteration_count == 0 )
      {
        divisors_count += 1;
      }
    }
  return divisors_count;
}