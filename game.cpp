#include <iostream> 


using namespace std;

bool gameOver;
const int width = 30;
const int height = 30;



void Setup()
{
}

class Figure
{
public:
	virtual void Draw() = 0;;

};

class GameFieldImpl : public Figure
{
	Figure *background;

public:
	GameFieldImpl()
	{
		Draw();
	}

	virtual void Draw()
	{

		system("cls");
		for (int i = 0; i < width; i++) {
			cout << "#";
		}
		cout << endl;

		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (j == 0 || j == width - 1)
					cout << "#";
				else {
					cout << " ";
				}
			}
			cout << endl;
		}

		for (int i = 0; i < width; i++) {
			cout << "#";
		}
	}
};


void Input()
{
}

void Logic()
{
}

int main()
{
	Setup();

	while (!gameOver)
	{
		GameFieldImpl a;
		//Draw(); 
		Input();
		Logic();
	}
	return 0;
}