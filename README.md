# Recursion in C++ and Python

## Introduction
Recursion is a powerful technique in programming where a function calls itself to solve a problem. It is commonly used in algorithms such as searching, sorting, and traversing data structures like trees and graphs. When designing a recursive solution, two critical components must be defined: the base case and the recursive case.

## Project Overview
This project investigates several implementations of recursion in mathematical series and evaluates the efficacy of different approaches in terms of time taken for completion and activation records required on the stack. These investigations are conducted initially in C++ and subsequently in Python.

### C++ Implementation
For the C++ implementation, a Recursion class is defined, with methods for each series under investigation. The time taken for the completion of each method is evaluated using the chrono library, and the number of activation records is counted using an integer attribute incremented per method call. This approach provides a quantitative measure of both performance and memory usage, allowing for a comprehensive analysis of recursive implementations in C++.

### Python Implementation
Following the C++ analysis, the recursive algorithms are re-implemented in Python using a Recursion library, containing a class per implementation. Python’s straightforward syntax and dynamic typing facilitate the quick prototyping of recursive functions. The performance and stack usage are compared to the C++ implementations to assess the differences between the two languages in handling recursion.

## Recursion Implementations
 - Tree Recursion
 - Sum of the Natural Numbers
 - Power Series
 - Taylor Series
 - Fibonacci Series
 - Binomial Coefficient
 - Tower of Hanoi

#### Tree Recursion
Tree recursion involves a function making multiple recursive calls within each invocation, creating a branching structure similar to a tree. This technique is useful for solving problems that can be divided into smaller, similar subproblems.

#### Sum of Natural Numbers
The sum of the first n natural numbers can be calculated using a recursive approach, where the problem is broken down into smaller sub-problems. This method has a time complexity of O(n) and a space complexity of O(n) due to the call stack growing with each recursive call.

#### Power Series
Two methods for calculating power series are explored: blunt force recursion and improved power recursion (exponentiation by squaring). The improved method significantly reduces the time complexity from O(n) to O(log n) and the space complexity to O(log n).

#### Taylor Series
The Taylor series is used to approximate complex functions with polynomials. Two methods are investigated: blunt force recursion and Horner’s method. Horner’s method optimizes the computation by reducing the number of multiplications required, improving both efficiency and numerical stability.

#### Fibonacci Series
The Fibonacci series is calculated using blunt force recursion and memoization. While blunt force recursion is highly inefficient with a time complexity of O(2^n), memoization optimizes the process by storing the results of expensive function calls, reducing the time complexity to O(n) and the space complexity to O(n).

# Conclusion
This project highlights the differences in performance and memory usage between various recursive implementations in C++ and Python. Through these investigations, we gain a deeper understanding of how recursion works and how to optimize recursive algorithms for different programming languages.
