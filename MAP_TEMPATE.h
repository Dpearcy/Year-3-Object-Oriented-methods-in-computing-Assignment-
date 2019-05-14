#ifndef MAP_TEMPATE
#define MAP_TEMPATE
#include <iostream>
using std::cout;
using std::endl;
template < class T> 

class MAP
{
private:
	enum Datatype
	{
		strig
	};
	const Datatype M_Datatype = strig; ///// the data type used for the string class.
	int ZERO;
	int hightOFARRAY; ////This is the size of the array 
	//const T Startarry = 9;
	T * fist;//// This is used to sat up the array 
	int * arr;
	void Resize(T& data) //// this resizes the array every time new data is added.
	{
		if (sizecheck(data)) //// This checks the size of the array to make all the eleamts are full of data.
		{
			return;
		}
		else 
		{ //// incresses the size of the array 
			T* tmp = new T [hightOFARRAY];//// makes a new temp array to store the values  from the current arrary.
			for (int i = 0; i < hightOFARRAY; i++)//// goes though the array and copies the data from one array to the other.
			{
				tmp[i] = fist[i];
				//cout << tmp[i]; //// used for debuging 
			}

			//cout << endl;
			delete(fist);//// 
			hightOFARRAY++;
			fist = new T [hightOFARRAY];
			for (int i = 0; i < hightOFARRAY-1; i++)//// This agins the values back to the first array now 1 size bigger.
			{
				fist[i] = tmp[i];
				//cout << fist[i]; //// used for debuging 
			}
			fist[hightOFARRAY - 1] = data;
			delete[] tmp; //// This deletes the temp array to be next time called.
		}

	}

	bool sizecheck(T& data) //// This works out the size of the array and if the elemts have values in them  
	{
		for (int i = 0; i < hightOFARRAY; i++)
		{
			if (fist[i] == ZERO)
			{
				fist[i] = data;
				return true;
			}
		
		}
		return false;
	}
public:
	MAP()//// The constuoer for the map class sets the size and nulls all array values.
	{
		hightOFARRAY = 3;
		ZERO = NULL;
		fist = new T [hightOFARRAY];
		for (int i = 0; i < hightOFARRAY; i++)
		{
			fist[i] = ZERO;
		}
	}
	MAP(int datatype)
	{
		if (datatype == M_Datatype)
		{
			hightOFARRAY = 3;
			fist = new T[hightOFARRAY];
			ZERO = NULL;
			for (int i = 0; i < hightOFARRAY; i++)
			{
				fist[i] = ZERO;
			}
			M_DataTYpeStrig = true;
		}
	}
	T Get_value(int& number) { return fist[number]; }//// returns the value of the array.
	void Add_value(T& data) { Resize(data); } ////this adds the data to the value 
	void pop_value(T& data)//// this removes the value fro m a elemt in the array.
	{
		int number = 0;
		for (int i = 0; i < hightOFARRAY; i++)//// goes though the array and checks the given is in the array.
		{
			if (fist[i] == data)
			{
		    fist[i] = ZERO;
			number = i;
			break;
			}
		}
		hightOFARRAY--;
		for (int i = 0; i < hightOFARRAY; i++)//// This agins the values back to the first array now 1 size smaller
		{
			if (i >= number)
			{
				sizecheck(fist[i + 1]);
				fist[i + 1] = ZERO;
			}
			cout << fist[i] << "  "; //// used for debuging 
		}

	}

	void Ittaor(T number)//// a very borken inttioer as that i think may work.
	{
		T Data = fist[number];
		for (int i = 0; i < hightOFARRAY; i++)
		{
			if (Data == fist[i]);
			{
				return fist[i];
			}
		}
	}

};





#endif // !MAP_TEMPATE

