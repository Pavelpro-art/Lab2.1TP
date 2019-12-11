#include "University.h"

int main() {
	setlocale(LC_ALL, "");

	University obj;
	Student *ptr;
	string surname;
	string initials;
	int button;
	bool flag = true;

	while (flag) {
		system("cls");
		cout << "1 - �������� ��������" << endl;
		cout << "2 - ������� ��������" << endl;
		cout << "3 - ����� ��������� �� �����" << endl;
		cout << "4 - ����� ��������� � ������� 2" << endl;
		cout << "5 - ���������� ��������� �� ����������� �������� �����" << endl;
		cout << "6 - ����� ��������" << endl;
		cout << "0 - �����" << endl;
		cin >> button;

		if (cin.fail()) {
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}

		switch (button) {
		case 1:
			cin >> obj;
			break;
		case 2:
			obj.delete_student();
			break;
		case 3:
			system("cls");
			cout << obj;
			system("pause");
			break;
		case 4:
			obj.show_student_two();
			break;
		case 5:
			system("cls");
			cout << "\t| ����������� ������ |" << endl;
			cout << "\t----------------------" << endl << endl << obj << endl << endl;
			obj.sort_student();
			cout << "\t| ��������������� ������ |" << endl;
			cout << "\t--------------------------" << endl << endl << obj << endl << endl;
			system("pause");
			break;
		case 6:
			if (obj.get_number_of_student() == 0) {
				system("cls");
				cout << "������ ��������� ����!" << endl << endl;
				system("pause");
			}
			else {
				cout << "������� �������: ";
				cin >> surname;
				cout << "������� ��������: ";
				cin >> initials;
				ptr = obj.find_student(surname, initials);
				if (ptr == nullptr) {
					cout << "������ �������� ���!" << endl << endl;
					system("pause");
				}
				else {
					ptr->change_data();
				}
			}
			break;
		case 0:
			flag = false;
			break;
		default:
			cout << "������� ������������ �������" << endl << endl;
			system("pause");
		}
	}

	return 0;
}