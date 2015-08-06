#include<iostream>
#include<vector>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
int main()
{
	vector<int> num{ 1, 2, 3, 4, 5 };
	int number[5];
	for (int i = 0; i < 5; ++i)
		number[i] = num[i];
	for (auto c : number)
		cout << c << " ";
	cout << endl;
	return 0;
}