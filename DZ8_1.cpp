
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

struct Student {
    string firstName;
    string group;
    int marks[5];
};

void Add(Student*& massive, int& size) {
    Student* temp = new Student[size + 1];

    for (int i = 0; i < size; i++) {
        temp[i] = massive[i];
    }
    cout << "Введіть прізвище: ";
    cin >> temp[size].firstName;
    cout << "Введіть групу: ";
    cin >> temp[size].group;
    cout << "Введіть 5 оцінок: ";
    for (int i = 0; i < 5; i++) {
        cin >> temp[size].marks[i];
    }

    delete[] massive;
    massive = temp;
    size++;
}


void Vidminnuk(Student* massive, int size) {
    int score = 0;
    cout << "Відмінники:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 5; j++) {
            if (massive[i].marks[j] >= 10) {
                score++;
            }
        }
        if (score >= 4) {
			cout << "Студент: " << massive[i].firstName << ", Група: " << massive[i].group << ", Оцінки: ";
            for(int g = 0; g < 5; g++) {
                cout << massive[i].marks[g] << " ";
			}
        }
        score = 0;
    }
    cout << endl<<endl;
}

void Dviyechnuk(Student* massive, int size) {
    int score = 0;
    cout << "Двієчники:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 5; j++) {
            if (massive[i].marks[j] <= 3) {
                score++;
            }
        }
        if (score >= 3) {
            cout << "Студент: " << massive[i].firstName << ", Група: " << massive[i].group << ", Оцінки: ";
            for (int g = 0; g < 5; g++) {
                cout << massive[i].marks[g] << " ";
            }
        }
        score = 0;
    }
    cout << endl<<endl;
}


void Delete(Student*& massive, int& size) {
    int n = 0;
    Student* temp = new Student[size - 1];
	cout << "Введіть номер студента для видалення(1 -"<<size<<"): ";
    cin>> n;
    for(int i = 0;i < size; i++) {
        if (i == n - 1) {
            continue;
        }
        temp[i] = massive[i];
	}
    delete[] massive;
    massive = temp;
    size--;
 

}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

    int size = 0;
    int n = 0;
    Student* massive = nullptr;

    while (n != 5) {
		cout << "Введіть свій вибір:\n";
		cout << "\t Добавити студента - 1\n";
		cout << "\t Видалити студента - 2\n";
		cout << "\t Вивести всіх відмінників - 3\n";
		cout << "\t Вивести всіх двієчників - 4\n";
		cout << "\t Вихід - 5\n";
		cout << "Ваш вибір: ";
		cin >> n;

		if (n == 1) {
			Add(massive, size);
		}
        if (n == 2) {
			Delete(massive, size);
        }
        if (n == 3) {
			Vidminnuk(massive, size);
        }
        if (n == 4) {
			Dviyechnuk(massive, size);
        }
    }
    delete[] massive;

    
	return 0;

    

  
}
