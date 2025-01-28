#include <iostream>
#include <string>

using namespace std;
int K, D;
// Функция для добавления цифры D справа от числа K
int addDigitRight(int K, int D) {
    return K * 10 + D;
}

// Функция для добавления цифры D слева от числа K
int addDigitLeft(int K, int D) {
    string K_str = to_string(K);
    string D_str = to_string(D);
    string result_str = D_str + K_str; // Добавляем D перед K
    return stoi(result_str); // Преобразуем строку обратно в число
}

int enterK(){
    cin >> K;
    return K;

}
int main() {
    int choice;

    do {
        cout << "\nМеню:\n";
        cout << "1. Введите натуральное число K: \n";
        cout << "2. Введите цифру D (в диапазоне 1-9): \n";
        cout << "3. Добавить цифру D справа от числа K\n";
        cout << "4. Добавить цифру D слева от числа K\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите натуральное число K: \n";
                enterK();
                break;
            case 2:
                cout << "Введите цифру D (в диапазоне 1-9): \n";
                cin >> D;
                break;
            case 3:
                cout << "Результат добавления D справа: " << addDigitRight(K, D) << endl;
                break;
            case 4:
                cout << "Результат добавления D слева: " << addDigitLeft(K, D) << endl;
                break;
            case 0:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор. Пожалуйста, попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}