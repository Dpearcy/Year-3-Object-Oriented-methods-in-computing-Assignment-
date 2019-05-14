// Assginmet1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MAP_TEMPATE.h"
#include <iomanip>
#include <string>
using std::string;
class CVactor3
{
public: int x, y, z;
	CVactor3() { x = 0, y = 0, z = 0; }
	CVactor3(int X,int Y,int Z){ x = X, y = Y, z = Z; }
	CVactor3 operator ++ () { x++, y++, z++; }
	std::ostream operator <<  (CVactor3& v) {cout << v.x, v.y, v.z; }
	std::ostream operator <<  (CVactor3 v []) { cout << v[0].x, v[0].y, v[0].z; }
	CVactor3 operator == (int) { x = NULL, y = NULL, z = NULL; }
	int operator == (CVactor3& V) { return V.x; }
};

int main()
{
	cout << "TEST CASES USED FOR TEMPLATE CLASS " << endl;
	cout << "Enter the size you like  ";
	int SIZE;
	std::cin >> SIZE;
	int number = SIZE;
	int getvalue = 0;
	MAP<int> * M_int = new MAP<int>();
	cout << "int tamplate   adding " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		M_int->Add_value(number);
		number--;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << M_int->Get_value(getvalue) << "  ";
		getvalue++;
	}
	std::cin >> getvalue;
	cout << M_int->Get_value(getvalue);
	cout << endl;
	int KIllvalue = 2;
	cout << "int tamplate   removing " << endl;
	M_int->pop_value(KIllvalue);
	KIllvalue = 5;
	cout << endl;
	M_int->pop_value(KIllvalue);
	KIllvalue = 8;
	cout << endl;
	M_int->pop_value(KIllvalue);
	delete(M_int);
	cout << endl;
	cout << endl;




	double Double = 1.0;
	int getvalue2 = 0;
	MAP<double> * M_double = new MAP<double>();
	cout << "Double tamplate   adding " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		M_double->Add_value(Double);
		Double += 2;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << std::fixed << std::setprecision(2) << M_double->Get_value(getvalue2) << "  ";
		getvalue2++;
	}
	std::cin >> getvalue2;
	cout << M_double->Get_value(getvalue2);
	cout << endl;
	double KIllvalue2 = 2.0;
	cout << "Double tamplate   removing " << endl;
	M_double->pop_value(KIllvalue2);
	KIllvalue2 = 5.0;
	cout << endl;
	M_double->pop_value(KIllvalue2);
	KIllvalue2 = 8.0;
	cout << endl;
	M_double->pop_value(KIllvalue2);
	delete(M_double);
	cout << endl;
	cout << endl;
	
	float Float = 1.0f;
	int getvalue3 = 0;
	MAP<float> * M_float = new MAP<float>();
	cout << "float tamplate   adding " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		 M_float->Add_value( Float);
		 Float += 4;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout <<  std::setprecision(4) <<  M_float->Get_value(getvalue3) << "  ";
		getvalue3++;

	}
	std::cin >> getvalue3;
	cout << M_float->Get_value(getvalue3);
	cout << endl;
	float KIllvalue3 = 2.0f;
	cout << "float tamplate   removing " << endl;
	 M_float->pop_value(KIllvalue3);
	KIllvalue3 = 5.0f;
	cout << endl;
	 M_float->pop_value(KIllvalue3);
	KIllvalue3 = 8.0f;
	cout << endl;
	 M_float->pop_value(KIllvalue3);
	delete(M_float);

	cout << endl;
	cout << endl;

	char latter = 'a';
	int getvalue4 = 0;
	MAP<char> * M_Char = new MAP<char>();
	cout << "char tamplate   adding " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		 M_Char->Add_value( latter);
		 latter += 2;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout <<  M_Char->Get_value(getvalue4) << "  ";
		getvalue4++;

	}
	std::cin >> getvalue4;
	cout << M_Char->Get_value(getvalue4);
	cout << endl;
	char KIllvalue4 = 'b';
	cout << "float tamplate   removing " << endl;
	 M_Char->pop_value(KIllvalue4);
	KIllvalue4 = 'e';
	cout << endl;
	 M_Char->pop_value(KIllvalue4);
	KIllvalue4 = 'h';
	cout << endl;
	 M_Char->pop_value(KIllvalue4);
	delete(M_Char);

	cout << endl;
	cout << endl;

	string word = "dog";
	int getvalue5 = 0;
	//MAP<string> * M_String = new MAP<string>(0);
	cout << "string tamplate   adding " << endl;
	for (int i = 0; i < SIZE; i++)
	{
	//	M_String->Add_value(word);
	}
   return 0;

}
