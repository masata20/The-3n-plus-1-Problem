// @BEGIN_OF_SOURCE_CODE 
#import <iostream>

using namespace std;

int cycleLength(unsigned int);// count cycle lengh

int main() 
{
    int i, j;// Input numbers

	// Since input variable is specified, use scanf instead of cin(much fater)
	while (scanf("%d %d", &i, &j) != EOF)
	{	
		int cycle_length; 
		int max_cycle_length = 0;// must be initialized to zero, if it is random large value, it cannot compare with obtained cycle lenth later in this code 
	
		int temp_i = i;
		int temp_j = j;

		// if i is bigger than j, swap them
		if(i > j)
			swap(i,j);

		// use unsigned int, since all integer must be bigger than 0
		for(unsigned int k = i; k <= j; k++)
		{
			cycle_length = cycleLength(k);// get cycle length with certain value k
	
			// make max_cycle_length have max value
			if (cycle_length > max_cycle_length)
				max_cycle_length = cycle_length;
		}
		
		//Again, since type are specified, use printf to be fast
		printf("%d %d %d\n", temp_i, temp_j, max_cycle_length);		
	}
	
	return 0;
}

// count cycle length for given number with arugument
// and return the cycle-length for unsigned int x
// use unsigined integer
int cycleLength(unsigned int x)
{
	int counter = 1;

	// don't use do while in case of i and j are the one
	while(x != 1)
	{
		if(x % 2)
			x = 3*x + 1;
		else	
			x = x / 2;
		counter++;	

	}
	return counter;
}

// @END_OF_SOURCE_CODE
