#include <iostream>

using namespace std;

bool isLoud(char letter)
{
	char loud[] = "AEIOUYaeiouy";
	for (int i = 0; i < 12; i++)
	{
		if (letter == loud[i])
		{
			return true;
		}
	}
	return false;

}

int main()
{

	char text[] = "Hello world";

	for (int i = 0; i < 11; i++)
	{
		if (isLoud(text[i]))
		{
			text[i] = '_';
		}
	}
	
	for (int i = 0; i < 11; i++)
	{	
			cout<<text[i];		
	}

	return 0;
}