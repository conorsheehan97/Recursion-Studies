#include <iostream>
#include <chrono>
#include <vector>

#pragma once

class Recursion
{
public:
	// Anything from here to the next comments is for Tree Recursion
	int call_count, current_depth, max_depth;
	void initialize_call_count();
	void tree_recursion(int n);
	int get_call_count();
	int get_max_depth();
	//Natural Numbers
	void initialize_counts();
	int recursive_sum(int N);
	int recursive_stack_count;
	int analytical_sum(int N);
	int analytical_stack_count;
	//Power Series 
	int power_stack_count, improved_power_stack_count;
	void initilize_power_counts(); 
	int power_recursion(int m, int n);
	int improved_power_recursion(int m, int n);
	// Taylor Series
	double taylor_method_one(int x, int n);
	double taylor_series_horner_method(int x, int n); 
	// Fibonacci
	int fib_m1_stack;
	int fib_m2_stack;
	int fibonacci_method_one(int n);
	std::vector<int> F;
	void fibonacci_method_two_vector(int n);
	int fibonacci_method_two(int n);
	// nCr Analysis
	int factorial_stack, pascal_stack;
	void initialize_stacks_nCr();
	int factorial(int n);
	int factorial_method(int n, int r);
	int pascal_triangle_method(int n, int r);
	// Tower of Hanoi
	void TOH(int n, int A, int B, int C);
};

