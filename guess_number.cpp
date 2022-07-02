#include <iostream>;
using namespace std;
int main()
{
	
	int a = 0;
	int b = rand() % 10 + 1;
 	int c = 1;
	cout << "猜数游戏，请输入任意一个数......" << endl;
    

	while ( a != b )
	{
		cin >> a;
		while (a == b)
		{
			cout << "雾糙尼猛犸，终于对了，你总共用了" << c <<"次" << endl;
			return 0;
		}
		cout << "一眼丁真，鉴定为不够努力，这两个数相差" << a - b << "，再试1次！" << endl;
		c++;
		
	}

	return 0;
}