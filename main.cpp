// FizzBuzz project for INFOTC 2040 SP '19, done in 
// Geany on Linux Mint 19.1
// By Brandon Buttlar
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			cout << "FizzBuzz\n";
			continue;
		}
		
		else if (i % 3 == 0)
		{
			cout << "Fizz\n";
			continue;
		}
		
		else if (i % 5 == 0)
		{
			cout << "Buzz\n";
			continue;
		}
		
		else
		{
			cout << i << endl;
			continue;
		}
	}
	
	return 0;
}
