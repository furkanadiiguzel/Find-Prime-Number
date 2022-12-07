// CTIS151-LG15_Q2
// Purpose: Program reads the numbers.txt then finds the prime numbers
// after finding prime numbers program finds the maximum prime number and its subscript
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int isPrime(int num);

int main(void)
{
	int i = 0;
	int number;
	//open the input file
	FILE *inp = fopen("numbers.txt", "r");

	if (inp == NULL)
		printf("\nFile can not be opened!!\n");
	else
	{
		//read data from the file until EOF is reached
		printf("Prime numbers are; ");
		while (fscanf(inp, "%d", &number) != EOF)
		{
			//check whether the number is prime or not
			//if so, display the prime numbers
			if (isPrime(number))
			{
				printf("%3d", number);
			}

		}

		fclose(inp);
	}
	return 0;
}

int isPrime(int num)
{
	int numbers;

	for (numbers = 2; numbers <; numbers++)
	{
		if (num % numbers == 0)
			return(0);
	}
	return(1);

	/*alternative solution
		numbers=2;
		s = sqrt(n);
		while(i<=s && n % numbers!=0)
			numbers++;

		if(numbers > s)
			return(1);
		else
			return(0);
  */
}