/**
 * @file Arithmetic_calculator_Ex3.cpp
 * @brief A simple arithmetic calculator
 *
 * This program implements a basic arithmetic calculator that can perform
 * addition, subtraction, multiplication, and division.
 *
 * @author Ashray Gupta
 * @date 2023-02-11
 */

#include <iostream>

/**
 * @brief Performs arithmetic operations
 *
 * This function takes two operands and an operator as input and returns
 * the result of the operation. The supported operators are '+', '-', '*',
 * and '/'.
 *
 * @param operand1 The first operand
 * @param operator The operator
 * @param operand2 The second operand
 *
 * @return The result of the operation
 */
double calculate(double operand1, char op, double operand2) {
  double result = 0.0;
  switch (op) {
    case '+':
      result = operand1 + operand2;
      break;
    case '-':
      result = operand1 - operand2;
      break;
    case '*':
      result = operand1 * operand2;
      break;
    case '/':
      result = operand1 / operand2;
      break;
    default:
      std::cerr << "Error: Operator Invalid\n";
      break;
  }
  return result;
}

int main() {
  double operand1, operand2;
  char op;
  std::cout << "Enter the first operand: ";
  std::cin >> operand1;
  std::cout << "Enter the operator (+, -, *, /): ";
  std::cin >> op;
  std::cout << "Enter the second operand: ";
  std::cin >> operand2;
  double result = calculate(operand1, op, operand2);
  std::cout << "Result: " << result << '\n';
  return 0;
}
