#include<iostream>
#include<string>
#include<cstring>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	char str1[] = "Hello";
	char str2[] = "World";
	char str3[15];
	strcpy_s(str3, str1);
	strcat_s(str3, str2);
	for (auto c : str3)
		cout << c;
	cout << endl;

	return 0;
}