#include<iostream>
#include<string>
#include<typeinfo>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	int ia[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto ia2(ia);
	cout << typeid(ia2).name() <<endl;
	decltype(ia) ia3 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << typeid(ia3).name() << endl;

	cout << endl << "************指针也是迭代器************" << endl;
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p = arr, *q = &arr[10];
	for (; p != q; ++p)
		cout << *p << " ";
	cout << endl;

	cout << "\n************标准库函数 begin 和end ************\n";
	int ia4[] = { 0, 1, 2, 3, 4, -5, 6, 7, 8, 9 };
	int *beg = std::begin(ia4);
	int *last = std::end(ia4);
	while (beg != last && *beg >= 0)  //找出数组中的第一个负数
		++beg;
	cout << *beg << "\n\n";
	return 0;
}