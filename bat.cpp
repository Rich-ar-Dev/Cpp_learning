#include <iostream>
#include <vector>

// Function to calculate factorial using memorazation
unsigned long long calculateFactorial(int n)
{
  std::vector<unsigned long long> factorial(n, 1);
  // Base case: If n is 0, return 1
  if (n == 0)
  {
    return 1;
  }
  else
  {
    // Recursive case: Calculate factorial in the lop
    for ( int i= 1; i<=n; ++i) {
      factorial[i] = factorial[i] * i;
    }
    return factorial[n];
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

  // Calculate factorial using recursion
  unsigned long long result = calculateFactorial(n);

  // Display the calculated factorial
  std::cout << "Factorial of " << n << " = " << result << std::endl;

  // Exit successfully
  return 0;
}
