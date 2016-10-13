#include <iostream>
#include "SparseMatrix.h"
#include <ctime>
#include <chrono>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	int _quentityRows = 0;
	int _quentityCols = 0;

	std::cout << "¬вед≥ть к≥льк≥сть р€дк≥в : ";
	std::cin >> _quentityRows;

	std::cout << "¬вед≥ть к≥льк≥сть стовпчик≥в : ";
	std::cin >> _quentityCols;
	
	SparseMatrix _sparseMatrix(_quentityRows, _quentityCols);
	_sparseMatrix.WriteMatrix();

	auto _beginTime = std::chrono::system_clock::now();

	_sparseMatrix.ReadMatrix();

	auto _endTime = std::chrono::system_clock::now();
	std::chrono::duration<double> _diffTime = _endTime - _beginTime;

	cout << "„ас читанн€ : " << _diffTime.count() << endl;

	system("pause");
	return 0;
}