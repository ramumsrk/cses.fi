// EXIT_SUCCESS
#include <cstdlib>

// assert()
#include <cassert>

// std::cout
// std::endl
#include <iostream>

/**
 * Minimum value for number of integers
*/
constexpr int unsigned minimum_value_for_number_of_integers {1U};

/**
 * Maximum value for number of integers
*/
int constexpr maximum_value_for_number_of_integers {10'00'000U};

/**
 * Read number of integers from standard input
 * and return the same
*/
unsigned int
read_number_of_integers();

/**
 * Minimum value for input number
*/
constexpr int unsigned minimum_value_for_input_number {1U};

/**
 * Maximum value for input number
*/
unsigned int constexpr maximum_value_for_input_number {10'000'000U};

/**
 * Read a number from standard input
 * and return the same
*/
unsigned int
read_number();

/**
 * Return count of divisors
*/
unsigned int
count_of_divisors(int unsigned input_number);

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
  /*
  * Return EXIT_SUCCESS to the
  * underlying operating-system
  */
  return EXIT_SUCCESS;
} 