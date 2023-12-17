#include <iostream>
#include <string>
using namespace std;

struct Course
{
	string code;
	string name;
	string lecturer;
};

void show(Course c)
{
	cout << "Name: " << c.name << ", Lecturer: " << c.lecturer << endl;
}

int main() {
	string input;
	string code_number;
	string name;
	string lecturer;
	struct Course course_array[9999];// stupid method
  
	int num = 0;// set the index of the array by ourselves

	cin >> input;
  
	while (input != "exit") {
		if (input == "add") {
			cin >> code_number >> name >> lecturer;
			course_array[num] = { code_number,name,lecturer };
			num++;
		}
		if (input == "show") {
			string code;
			cin >> code;
			for (int i = 0; i < num; i++)
			{
				if (course_array[i].code == code)//find the corresponding code, then output it.
				{
					show(course_array[i]);
				}
			}
		}
		cin >> input;
	}
	return 0;
}
