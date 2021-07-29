enum class Notation { scientific, logarithmic, engineering }

class Number
{
private:
	bool sign;
	Notation notation;
	double coefficient;
	int sigfig;

public:
	Number(Notation )
	Number(int number);
	Number(float number);
	Number(double number);

	Notation GetNotation();
	float GetCoefficient();
	int GetSigFig();

	int SetNotation(Notation n);
	int SetCoefficient();
	int SetSigFig();

	void Print();

	Number operator+ (const Number& number);
	Number operator- (const Number& number);
	Number operator* (const Number& number);
	Number operator/ (const Number& number);
	Number operator= (const Number& number);
	Number operator+=(const Number& number);
	Number operator-=(const Number& number);
	Number operator==(const Number& number);
	Number operator!=(const Number& number);
	Number operator< (const Number& number);
	Number operator<=(const Number& number);
	Number operator> (const Number& number);
	Number operator>=(const Number& number);
	Number operator++(const Number& number);
	Number operator--(const Number& number);

};
