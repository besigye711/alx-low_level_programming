#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Function to shuffle an array*/
void shuffleArray(char *array[], int size)
{
	int i;
	srand(time(NULL));
	if (size > 1)
	{
		for (i = size - 1; i > 0; --i)
		{
			int j = rand() % (i + 1);
			char *temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
}

int checksum(const char *data) {
    int sum = 0;
    int i = 0;

    while (data[i] != '\0') {
        sum += (int)data[i];
        i++;
    }

    return sum;
}

int main()
{
	int numStrings;
	/*Array of strings*/
	const char *strings[] = {
		"zzzzzzzzzzzzzzzzzzzzzzX",
		"zzzzzzzzzzzzzzzzzzzzzXz",
		"zzzzzzzzzzzzzzzzzzzzXzz",
		"zzzzzzzzzzzzzzzzzzzXzzz",
		"zzzzzzzzzzzzzzzzzzXzzzz",
		"zzzzzzzzzzzzzzzzzXzzzzz",
		"zzzzzzzzzzzzzzzzXzzzzzz",
		"zzzzzzzzzzzzzzzXzzzzzzz",
		"zzzzzzzzzzzzzzXzzzzzzzz",
		"zzzzzzzzzzzzzXzzzzzzzzz",
		"zzzzzzzzzzzzXzzzzzzzzzz",
		"zzzzzzzzzzzXzzzzzzzzzzz",
		"zzzzzzzzzzXzzzzzzzzzzzz",
		"zzzzzzzzzXzzzzzzzzzzzzz",
		"zzzzzzzzXzzzzzzzzzzzzzz",
		"zzzzzzzXzzzzzzzzzzzzzzz",
		"zzzzzzXzzzzzzzzzzzzzzzz",
		"zzzzzXzzzzzzzzzzzzzzzzz",
		"zzzzXzzzzzzzzzzzzzzzzzz",
		"zzzXzzzzzzzzzzzzzzzzzzz",
		"zzXzzzzzzzzzzzzzzzzzzzz",
		"zXzzzzzzzzzzzzzzzzzzzzz",
		"Xzzzzzzzzzzzzzzzzzzzzzz",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*A",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AAA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"AA*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"A*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA",
		"*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
	
	/*Get the length of the array*/
	numStrings = sizeof(strings) / sizeof(strings[0]);

	/*Shuffle the array*/
	shuffleArray((char **)strings, numStrings);

	/*Print the randomly selected string*/
	printf("%s", strings[0]);

	return 0;
}

