#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>




using namespace std;



#define PI 3.1415

void trasher(vector<vector<bool> >& ddr, uint8_t sizeReg)// передаём адрес объекта памяти
{
	vector <bool> reg; // ячейка памяти
	reg.resize(sizeReg); // размер ячейки

	for (auto sizeDdr = 0; sizeDdr < 1024; sizeDdr++)
	{
		for (auto a = 0; a < reg.size(); a++)
		{
			reg[a] = (rand() % 2);
		}
		ddr.push_back(reg);
		cout << sizeDdr << endl;
	}

	cout << "Ram trashed";
}


int main()
{	
	uint32_t cmd = 0;

	vector <vector <bool> > ddr;

	vector <int> ssd;
	setlocale(1, LC_ALL);
	srand(time(NULL));
	//----------------------------------------------------------------------------------//
	//							Заполнение мусором памяти								//
	//----------------------------------------------------------------------------------//
	trasher(ddr, 8); // Регистровая память заполняется ячейками по 8 бит. Всего ячеек 1024
	cout << ddr[500][0];
	cout << ddr[500][1];
	cout << ddr[500][2];
	cout << ddr[500][3];
	//----------------------------------------------------------------------------------//
	//			  Архитектура команд хранится в области памяти выделяемой для cmd		//
	//									Сложение 0b0001									//
	//									Вычитание 0b0010								//
	//									Умножение 0b0011								//
	//									 Деление 0b0100									//
	//----------------------------------------------------------------------------------//

	while (1)
	{
		
	}

	return(0); // Или exit
	system("pause");
}

