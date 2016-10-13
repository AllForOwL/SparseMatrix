#include "SparseMatrix.h"


SparseMatrix::SparseMatrix(int i_quentityRows, int i_quentityCols) : m_quentityRows(i_quentityRows), m_quentityCols(i_quentityCols)
{

}

void SparseMatrix::WriteMatrix()
{
	int _chooise = 0;
	std::cout << "Заповнити автоматично (1) \n"
		"Заповнити вручну (2) \n : ";
	std::cin >> _chooise;

	if (_chooise == 1)
	{
		int _tempValue;

		for (int i = 0; i < m_quentityRows; i++)
		{
			for (int j = 0; j < m_quentityCols; j++)
			{
				_tempValue = rand() % 2 + 0;
				if (_tempValue)
				{
					m_vecElementSparseMatrix.push_back(ValueMatrix(i, j, _tempValue));
				}
				_tempValue = 0;
			}
		}
	}
	else
	{
		int _tempValue;

		for (int i = 0; i < m_quentityRows; i++)
		{
			for (int j = 0; j < m_quentityCols; j++)
			{
				std::cout << "Введіть елемент : ";
				std::cin >> _tempValue;
				if (_tempValue)
				{
					m_vecElementSparseMatrix.push_back(ValueMatrix(i, j, _tempValue));
				}
				_tempValue = 0;
			}
		}
	}
}

void SparseMatrix::ReadMatrix()
{
	int _indexElementInVector = 0;
	for (int i = 0; i < m_quentityRows; i++)
	{
		std::cout << std::endl;
		for (int j = 0; j < m_quentityCols; j++)
		{
			if (m_vecElementSparseMatrix.size() > _indexElementInVector && m_vecElementSparseMatrix[_indexElementInVector].m_x == i && m_vecElementSparseMatrix[_indexElementInVector].m_y == j)
			{
				std::cout << m_vecElementSparseMatrix[_indexElementInVector].m_value << " : ";
				++_indexElementInVector;
			}
			else
			{
				std::cout << 0 << " : " ;
			}
		}
	}
	std::cout << endl;
}

SparseMatrix::~SparseMatrix()
{

}
