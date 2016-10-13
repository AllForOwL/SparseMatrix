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

	std::cout << "������ ������� ����� : ";
	std::cin >> _quentityRows;

	std::cout << "������ ������� ��������� : ";
	std::cin >> _quentityCols;
	
	SparseMatrix _sparseMatrix(_quentityRows, _quentityCols);
	_sparseMatrix.WriteMatrix();

	auto _beginTime = std::chrono::system_clock::now();

	_sparseMatrix.ReadMatrix();

	auto _endTime = std::chrono::system_clock::now();
	std::chrono::duration<double> _diffTime = _endTime - _beginTime;

	cout << "��� ������� : " << _diffTime.count() << endl;

	system("pause");
	return 0;
}