#include <iostream>
using namespace std;

int main()
{	
	string text = "london is the capital of great britian";
	
	if (text[0] != ' ')
	{
		text[0] -= 32;
	}
	for (int i = 0; i < text.length()-1; i++)
	{
		
		if (text[i] == ' ')
		{
			text[i + 1]-=32;
		}
	}
	cout << text;

	return 0;
}