// lab.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int stp2(int n) {
    return 1 << n;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n,k=0;
    cout << "Введите степень:";
    cin >> n;
    if (0 < n && n > 64) {
        cout << "N должно быть в интервале от 0 до 64!" << endl;
    }
    else {
        k = stp2(n);
        cout << k << "(10)" << oct << k << "(8)" << hex << k << "(16)" << endl;
    }
    
    return 0;
  
}
///проект проект проект для гит
//правка
