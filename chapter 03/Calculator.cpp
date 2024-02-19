#include <iostream>
using namespace std;

class Calculator
{
private:
	int addcnt;
	int mincnt;
	int divcnt;
	int mulcnt;
public:
	void	init(void);
	double	Add(double a, double b);
	double	Min(double a, double b);
	double	Div(double a, double b);
	double	Mul(double a, double b);
	void	ShowOpCount(void);
};

void	Calculator::init()
{
	addcnt = 0;
	mincnt = 0;
	divcnt = 0;
	mulcnt = 0;
}

double	Calculator::Add(double a, double b)
{
	addcnt += 1;
	return a + b;
}

double	Calculator::Min(double a, double b)
{
	mincnt += 1;
	return a - b;
}

double	Calculator::Div(double a, double b)
{
	divcnt += 1;
	return a / b;
}

double	Calculator::Mul(double a, double b)
{
	mulcnt += 1;
	return a * b;
}

void	Calculator::ShowOpCount()
{
	cout << "덧셈: " << addcnt << " ";
	cout << "뺄셈: " << mincnt << " ";
	cout << "곱셈: " << mulcnt << " ";
	cout << "나눗셈: " << divcnt << "\n";
}

int	main(void)
{
	Calculator	cal;
	cal.init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << '\n';
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << '\n';
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << '\n';
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << '\n';
	cal.ShowOpCount();
	return 0;
}
