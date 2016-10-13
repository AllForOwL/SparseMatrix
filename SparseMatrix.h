#pragma once

#include <iostream>
#include <vector>

using namespace std;

struct ValueMatrix
{
	int m_x;
	int m_y;
	int m_value;

	ValueMatrix(int i_x, int i_y, int i_value) : m_x(i_x), m_y(i_y), m_value(i_value)
	{

	}
};

class SparseMatrix
{
public:
	SparseMatrix(int i_quentityRows, int i_quentityCols);
	~SparseMatrix();

	void WriteMatrix();
	void ReadMatrix();

private:
	int m_quentityRows;
	int m_quentityCols;
	std::vector<ValueMatrix> m_vecElementSparseMatrix;
};

