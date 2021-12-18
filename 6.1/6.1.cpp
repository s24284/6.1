// 6.1.cpp :
//

#include <iostream>

int main()
{
	int liczbauzytkownika;
	int ilejestliczb = 0;

	do {
		std::cout << "Podaj liczbe calkowita dodatnia, dla ktorej mam podac dalsze informacje:\n";
		std::cin >> liczbauzytkownika;
		if (liczbauzytkownika <= 0)
		{
			std::cout << "To nie jest liczba dodatnia! Wpisz to, o co prosze:\n";
		}
	} 	while (liczbauzytkownika <= 0);

	for (int i = 1; i < liczbauzytkownika; i++)
	{
		if (i % 5 == 0 && i % 3 != 0)
		{
			ilejestliczb++;
		}
	}

	std::cout << "Jest " << ilejestliczb << " liczb mniejszych od podanej przez ciebie: " << liczbauzytkownika << " podzielnych przez 5 i niepodzielnych przez 3.\n";
	return 0;
}
