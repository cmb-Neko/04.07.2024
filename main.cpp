#include <iostream>
using namespace std;


struct Rectangle
{
private:
	int _height;
	int _width;
	int _marginLeft;
	int _marginTop;

public:
	Rectangle()
	{
		_height = 1;
		_width = 1;
		_marginLeft = 0;
		_marginTop = 0;
	}
	Rectangle(int height) : Rectangle()
	{
		SetHeight(height, _height);
	}

	//Setters 
	void SetHeight(int height, int _height)
	{
		_height = height;
	}
};







int main()
{
	Rectangle Hector;
	Hector;
}