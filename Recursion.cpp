#include "Recursion.h"
void Recursion::initialize_call_count()
{
	//Initiliser Method 
	call_count = 0;
	current_depth = 0;
	max_depth = 0;
}
void Recursion::tree_recursion(int n)
{
	// Tree Recursion Implementation Method
	std::cout << n << ", ";

	call_count++;
	current_depth++;
	max_depth = std::max(current_depth, max_depth);
	if (n > 0)
	{
		tree_recursion(n - 1);
		tree_recursion(n - 1);
	}
	current_depth--;
}
//Getter Methods
int Recursion::get_call_count()
{
	return call_count;
}
int Recursion::get_max_depth()
{
	return max_depth;
}
//Natural Numbers
int Recursion::recursive_sum(int N)
{
	recursive_stack_count++;
	if (N == 1)
	{
		return 1;
	}
	else
	{
		return (recursive_sum(N - 1) + N);
	}
}
int Recursion::analytical_sum(int N)
{
	analytical_stack_count++;
	return ((N * (N + 1)) / 2);
}
void Recursion::initialize_counts()
{
	recursive_stack_count = 0;
	analytical_stack_count = 0;
}
//Power Series
void Recursion::initilize_power_counts()
{
	power_stack_count = 0;
	improved_power_stack_count = 0;
}
int Recursion::power_recursion(int m, int n)
{
	power_stack_count++;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return (m*power_recursion(m,n-1));
	}
}
int Recursion::improved_power_recursion(int m, int n)
{
	improved_power_stack_count++;
	if (n == 0)
	{
		return 1;
	}
	else if (n % 2 == 0)
	{
		return (improved_power_recursion(m*m, n/2));
	}
	else
	{
		return (m*improved_power_recursion(m*m,(n-1)/2));
	}
}
//Taylor Series with Static Variables
double Recursion::taylor_method_one(int x, int n)
{
	static double p=1, f = 1;
	if (n == 0)
	{
		return 1;
	}
	else
	{
		double r = taylor_method_one(x, (n - 1));
		p = p * x;
		f = f * n;
		return (r + (p / f));
	}
}
double Recursion::taylor_series_horner_method(int x, int n)
{
	static double s=1;
	if (n == 0)
	{
		return s;
	}
	s = 1 + (x / static_cast<double>(n))*s;
	return taylor_series_horner_method(x, n - 1);
}
// Fibonacci Series
int Recursion::fibonacci_method_one(int n)
{
	fib_m1_stack++;
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return (fibonacci_method_one(n - 2) + fibonacci_method_one(n - 1));
	}
}
void Recursion::fibonacci_method_two_vector(int n)
{
	fib_m1_stack = 0;
	fib_m2_stack = 0;
	F = std::vector<int>(n, -1);
}
int Recursion::fibonacci_method_two(int n)
{
	fib_m2_stack++;
	if (n <= 1) {
        return n;
    }
	if (F[n] != -1) {
		return F[n];
	}
	F[n] = fibonacci_method_two(n - 1) + fibonacci_method_two(n - 2);
	return F[n];
}
// nCr Analysis
void Recursion::initialize_stacks_nCr()
{
	pascal_stack = 0;
	factorial_stack = 0;
}
int Recursion::factorial(int n)
{
	factorial_stack++;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
int Recursion::factorial_method(int n, int r)
{
	int num = factorial(n);
	int denom_a = factorial(r);
	int denom_b = factorial(n - r);
	return (num / (denom_a * denom_b));
}
int Recursion::pascal_triangle_method(int n, int r)
{
	pascal_stack++;
	if (n == r || r == 0)
	{
		return 1;
	}
	return (pascal_triangle_method(n-1,r-1) + pascal_triangle_method(n-1,r));
}
// TOH
void Recursion::TOH(int n, int A, int B, int C)
{
	if (n > 0)
	{
		TOH(n - 1, A, C, B);
		std::cout << "\nMove disk from tower " << A << " to tower " << C;
		TOH(n - 1, B, A, C);
	}
}