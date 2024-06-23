class Tree_Recursion_Class:
    def __init__(self):
        self.call_count = 0
        self.current_depth = 0
        self.max_depth = 0

    def initialize_call_count(self):
        # Initializer Method
        self.call_count = 0
        self.current_depth = 0
        self.max_depth = 0

    def tree_recursion(self, n):
        # Tree Recursion Implementation Method
        print(n, end=", ")

        self.call_count += 1
        self.current_depth += 1
        self.max_depth = max(self.current_depth, self.max_depth)
        if n > 0:
            self.tree_recursion(n - 1)
            self.tree_recursion(n - 1)
        self.current_depth -= 1

    def get_call_count(self):
        # Getter Method
        return self.call_count

    def get_max_depth(self):
        # Getter Method
        return self.max_depth

class Natural_Numbers_Class:
    def __init__(self):
        self.recursive_stack_count = 0
        self.analytic_stack_count = 0

    def recursive_sum(self, n):
        self.recursive_stack_count += 1
        if (n == 1):
            return 1
        return n + self.recursive_sum(n-1)
    def analytic_sum(self, n):
        return (n*(n + 1)/2)

class Power_Series_Class:
    def __init__(self):
        pass

    def recursive_method_one(self, m, n):
        if (n == 0):
            return 1
        return (m)*self.recursive_method_one(m,n-1)

    def recursive_method_two(self, m, n):
        if (n ==0):
            return 1
        if (n % 2 == 0):
            return self.recursive_method_two(m*m,n/2)
        else:
            return m*self.recursive_method_two(m*m, (n-1)/2)

class Taylor_Series_Class:
    def __init__(self):
        pass

    p = 1
    f = 1
    @staticmethod
    def taylor_method_one(x, n):
        if n == 0:
            return 1
        r = Taylor_Series_Class.taylor_method_one(x, n - 1)
        Taylor_Series_Class.p = Taylor_Series_Class.p*x
        Taylor_Series_Class.f = Taylor_Series_Class.f*n
        return r + (Taylor_Series_Class.p / Taylor_Series_Class.f)

    s = 1
    @staticmethod
    def taylor_series_horner_method(x, n):
        if n == 0:
            return Taylor_Series_Class.s
        Taylor_Series_Class.s = 1 + (x / n) * Taylor_Series_Class.s
        return Taylor_Series_Class.taylor_series_horner_method(x, n - 1)

class Fibonacci_Series_Class:
    def __init__(self):
        pass

    def fibonacci_method_one(self, n):
        if (n <=1):
            return n
        else:
            return (self.fibonacci_method_one(n-2) + self.fibonacci_method_one(n-1))

    F = []

    def fibonacci_method_two_list(self,n):
        Fibonacci_Series_Class.F = [-1] * n

    def fibonacci_method_two(self, n):
        if n <= 1:
            return n
        if Fibonacci_Series_Class.F[n-1] != -1:
            return Fibonacci_Series_Class.F[n-1]
        Fibonacci_Series_Class.F[n-1] = self.fibonacci_method_two(n - 1) + self.fibonacci_method_two(n - 2)
        return Fibonacci_Series_Class.F[n-1]

class Binomial_Method():
    def __init__(self):
        pass
    def factorial(self, n):
        if (n <=1):
            return n
        else:
            return n*self.factorial(n-1)
    def recursive_method(self, n, r):
        num = self.factorial(n)
        denom_a = self.factorial(r)
        denom_b = self.factorial(n-r)
        return (num/(denom_a*denom_b))
    def pascal_method(self, n,r):
        if (n == r or r == 0):
            return 1
        else:
            return (self.pascal_method(n - 1, r - 1) + self.pascal_method(n - 1, r))

class Tower_of_Hanoi():
    def __init__(self):
        pass
    def TOH(self, a,b,c,n):
        if (n>0):
            self.TOH( a, c, b, n-1)
            print("Move disk from tower ", a, " to tower ", c)
            self.TOH( b, a, c, n-1)
