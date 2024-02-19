#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
private:
	char	str[100];
public:
	void	SetString(char	*src);
	void	ShowString(void);
};

void	Printer::SetString(char	*src)
{
	strcpy(str, src);
}

void	Printer::ShowString(void)
{
	cout << str << '\n';
}

int	main(void)
{
	Printer	pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}
