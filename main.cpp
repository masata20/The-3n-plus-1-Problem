#import <iostream>

using namespace std;

int evenNumber(int x);// function for even number
int oddNumber(int x);// function for odd number

int main() 
{
	int n; // Input number;

	n = 22;
	do
	{
		if(n % 2)
		{
			// n is odd
			n = oddNumber(n);
		}
		else 
		{
			// n is even
			n = evenNumber(n);
		}

		cout << n << ' ';
	} while(n != 1);

	return 0;
}


int oddNumber(int x)
{
	int n = 0;
	n = 3*x + 1;

	return n;
}


int evenNumber(int x)
{
	int n = 0;
	n = x / 2;

	return n;
}
