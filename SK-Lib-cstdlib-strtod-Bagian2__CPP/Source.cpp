#include <cstdlib>
#include <iostream>
#include <conio.h>

int main() {
	char str[] = "123.45";
	char* end;
	double d = strtod(str, &end);

	std::cout << "The string '" << str << "' was converted to the double value " << d << '\n';
	
	_getch();
	return 0;
}