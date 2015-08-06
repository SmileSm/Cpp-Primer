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
	int num[] = { 1, 2, 3, 4, 5 };
	vector<int> number(std::begin(num), std::end(num));
	for (auto c : number)
		cout << c << " ";
	cout << endl;
	return 0;
}