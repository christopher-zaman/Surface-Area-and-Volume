#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	while (true)
	{
		//Menu
		cout << "Surface Area and Volume!" << endl;
		cout << "What formula would you like to calculate?" << endl;
		cout << "1- Volume of a Sphere" << endl;
		cout << "2- Volume of a Rectangular Solid" << endl;
		cout << "3- Volume of a Right Cylinder" << endl;
		cout << "4- Surface Area of a Sphere" << endl;
		cout << "5- Surface Area of a Cube" << endl;
		cout << "6- Surface Area of a Rectangular Solid" << endl;
		cout << "0- exit" << endl;

		int choice;
		cin >> choice;

		//Volume of a Sphere
		if (choice == 1)
		{
			cout << "Enter the Radius of the sphere:" << endl;
			int radius;
			cin >> radius;
			
			double power = pow(radius, 3);

			double volume = (1.333 * 3.14 * power);
			cout << "The volume is: " << volume << endl;
			cout << endl;
		}

		//Volume of a Rectangular Solid
		else if (choice == 2)
		{
			cout << "Enter Length:" << endl;
			int length;
			cin >> length;

			cout << "Enter Width:" << endl;
			int width;
			cin >> width;

			cout << "Enter Height:" << endl;
			int height;
			cin >> height;

			double rectangleVolume = length * width * height;
			cout << "The Volume of the rectangle is: " << rectangleVolume << endl;
			cout << endl;

		}

		//Volume of a Right Cylinder
		else if (choice == 3)
		{
			cout << "Enter Radius:" << endl;
			int radius;
			cin >> radius;

			cout << "Enter Height:" << endl;
			int height;
			cin >> height;

			double power = pow(radius, 2);
			double pi = 3.14;
			double volume = pi * power * height;		

			cout << "The volume is " << volume << endl;
		}

		//Surface Area of a Sphere
		else if (choice == 4)
		{	
			cout << "Enter Radius:" << endl;
			int radius;
			cin >> radius;
			double power = pow(radius, 2);
			double pi = 3.14;
			double area = 4 * pi * power;

			cout << "The Area is:" << area << endl;

		}

		//Surface Area of a Cube
		else if (choice == 5)
		{
			cout << "Enter s(length of one side of a cube):" << endl;
			int s;
			cin >> s;
			double power = pow(s, 2);
			double area = 6 * power;
			cout << "The Area is:" << area << endl;

		}
		//Surface Area of a Rectangular Solid
		else if (choice == 6)
		{
			cout << "Enter Length:" << endl;
			int length;
			cin >> length;

			cout << "Enter Width:" << endl;
			int width;
			cin >> width;

			cout << "Enter Height:" << endl;
			int height;
			cin >> height;

			double area = 2 * (width * length + height * length + height * width);
			cout << "The Area is:" << area << endl;
		}

		//Exit
		else if (choice == 0)
		{
			cout << "Thank you for using financial calculator v3k! " << endl;
			break;
		}

	}

	system("pause");
	return 0;
}