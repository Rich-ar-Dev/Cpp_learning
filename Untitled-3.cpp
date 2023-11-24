#include <iostream>

// Function to calculate factorial using memorazation
 unsigned long long calculate_factorial(int n, int result)
{

  // Base case: If n is 0, return results 
  if (n == 0)
  {
    return result;
  }
  else
  {
    // Recursive case: Calculate factorial in the lop
    return calculate_factorial(n-1, result*n);
    }
  }

int main()
{
  // Declare a variable to store the input number
  int n;

  // Prompt the user to enter a non-negative integer
  std::cout << "Enter a non-negative integer to calculate its factorial: ";
  std::cin >> n;

  // Check if the input is valid (non-negative)
  if (n < 0)
  {
    // Display an error message for invalid input
    std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
    // Exit with an error code
    return 1;
  }

  // Display the calculated factorial
  std::cout << "Factorial of " << n << " = " << calculate_factorial(n, 1) << std::endl;

  // Exit successfully
  return 0;
}
