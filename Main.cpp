#include "Recursion.h"

using namespace std;

int main()
{
	//Tree Recursion
	{
		//Tree Recursion Scope 
		Recursion Obj;
		cout << "\nTree Recursion Object Instantiated\n";
		Obj.initialize_call_count();
		Obj.tree_recursion(3);
		cout << "\nThe Number of Activation Records on the Stack : \t" << Obj.get_call_count();
		cout << "\nThe Maximum Depth of Activation Records on the Stack : \t" << Obj.get_max_depth() << "\n";
	}
	// Natural Numbers Sum
	{
		// Natural Numbers Scope
		Recursion Obj;
		Obj.initialize_counts();
		cout << "\nNatural Numbers Object Instantiated";
		// Measure the time
		auto start_recursive = std::chrono::high_resolution_clock::now();
		cout << "\nRecursive sum of first 5 Natural Numbers : \t" << Obj.recursive_sum(5);
		auto end_recursive = std::chrono::high_resolution_clock::now();
		cout << "\nTotal Computation Time :  \t\t\t" << std::chrono::duration_cast<std::chrono::microseconds>(end_recursive - start_recursive).count() << "us";

		auto start_analytical = std::chrono::high_resolution_clock::now();
		cout << "\nAnalytical sum of first 5 Natural Numbers : \t" << Obj.analytical_sum(5);
		auto end_analytical = std::chrono::high_resolution_clock::now();
		cout << "\nTotal Computation Time :  \t\t\t" << std::chrono::duration_cast<std::chrono::microseconds>(end_analytical -start_analytical).count() << "us";
	
		cout << "\nRecursive Method Activation Record Count : \t" << Obj.recursive_stack_count;
		cout << "\nAnalytical Method Activation Record Count : \t" << Obj.analytical_stack_count << endl;
	}
	// Power Series
	{
		// Power Series Scope
		Recursion Obj;
		Obj.initilize_power_counts();
		cout << "\nPower Series Object Instantiated";
		// Measure the time
		auto start_recursive_1 = std::chrono::high_resolution_clock::now();
		cout << "\nPower Series Result for 2^8 : \t\t\t" << Obj.power_recursion(2,8);
		auto end_recursive_1 = std::chrono::high_resolution_clock::now();
		cout << "\nTotal Computation Time :  \t\t\t" << std::chrono::duration_cast<std::chrono::microseconds>(end_recursive_1 - start_recursive_1).count() << "us";
		cout << "\nInitial Method Stack Activation Records : \t" << Obj.power_stack_count;

		auto start_recursive_2 = std::chrono::high_resolution_clock::now();
		cout << "\nSecond Method Power Series Result for 2^8 : \t" << Obj.improved_power_recursion(2,8);
		auto end_recursive_2 = std::chrono::high_resolution_clock::now();
		cout << "\nTotal Computation Time :  \t\t\t" << std::chrono::duration_cast<std::chrono::microseconds>(end_recursive_2 - start_recursive_2).count() << "us";
		cout << "\nSecond Method Stack Activation Records : \t" << Obj.improved_power_stack_count;
	}
	// Taylor Series
	{
		//Taylor Series
		Recursion Obj;
		cout << "\n\nTaylor Series Object Instantiated\n";
		auto start_recursive_1 = std::chrono::high_resolution_clock::now();
		cout << "Initial Static Variable Method Result : \t" << Obj.taylor_method_one(3, 25);
		auto end_recursive_1 = std::chrono::high_resolution_clock::now();
		cout << "\nTotal Computation Time :  \t\t\t" << std::chrono::duration_cast<std::chrono::microseconds>(end_recursive_1 - start_recursive_1).count() << "us";
		auto start_recursive_2 = std::chrono::high_resolution_clock::now();
		cout << "\nHorner Method Result : \t\t\t\t" << Obj.taylor_series_horner_method(3,25);
		auto end_recursive_2 = std::chrono::high_resolution_clock::now();
		cout << "\nTotal Computation Time :  \t\t\t" << std::chrono::duration_cast<std::chrono::microseconds>(end_recursive_2 - start_recursive_2).count() << "us";
	}
	// Fibonacci Series
	{
		Recursion Obj;
		Obj.fibonacci_method_two_vector(36);
		cout << "\n\nFibonacci Object Instantiated\n";
		auto start_recursive_1 = std::chrono::high_resolution_clock::now();
		cout << "Using Initial Blunt Force Method Fifteenth Fibonacci Element: \t" << Obj.fibonacci_method_one(35);
		auto end_recursive_1 = std::chrono::high_resolution_clock::now();
		cout << "\nTotal Computation Time :  \t\t\t\t\t" << std::chrono::duration_cast<std::chrono::microseconds>(end_recursive_1 - start_recursive_1).count() << "us";
		cout << "\nTotal Number of Activation Records : \t\t\t\t" << Obj.fib_m1_stack;
		auto start_recursive_2 = std::chrono::high_resolution_clock::now();
		cout << "\nUsing Memoization Method Fifteenth Fibonacci Element: \t\t" << Obj.fibonacci_method_two(35);
		auto end_recursive_2 = std::chrono::high_resolution_clock::now();
		cout << "\nTotal Computation Time :  \t\t\t\t\t" << std::chrono::duration_cast<std::chrono::microseconds>(end_recursive_2 - start_recursive_2).count() << "us";
		cout << "\nTotal Number of Activation Records : \t\t\t\t" << Obj.fib_m2_stack;
	}
	// nCr Method
	{
		Recursion Obj;
		Obj.initialize_stacks_nCr();
		cout << "\n\nBinomial Coefficient Object Instantiated\n";
		auto start_recursive_1 = std::chrono::high_resolution_clock::now();
		cout << "Factorial Method for 10C6:\t\t\t" << Obj.factorial_method(10, 6);
		auto end_recursive_1 = std::chrono::high_resolution_clock::now();
		cout << "\nTotal Computation Time :  \t\t\t" << std::chrono::duration_cast<std::chrono::microseconds>(end_recursive_1 - start_recursive_1).count() << "us";
		cout << "\nFactorial Method Activation Record Count : \t" << Obj.factorial_stack;
		auto start_recursive_2 = std::chrono::high_resolution_clock::now();
		cout << "\nPascal Triangle Method for 10C6:\t\t" << Obj.pascal_triangle_method(10, 6);
		auto end_recursive_2 = std::chrono::high_resolution_clock::now();
		cout << "\nTotal Computation Time :  \t\t\t" << std::chrono::duration_cast<std::chrono::microseconds>(end_recursive_2 - start_recursive_2).count() << "us";
		cout << "\nPascal Method Activation Record Count : \t" << Obj.pascal_stack;
	}
	//Tower of Hanoi 
	{
		Recursion Obj;
		cout << "\n\nTower of Hanoi Object Instantiated\n";
		Obj.TOH(4, 1, 2, 3);
		cout << "\n";
	}
}