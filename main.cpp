// @BEGIN_OF_SOURCE_CODE 
#import <iostream>

using namespace std;

int cycleLength(int);// count cycle lengh

int main() 
{
    int i, j;// Input numbers
	while (cin >> i >> j)	
	{
	
		int n = 0, max_cycleLength = 0; // Counter for cycle length

		int temp_i = i;
		int temp_j = j;
		if(temp_i > temp_j)
		{
			int temp;
			temp = temp_i;
			temp_i = temp_j;
			temp_j = temp;
		}
	
		for(int k = temp_i; k <= temp_j; k++)
		{

			n = cycleLength(k);
			if (n > max_cycleLength)
				max_cycleLength = n;
		}
	
		if(temp_j <= 1)
		{
			max_cycleLength = 1;
		}

	cout << i << " " << j << " " << max_cycleLength << endl;		
	}
	
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
			x = 3*x + 1;
		}
		else 
		{
			// n is even
			x = x / 2;
		}

		counter++;	

	} while(x != 1);

	return counter;
}

// @END_OF_SOURCE_CODE
