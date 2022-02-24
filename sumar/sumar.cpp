#include <iostream>
using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fill(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

int summ(int a, int arr[], int size2) {
    int res = 0;
    for (int i = a; i < size2; i++) {
        res += arr[i];
    }
    return res;
}

int position(int arr[], int size) {
    int res = arr[0], sumar, sumar2;

    for (int i = 0; i < size - 11; i++) {
        sumar = summ(i, arr, i + 10);
        //cout << i << " " << sumar << endl;   // вывод сумм для проверки
        sumar2 = summ(i + 1, arr, i + 11);
        if (sumar > sumar2) {
            res = i;
        }
        
    }
    return res;
}

int main()
{
    
    /* Напишите рекурсивную функцию, которая принимает 
одномерный массив из 100 целых чисел, заполненных 
случайным образом, и находит позицию, с которой 
начинается последовательность из  10 чисел, сумма 
которых минимальна*/

    const int size = 100;
    int arr[size];

    fill(arr, size);

    cout << position(arr, size) << endl;
    //print(arr, size);  // вывод массива

}
