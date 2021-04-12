#include <iostream>
#include <string>

using namespace std;

long iterFactorial(int n) 
{
    long result = 1;
    for(int i=1; i<=n; i++) {
        result *= i;
    }
    return result;
}

long recFactorial(int n) 
{
    if (n ==  0) return 1;
    return recFactorial(n-1)*n;
}

long recFibo(int n) 
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return recFibo(n-1) + recFibo(n-2);
}

long iterFibo(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    int f0 = 0;
    int f1 = 1;
    int fn;
    for (int i = 2; i<=n; i++) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}

long recFiboFastHelper(int n, int f0, int f1)
{

    if (n == 0) return f0;
    if (n == 1) return f1;
    return recFiboFastHelper(n-1, f1, f0 + f1);

}

long recFiboFast(int n)
{
    return recFiboFastHelper(n, 0, 1); 
}


bool recIsPalindrome(string w)
{

    if (w.size() <= 1 ) return true;
    return  (w[0] == w[w.size()-1]) && recIsPalindrome(w.substr(1,w.size()-2));

}


int main() 
{
    cout << "iterFactorial(0) = " << iterFactorial(0) << endl;
    cout << "iterFactorial(1) = " << iterFactorial(1) << endl;
    cout << "iterFactorial(5) = " << iterFactorial(5) << endl;
    cout << "iterFactorial(25) = " << iterFactorial(25) << endl;

    cout << "recFactorial(0) = " << recFactorial(0) << endl;
    cout << "recFactorial(1) = " << recFactorial(1) << endl;
    cout << "recFactorial(5) = " << recFactorial(5) << endl;
    cout << "recFactorial(25) = " << recFactorial(25) << endl;

    cout << "recFibo(0)" << recFibo(0) << endl;
    cout << "recFibo(1)" << recFibo(1) << endl;
    cout << "recFibo(6)" << recFibo(6) << endl;
    cout << "recFibo(7)" << recFibo(7) << endl;
    cout << "recFibo(10)" << recFibo(10) << endl;
    cout << "recFibo(25)" << recFibo(25) << endl;

    cout << "iterFibo(0)" << iterFibo(0) << endl;
    cout << "iterFibo(1)" << iterFibo(1) << endl;
    cout << "iterFibo(6)" << iterFibo(6) << endl;
    cout << "iterFibo(7)" << iterFibo(7) << endl;
    cout << "iterFibo(10)" << iterFibo(10) << endl;
    cout << "iterFibo(25)" << iterFibo(25) << endl;

    cout << "recFiboFast(0)" << recFiboFast(0) << endl;
    cout << "recFiboFast(1)" << recFiboFast(1) << endl;
    cout << "recFiboFast(6)" << recFiboFast(6) << endl;
    cout << "recFiboFast(7)" << recFiboFast(7) << endl;
    cout << "recFiboFast(10)" << recFiboFast(10) << endl;
    cout << "recFiboFast(25)" << recFiboFast(25) << endl;
    cout << "recFiboFast(100)" << recFiboFast(100) << endl;

    cout << "recIsPalindrome(radar): " << ((recIsPalindrome("radar")) ? "TRUE" : "FALSE") << endl;
    cout << "recIsPalindrome(racecar): " << ((recIsPalindrome("racecar")) ? "TRUE" : "FALSE") << endl;
    cout << "recIsPalindrome(rabecar): " << ((recIsPalindrome("rabecar")) ? "TRUE" : "FALSE") << endl;

}
