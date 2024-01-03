#ifndef _constraints_
#define _constraints_
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
#endif // _constraints_