#include<stdio.h>
int main()
{
	char alpha;
	scanf("%c",&alpha);
	switch (alpha)
{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		
		printf("\n VOWEL");
		break;
		
	default:
		
		printf("\n CONSONANT");
}
		return 0;
}
