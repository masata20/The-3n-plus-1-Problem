#import <iostream>

using namespace std;


int cycleLength(int);// count cycle lengh
int evenNumber(int);// function for even number
int oddNumber(int);// function for odd number

int main() 
{
	int i = 900, j = 1000;// Input numbers

	int n = 0, max_cycleLength = 0; // Counter for cycle length

	for(i; i <= j; i++)
	{

		n = cycleLength(i);
		if (n > max_cycleLength)
			max_cycleLength = n;
	}
	
	cout << i << ' ' << j << ' ' << max_cycleLength << endl;
	return 0;
}

// count cycle length for given number with arugument
// and return the cycle-length for int x
int cycleLength(int x)
{
	int counter = 1;
	do
	{
		if(x % 2)
		{
			// n is odd
			x = oddNumber(x);
		}
		else 
		{
			// n is even
			x = evenNumber(x);
		}

		counter++;	

	} while(x != 1);

	return counter;
}

// for odd numbere, multiply by 3 and plus 1
// and return that number
int oddNumber(int x)
{
	int n = 0;
	n = 3*x + 1;

	return n;
}

// for even number, divided by 2
// and return it
int evenNumber(int x)
{
	int n = 0;
	n = x / 2;

	return n;
}
