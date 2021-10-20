#include <iostream>

using namespace std;



int main()
{

	cout << "Input string"<<endl;
	string text = "";
	cin >> text;
	
	for (int i = 0; i < text.length()/2; i++)
	{
		swap(text[i], text[text.length() - 1 - i]);
	}
	cout << text;

	return 0;
}