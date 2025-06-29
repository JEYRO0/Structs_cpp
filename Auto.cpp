
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

struct Auto {
    int width;
    int clirent;
    int volume;
    int vecility;
    int weels;
	string color;
    string type;
};

void Add(Auto*& massive, int& size) {
    Auto* temp = new Auto[size + 1];
    for (int i = 0; i < size; i++) {
        temp[i] = massive[i];
    }
    delete[] massive;
    massive = temp;
    cout << "Введіть ширину авто: ";
    cin >> massive[size].width;
    cout << "Введіть кліренс авто: ";
    cin >> massive[size].clirent;
    cout << "Введіть об'єм двигуна: ";
    cin >> massive[size].volume;
    cout << "Введіть потужність двигуна: ";
    cin >> massive[size].vecility;
    cout << "Введіть діаметр коліс: ";
    cin >> massive[size].weels;
    cout << "Введіть колір авто: ";
    cin.ignore();
    getline(cin, massive[size].color);
    cout << "Введіть тип коробки передач авто: ";
    getline(cin, massive[size].type);
    size++;
    cout << endl;
}

void Show(Auto* massive, int& size) {
    if (size == 0) {
        cout << "Авто не додано.\n";
        return;
    }
    for (int i = 0; i < size; i++) {
        cout << "Авто " << i + 1 << ":\n";
        cout << "\tШирина: " << massive[i].width << "\n";
        cout << "\tКліренс: " << massive[i].clirent << "\n";
        cout << "\tОб'єм двигуна: " << massive[i].volume << "\n";
        cout << "\tПотужнісь двигуна: " << massive[i].vecility << "\n";
        cout << "\tДіаметр коліс: " << massive[i].weels << "\n";
        cout << "\tКолір: " << massive[i].color << "\n";
        cout << "\tТип коробки передач: " << massive[i].type << "\n";
    }
    cout << endl << endl;
}
void Change(Auto* massive, int& size) {
    if (size == 0) {
        cout << "Авто не додано.\n";
        return;
    }
    int b;
	cout << "Введіть номер авто для зміни: ";
    cin >> b;
    if (b < 1 || b > size) {
        cout << "Неправильний номер авто.\n";
        return;
    }
    cout << "Введіть нову ширину авто: ";
    cin >> massive[b-1].width;
    cout << "Введіть новий кліренс авто: ";
    cin >> massive[b-1].clirent;
    cout << "Введіть новий об'єм двигуну: ";
    cin >> massive[b-1].volume;
    cout << "Введіть нову потужність двигуну: ";
    cin >> massive[b-1].vecility;
    cout << "Введіть новий діаметр коліс: ";
    cin >> massive[b-1].weels;
    cout << "Введіть новий колір авто: ";
    cin.ignore();
    getline(cin, massive[b-1].color);
    cout << "Введіть новий тип коробки передач: ";
	getline(cin, massive[b-1].type);


}
void Find(Auto* massive, int& size) {
	cin.ignore();
    if (size == 0) {
        cout << "Авто не додано.\n";
        return;
    }
    string search;
    int a = 0;
    cout << "Введіть значення за яким ви хочете шукати:\n";
	cout << "\t1.Довжина\n";
	cout << "\t2.Кліренс\n";
	cout << "\t3.Об'єм\n";
	cout << "\t4.Потужність\n";
	cout << "\t5.діаметр коліс\n";
	cout << "\t6.Колір\n";
	cout << "\t7.Тип коробки передач\n";
    cin >> a;
    if (a == 1) {
        int b = 0;
		cout << "Введіть значення довжини: ";
        cin >> b;
        for (int i = 0; i < size; i++) {
            if (massive[i].width == b) {
                cout << "Авто " << i + 1 << " знайдено:\n";
                cout << "\tШирина: " << massive[i].width << "\n";
                cout << "\tКліренс: " << massive[i].clirent << "\n";
                cout << "\tОб'єм двигуна: " << massive[i].volume << "\n";
                cout << "\tПотужність двигуна : " << massive[i].vecility << "\n";
                cout << "\tДіаметр коліс: " << massive[i].weels << "\n";
                cout << "\tКолір: " << massive[i].color << "\n";
                cout << "\tТип коробки передач: " << massive[i].type << "\n";
            }
		}
    }
    else if (a == 2) {
		int b = 0;
        cout << "Введіть значення кліренсу: ";
        cin >> b;
        for (int i = 0; i < size; i++) {
            if (massive[i].clirent == b) {
                cout << "Авто " << i + 1 << " знайдено:\n";
                cout << "\tШирина: " << massive[i].width << "\n";
                cout << "\tКліренс: " << massive[i].clirent << "\n";
                cout << "\tОб'єм двигуна: " << massive[i].volume << "\n";
                cout << "\tПотужність двигуна: " << massive[i].vecility << "\n";
                cout << "\tДіаметр коліс: " << massive[i].weels << "\n";
                cout << "\tКолір: " << massive[i].color << "\n";
                cout << "\tТип коробки передач: " << massive[i].type << "\n";
            }
        }
    }
    else if (a == 3) {
        int b = 0;
		cout << "Введіть значення об'єму: ";
        cin >> b;
        for (int i = 0; i < size; i++) {
            if (massive[i].volume == b) {
                cout << "Авто " << i + 1 << " знайдено:\n";
                cout << "\tШирина: " << massive[i].width << "\n";
                cout << "\tКліренс: " << massive[i].clirent << "\n";
                cout << "\tОб'єм двигуна: " << massive[i].volume << "\n";
                cout << "\tПотужність двигуна: " << massive[i].vecility << "\n";
                cout << "\tДіаметр коліс: " << massive[i].weels << "\n";
                cout << "\tКолір: " << massive[i].color << "\n";
                cout << "\tТип коробки передач: " << massive[i].type << "\n";
            }
        }
    }
    else if (a == 4) {
		int b = 0;
        cout << "Введіть потужність двигуна:";
		cin >> b;
        for(int i = 0; i < size; i++) {
            if (massive[i].vecility == b) {
                cout << "Авто " << i + 1 << " знайдено:\n";
                cout << "\tШирина: " << massive[i].width << "\n";
                cout << "\tКліренс: " << massive[i].clirent << "\n";
                cout << "\tОб'єм двигуна: " << massive[i].volume << "\n";
                cout << "\tПотужність двигуна: " << massive[i].vecility << "\n";
                cout << "\tДіаметр коліс: " << massive[i].weels << "\n";
                cout << "\tКолір: " << massive[i].color << "\n";
                cout << "\tТип коробки передач: " << massive[i].type << "\n";
            }
		}
    }
    else if (a == 5) {
        int b = 0;
        cout << "Введіть діаметр коліс: ";
        for (int i = 0; i < size; i++) {
            if (massive[i].weels == b) {
                cout << "Авто " << i + 1 << " знайдено:\n";
                cout << "\tШирина: " << massive[i].width << "\n";
                cout << "\tКліренс: " << massive[i].clirent << "\n";
                cout << "\tОб'єм двигуна: " << massive[i].volume << "\n";
                cout << "\tПотужність двигуна: " << massive[i].vecility << "\n";
                cout << "\tДіаметр коліс: " << massive[i].weels << "\n";
                cout << "\tКолір: " << massive[i].color << "\n";
                cout << "\tТип коробки передач: " << massive[i].type << "\n";
            }
        }
    }
    else if (a == 6) {
        cout << "Введіть колір: ";
        cin.ignore();
        getline(cin, search);
        for (int i = 0; i < size; i++) {
            if (massive[i].color == search) {
                cout << "Авто " << i + 1 << " знайдено:\n";
                cout << "\tШирина: " << massive[i].width << "\n";
                cout << "\tКліренс: " << massive[i].clirent << "\n";
                cout << "\tОб'єм двигуна: " << massive[i].volume << "\n";
                cout << "\tПотуність двигуна: " << massive[i].vecility << "\n";
                cout << "\tДіаметр  коліс: " << massive[i].weels << "\n";
                cout << "\tКолір: " << massive[i].color << "\n";
                cout << "\tТип коробки передач: " << massive[i].type << "\n";
            }
        }
    }
    else if (a == 7) {
        cout << "Введіть тип коробки передач: ";
        cin.ignore();
        getline(cin, search);
        for (int i = 0; i < size; i++) {
            if (massive[i].type == search) {
                cout << "Авто " << i + 1 << " знайдено:\n";
                cout << "\tШирина: " << massive[i].width << "\n";
                cout << "\tКліренс: " << massive[i].clirent << "\n";
                cout << "\tОб'єм двигуна : " << massive[i].volume << "\n";
                cout << "\tПотужність двигуна: " << massive[i].vecility << "\n";
                cout << "\tДіаметр коліс: " << massive[i].weels << "\n";
                cout << "\tКолір: " << massive[i].color << "\n";
                cout << "\tТип коробки передач: " << massive[i].type << "\n";
            }
        }
    }


	

}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    Auto* massive = nullptr;
    int a = 0;
    int size = 0;
    while (a != 5) {
		cout << "Виберіть свою дію:\n";
		cout << "\t 1.Додати авто\n";
        cout << "\t 2.Показати значення авто\n";
		cout << "\t 3.Змінити значення авто\n";
		cout << "\t 4.Знайти авто за значенням\n";
		cout << "\t 5.Вийти\n";
        cin >> a;
        if (a == 1) {
            Add(massive, size);
        }
        if (a == 2) {
			Show(massive, size);
        }
        if (a == 3) {
            Change(massive, size);
        }
        if( a == 4) {
            Show(massive, size);
		}

    }
}