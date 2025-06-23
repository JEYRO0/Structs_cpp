
#include <iostream>
#include <string>
using namespace std;

struct Man {
    string name;
    string lastname;
    int age;
    int arr[3];

};

void Add(Man*& massive, int& size) {
    Man* temp = new Man[size + 1];

    for (int i = 0; i < size; i++) {
        temp[i] = massive[i];
    }
    cout << "Введіть ім'я: ";
    cin >> temp[size].name;
    cout << "Введіть прізвище: ";
    cin >> temp[size].lastname;
    cout << "Введіть вік: ";
	cin >> temp[size].age;
	cout << "Введіть дату народження: \n";
    cout << "\t Рік(повний):";
    cin >> temp[size].arr[0];
    cout << "\t Місяць(номер):";
    cin >> temp[size].arr[1];
    cout << "\t День:";
    cin >> temp[size].arr[2];
    

    delete[] massive;
    massive = temp;
    size++;
}

void Delete(Man*& massive, int& size) {
    int n = 0;
    Man* temp = new Man[size - 1];
    cout << "Введіть номер студента для видалення(1 -" << size << "): ";
    cin >> n;
    for (int i = 0; i < size; i++) {
        if (i == n - 1) {
            continue;
        }
        temp[i] = massive[i];
    }
    delete[] massive;
    massive = temp;
    size--;
}

void Show(Man*& massive, int size) {
    for (int i = 0; i < size; i++) {
        cout << massive[i].name << endl;
        cout << massive[i].lastname << endl;
        cout << massive[i].age << endl;
        for (int j = 0; j < 3; j++) {
            cout << massive[i].arr[j] <<" ";
        }
    }
	cout << endl;
}

void Birthday(Man*& massive, int size) {
    int n = 0;
    cout << "Введіть місяць іменинників:";
    cin >> n;
    cout << "Список іменинників:" << endl;
    for (int i = 0; i < size; i++) {
        if (massive[i].arr[1] == n) {
            cout << "\t" << massive[i].name << " " << massive[i].lastname << endl;
        }
    }
    cout << endl;
}

void Find(Man*& massive, int size) {
    int c = 0;
    string name, lastname;
    cout << "Введіть ім'я: ";
    cin >> name;
    cout << "Введіть прізвище: ";
    cin >> lastname;
    for (int i = 0; i < size; i++) {
        if (massive[i].name == name && massive[i].lastname == lastname) {
            c = 1;
            cout << "Знайдено особу:\n";
            cout << "\tІм'я: " << massive[i].name << endl;
            cout << "\tПрізвище: " << massive[i].lastname << endl;
            cout << "\tВік: " << massive[i].age << endl;
            cout << "\tДата народження: " << massive[i].arr[0] << " " << massive[i].arr[1] << "-" << massive[i].arr[2] << endl;
        }
    }
    if (c == 0) {
        cout << "Особу не знайдено." << endl;
    }
    
}

void Correct(Man*& massive, int size) {
    int n = 0;
    cout << "Введіть номер особи для редагування(1 -" << size << "): ";
    cin >> n;
    cout << "Введіть нове ім'я: ";
    cin >> massive[n-1].name;
    cout << "Введіть нове прізвище: ";
    cin >> massive[n-1].lastname;
    cout << "Введіть новий вік: ";
    cin >> massive[n-1].age;
    cout << "Введіть нову дату народження: \n";
    cout << "\t Рік(повний):";
    cin >> massive[n-1].arr[0];
    cout << "\t Місяць(номер):";
    cin >> massive[n-1].arr[1];
    cout << "\t День:";
    cin >> massive[n-1].arr[2];
}


int main()
{
    Man* massive = nullptr;
    int a = 0;
    int size = 0;
    while (a != 7) {
        cout << "Введіть свій вибір:\n";
        cout << "\t Добавити особу - 1:\n";
        cout << "\t Видалити особу - 2\n";
        cout << "\t Вивести всіх осіб - 3\n";
        cout << "\t Вивести іменинників місяцю - 4\n";
        cout << "\t Знайти особу за ім'ям і прізвищем - 5\n";
        cout << "\t Редагувати інформацію - 6\n";
        cout << "\t Вихід - 7\n";
        cin >> a;

        if (a == 1) {
            Add(massive, size);
        }
        else if (a == 2) {
            Delete(massive, size);
        }
        else if (a == 3) {
            Show(massive, size);
        }
        else if (a == 4) {
            Birthday(massive, size);
        }
        else if (a == 5) {
			Find(massive, size);
        }
        else if (a == 6) {
			Correct(massive, size);
        }

    }
    
}
