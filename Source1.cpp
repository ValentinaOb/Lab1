// Lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <fstream>  // - потік введення/виведення
#include <vector>  // - для динамічного масиву, який самотужки умправляє виділеною для себе пам'яттю
#include <string>
#include <ctime>


typedef struct {
    float x, y;

} Coord;

Coord LST[200];


using namespace std;
void A();
void B();
void C();
void A1();
void A2();
void A3();
void A4();
void B1();
void B2();
void B3();
void B4();
void C1();
void C2();
void C3();
void C4();



int main()
{
    cout << "   Menu \n";
    cout << "1. First ex. \n";
    cout << "2. Second ex. \n";
    cout << "3. Third ex. \n";
e:
    int r;
    cin >> r;

    switch (r) {
    case 1: A(); break;
    case 2: B(); break;
    case 3: C(); break;
    default: cout << "Error\n"; goto e;
    }
}


void A()
{
    cout << "   Menu 1 \n";
    cout << "1. 1 ex. \n";
    cout << "2. 2 ex. \n";
    cout << "3. 3 ex. \n";
    cout << "4. 4 ex. \n";

    int r1 = 0;

e:
    cin >> r1;

    switch (r1) {
    case 1: cout << endl; A1(); break;
    case 2: cout << endl; A2(); break;
    case 3: cout << endl; A3(); break;
    case 4: cout << endl; A4(); break;
    default: cout << "Error\n"; goto e;
    }
}

void B() {
    cout << "   Menu 2 \n";
    cout << "1. 1 ex. \n";
    cout << "2. 2 ex. \n";
    cout << "3. 3 ex. \n";
    cout << "4. 4 ex. \n";

    int r1 = 0;

e:
    cin >> r1;

    switch (r1) {
    case 1: cout << endl; B1(); break;
    case 2: cout << endl; B2(); break;
    case 3: cout << endl; B3(); break;
    case 4: cout << endl; B4(); break;
    default: cout << "Error\n"; goto e;
    }
}

void C() {
    cout << "   Menu 3 \n";
    cout << "1. 1 ex. \n";
    cout << "2. 2 ex. \n";
    cout << "3. 3 ex. \n";
    cout << "4. 4 ex. \n";

    int r1 = 0;

e:
    cin >> r1;

    switch (r1) {
    case 1: cout << endl; C1(); break;
    case 2: cout << endl; C2(); break;
    case 3: cout << endl; C3(); break;
    case 4: cout << endl; C4(); break;
    default: cout << "Error\n"; goto e;
    }
}

// A

void A1() {

    ofstream out("Документи : \\ 1.3.1.А.txt", ios::out);   // потік виведення (запис у файл)
    out.open("1.3.1.А.txt");   // потік виведення
    // перевірка, чи файл відкрито
    if (!out.is_open())
    {
        cout << "Cannot open the file to output_1 \n";
        return;
    }

    ofstream out1("Документи : \\ 1.А.txt", ios::out);          // потік введення/виведення
    out1.open("1.А.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out1.is_open())
    {
        cout << "Cannot open the file to output_2 \n";
        return;
    }

    ofstream out11("Документи : \\ 1.А.1.txt", ios::out);          // потік введення/виведення
    out11.open("1.А.1.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out11.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }

    ofstream out111("Документи : \\ 1.А.12.txt", ios::out);          // потік введення/виведення
    out111.open("1.А.12.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out111.is_open())
    {
        cout << "Cannot open the file to output_4 \n";
        return;
    }


    int i, N;
    int A[30];

    cout << "N: ";
e:
    cin >> N;
    if (N <= 0) goto e;
    cout << "A: ";

    for (i = 0; i < N; i++) {
        cin >> A[i];
    }


    if (out11.is_open()) {
        out11 << N << " "; // записати у файл N для завдвння 3.3 (main2)
    }


    if (out1.is_open()) {
        for (i = 0; i < N; i++) {
            out1 << A[i] << " "; // записати у файл масив А для завдвння 3.3 (main2)
        }
    }


    printf("You have entered : ");
    for (i = 0; i < N / 2; i++) printf("%d ", (A[i] * 2));
    for (i = N / 2; i < N; i++) printf("%d ", (A[i] * 3));
    cout << "\n";


    if (out.is_open()) {
        out << "A: "; // записати у файл масив А
        for (i = 0; i < N; i++) {
            for (i = 0; i < N / 2; i++) out << (A[i] * 2) << " ";
            for (i = N / 2; i < N; i++) out << (A[i] * 3) << " ";
        }
        out << "\nN: " << N;  // записати у файл N
    }


    if (out111.is_open()) { // записати у файл масив А для завдання 3.4
        for (i = 0; i < N; i++) {
            for (i = 0; i < N / 2; i++) out111 << (A[i] * 2) << " ";
            for (i = N / 2; i < N; i++) out111 << (A[i] * 3) << " ";
        }
    }





    out.close(); // закриваєм файли
    out1.close();
    out11.close();
    out111.close();

    return;
}

void A2() {

    ofstream out2("Документи : \\ 1.3.2.А.bin", ios::binary | ios::out);          // потік введення/виведення
    out2.open("1.3.2.А.bin"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out2.is_open())
    {
        cout << "Cannot open the file to output. \n";
        return;
    }

    srand(time(NULL));

    int i, N;
    int A[30];
    cout << "N: ";
e:
    cin >> N;
    if (N <= 0) goto e;
    cout << "A: ";

    for (i = 0; i < N; i++) {
        A[i] = rand() % 201 - 100;  //Створюєм матрицю з рандомних чисел від -100 до 100
    }

    for (i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    printf("You have entered : ");
    for (i = 0; i < N / 2; i++) { printf("%d ", (A[i] * 2)); }
    for (i = N / 2; i < N; i++) { printf("%d ", (A[i] * 3)); }

    cout << endl;

    if (out2.is_open()) {
        out2 << "A: "; // записати у файл масив А
        for (i = 0; i < N; i++) {
            for (i = 0; i < N / 2; i++) out2 << (A[i] * 2) << " ";
            for (i = N / 2; i < N; i++) out2 << (A[i] * 3) << " ";
        }
        out2 << "\nN: " << N;// записати у файл N
    }


    out2.close(); // закрити файл

    return;

}

void A3() {

    ofstream out3("Документи : \\ 1.3.3.А.txt", ios::out);          // потік введення/виведення
    out3.open("1.3.3.А.txt"); // окрываем файл для виведення
    // перевірка, чи файл відкрито
    if (!out3.is_open())
    {
        cout << "Cannot open the file_1 to output. \n";
        return;
    }

    ifstream in("Документи : \\ 1.А.txt", ios::in);          // потік введення/виведення
    in.open("1.А.txt"); // відкр. файл-джерело
    // перевірка, чи файл відкрито
    if (!in.is_open())
    {
        std::cout << "Cannot open the file_2 to output. \n";
        return;
    }

    ifstream in1("Документи : \\ 1.А.1.txt", ios::in);          // потік введення/виведення
    in1.open("1.А.1.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in1.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }


    int i, N;
    int A[30];


    cout << "N: ";

    if (in1.is_open()) {
        in1 >> N;
        cout << N;
    }

    cout << endl << "A: ";
    while (!in.eof()) {
        for (i = 0; i < N; i++) {
            in >> A[i]; // зчитати з in = > A[i]
        }
    }

    for (i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    cout << endl;


    printf("You have entered : ");
    for (i = 0; i < N / 2; i++) printf("%d ", (A[i] * 2));
    for (i = N / 2; i < N; i++) printf("%d ", (A[i] * 3));
    cout << "\n";

    if (out3.is_open()) {
        out3 << "A: "; // записати у файл масив А
        for (i = 0; i < N; i++) {
            for (i = 0; i < N / 2; i++) out3 << (A[i] * 2) << " ";
            for (i = N / 2; i < N; i++) out3 << (A[i] * 3) << " ";
        }
        out3 << "\nN: " << N;// записати у файл N
    }

    out3.close(); // закрити обидва файли
    in.close();
    in1.close();

    return;
}

void A4() {

    ifstream in2("Документи : \\ 1.А.12.txt", ios::in);          // відкр. файл-джерело
    in2.open("1.А.12.txt"); // відкр. файл-джерело
    // перевірка, чи файл відкрито
    if (!in2.is_open())
    {
        cout << "Cannot open the file_1 to output \n";
        return;
    }

    ifstream in3("Документи : \\ 1.А.1.txt", ios::in);          // відкр. файл-джерело
    in3.open("1.А.1.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in3.is_open())
    {
        cout << "Cannot open the file to output_2 \n";
        return;
    }


    int i, N;
    int A[30];

    std::vector<int> V;     // пустой вектор


    if (in3.is_open()) {
        in3 >> N;
        V.push_back(N);
    }



    while (!in2.eof()) {
        for (i = 0; i < N; i++) {
            in2 >> A[i]; // зчитати з in = > A[i]
        }
    }

    for (i = 0; i < N; i++) {
        V.push_back(A[i]);
    }



    printf("You have entered : \n");
    cout << "N: ";


    for (i = 0; i < V.size() - N; i++) {
        cout << V[0] << " ";
    }


    cout << endl;
    cout << "A: ";
    if (in3.is_open()) {
        for (i = 0; i < N; i++) {
            for (i = 1; i < V.size(); i++) {
                cout << V[i] << " ";
            }
        }
    }
    cout << endl;


    in2.close(); // закрити обидва файли
    in3.close();

    return;
}

// B

void B1() {

    ofstream out("Документи : \\ 2.3.1.А.txt", ios::out);   // потік виведення (запис у файл)
    out.open("2.3.1.А.txt");   // відкриваємо файл
    // перевірка, чи файл відкрито
    if (!out.is_open())
    {
        cout << "Cannot open the file to output_1 \n";
        return;
    }

    ofstream out1("Документи : \\ 2.А.txt", ios::out);          // для 3.3 (А)
    out1.open("2.А.txt");
    if (!out1.is_open())
    {
        cout << "Cannot open the file to output_2 \n";
        return;
    }

    ofstream out11("Документи : \\ 2.А.1.txt", ios::out);          // для 3.3 (N)
    out11.open("2.А.1.txt");
    if (!out11.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }

    ofstream out111("Документи : \\ 2.А.121.txt", ios::in);          // для 3.3 (P)
    out111.open("2.А.121.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out111.is_open())
    {
        cout << "Cannot open the file to output_2 \n";
        return;
    }



    int N, i, min = 100, p = -1, i1 = -1;
    int* k;
    k = new int[30];
    cout << "Input N : ";
e:
    cin >> N;
    if (N <= 0) goto e;
    cout << "Input A : ";
    for (i = 0; i < N; i++) {
        cin >> k[i];
    }

    // Знаходимо 1 від'ємний елемент
    for (i = 0; i < N; i++) {
        if (k[i] < 0) { i1 = i; break; }
    }

    //Якщо немає щодного від'ємного елемета, припиняємо роботу
    if (i1 == -1) {
        cout << "Condition isn't satisfied!!! Try again) \n";
        return;
    }

    for (i = i1; i < N; i++) {
        if ((k[i] >= 0) && (k[i] % 2 == 0)) {
            if (min > k[i]) {
                min = k[i]; p = i; // для знаходження елемента, який відповідає нашим вимогам
            }
        }
    }

    for (i = i1; i < N; i++) {
        if ((k[i] >= 0) && (k[i] % 2 == 0)) {
            for (i = p++; i < N; i++) {
                if (k[i] == min) p = i; // для знаходження останнього елемента, який відповідає нашим вимогам
            }
        }
    }

    cout << "The position of the negative element (I1): " << i1 << endl;
    if (p != -1) {
        cout << "P: " << p << endl;
    }
    else {
        cout << "Condition isn't satisfied!!! Try again) \n";
    }


    if (out.is_open()) {
        out << "The position: " << p << endl;
        out << "A: ";
        for (i = 0; i < N; i++) {
            out << k[i] << " ";
        }
        out << "\nN: " << N << endl;
    }

    if (out1.is_open()) {
        for (i = 0; i < N; i++) {
            out1 << k[i] << " ";
        }
    }

    if (out11.is_open()) {
        out11 << N << endl;
    }

    if (out111.is_open()) {
        out111 << p << endl;
    }



    delete[] k;

    return;
}

void B2() {

    ofstream out2("Документи : \\ 2.3.2.А.bin", ios::binary | ios::out);          // потік введення/виведення
    out2.open("2.3.2.А.bin"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out2.is_open())
    {
        cout << "Cannot open the file to output. \n";
        return;
    }

    srand(time(NULL));

    int N, i, min = 100, p = -1, i1 = -1;
    int* k;
    k = new int[30];
    cout << "Input N : ";
e:
    cin >> N;
    if (N <= 0) goto e;
    cout << "A: ";

    for (i = 0; i < N; i++) {
        k[i] = rand() % 201 - 100;  //Створюєм матрицю з рандомних чисел від -100 до 100
    }

    for (i = 0; i < N; i++) {
        cout << k[i] << " ";
    }
    cout << endl;

    // Знаходимо 1 від'ємний елемент
    for (i = 0; i < N; i++) {
        if (k[i] < 0) { i1 = i; break; }
    }

    //Якщо немає щодного від'ємного елемета, припиняємо роботу
    if (i1 == -1) {
        cout << "Condition isn't satisfied!!! Try again) \n";
        return;
    }

    for (i = i1; i < N; i++) {
        if ((k[i] >= 0) && (k[i] % 2 == 0)) {
            if (min > k[i]) {
                min = k[i]; p = i; // для знаходження елемента, який відповідає нашим вимогам
            }
        }
    }

    for (i = i1; i < N; i++) {
        if ((k[i] >= 0) && (k[i] % 2 == 0)) {
            for (i = p++; i < N; i++) {
                if (k[i] == min) p = i; // для знаходження останнього елемента, який відповідає нашим вимогам
            }
        }
    }

    cout << "The position of the negative element (I1): " << i1 << endl;
    if (p != -1) {
        cout << "P: " << p << endl;
    }
    else {
        cout << "Condition isn't satisfied!!! Try again) \n";
    }


    if (out2.is_open()) {
        out2 << "The position: " << p << endl;
        out2 << "A: ";
        for (i = 0; i < N; i++) {
            out2 << k[i] << " ";
        }
        out2 << "\nN: " << N << endl;
    }



    delete[] k;

    return;
}

void B3() {

    ofstream out3("Документи : \\ 2.3.3.А.txt", ios::out);          // потік введення/виведення
    out3.open("2.3.3.А.txt"); // відкр. файл для виведення
    // перевірка, чи файл відкрито
    if (!out3.is_open())
    {
        cout << "Cannot open the file_1 to output. \n";
        return;
    }

    ifstream in("Документи : \\ 2.А.txt", ios::in);          // потік введення/виведення
    in.open("2.А.txt"); // відкр. файл-джерело
    // перевірка, чи файл відкрито
    if (!in.is_open())
    {
        std::cout << "Cannot open the file_2 to output. \n";
        return;
    }

    ifstream in1("Документи : \\ 2.А.1.txt", ios::in);          // потік введення/виведення
    in1.open("2.А.1.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in1.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }



    int N, i, min = 100, p = -1, i1 = -1;
    int* k;
    k = new int[30];


    cout << "N: ";
    if (in1.is_open()) {
        in1 >> N;
        cout << N;
    }

    cout << endl << "A: ";
    while (!in.eof()) {
        for (i = 0; i < N; i++) {
            in >> k[i]; // зчитати з in = > A[i]
        }
    }

    for (i = 0; i < N; i++) {
        cout << k[i] << " ";
    }

    cout << endl;

    // Знаходимо 1 від'ємний елемент
    for (i = 0; i < N; i++) {
        if (k[i] < 0) { i1 = i; break; }
    }

    //Якщо немає щодного від'ємного елемета, припиняємо роботу
    if (i1 == -1) {
        cout << "Condition isn't satisfied!!! Try again) \n";
        return;
    }

    for (i = i1; i < N; i++) {
        if ((k[i] >= 0) && (k[i] % 2 == 0)) {
            if (min > k[i]) {
                min = k[i]; p = i; // для знаходження елемента, який відповідає нашим вимогам
            }
        }
    }

    for (i = i1; i < N; i++) {
        if ((k[i] >= 0) && (k[i] % 2 == 0)) {
            for (i = p++; i < N; i++) {
                if (k[i] == min) p = i; // для знаходження останнього елемента, який відповідає нашим вимогам
            }
        }
    }

    cout << "The position of the negative element (I1): " << i1 << endl;
    if (p != -1) {
        cout << "P: " << p << endl;
    }
    else {
        cout << "Condition isn't satisfied!!! Try again) \n";
    }


    if (out3.is_open()) {
        out3 << "The position: " << p << endl;
        out3 << "A: ";
        for (i = 0; i < N; i++) {
            out3 << k[i] << " ";
        }
        out3 << "\nN: " << N << endl;
    }


    delete[] k;

    return;
}

void B4() {

    ifstream in2("Документи : \\2.А.txt", ios::in);          // відкр. файл-джерело
    in2.open("2.А.txt"); // відкр. файл-джерело
    // перевірка, чи файл відкрито
    if (!in2.is_open())
    {
        cout << "Cannot open the file_1 to output \n";
        return;
    }

    ifstream in3("Документи : \\ 2.А.1.txt", ios::in);          // відкр. файл-джерело
    in3.open("2.А.1.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in3.is_open())
    {
        cout << "Cannot open the file_2 to output_2 \n";
        return;
    }

    ifstream in4("Документи : \\ 2.А.121.txt", ios::in);          // відкр. файл-джерело
    in4.open("2.А.121.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in4.is_open())
    {
        cout << "Cannot open the file to output \n";
        return;
    }


    int N, i, p = -1;
    int* k;
    k = new int[30];

    std::vector<int> V;     // пустий вектор


    if (in3.is_open()) {
        in3 >> N;
        V.push_back(N);
    }

    if (in4.is_open()) {
        in4 >> p;
        V.push_back(p);
    }

    while (!in2.eof()) {
        for (i = 0; i < N; i++) {
            in2 >> k[i]; // зчитати з in = > A[i]
        }
    }

    for (i = 0; i < N; i++) {
        V.push_back(k[i]);
    }


    printf("You have entered : \n");

    cout << "P: ";

    for (i = 1; i < 2; i++) {
        cout << V[1] << " ";
    }

    cout << endl << "N: ";
    for (i = 0; i < 1; i++) {
        cout << V[0] << " ";
    }

    cout << endl << "A: ";
    if (in3.is_open()) {
        for (i = 0; i < N; i++) {
            for (i = 2; i < V.size(); i++) {
                cout << V[i] << " ";
            }
        }
    }
    cout << endl;


    delete[] k;

    return;
}

// C

void C1() {

    ofstream out("Документи : \\ 3.3.1.А.txt", ios::out);   // потік виведення (запис у файл)
    out.open("3.3.1.А.txt");   // потік виведення
    // перевірка, чи файл відкрито
    if (!out.is_open())
    {
        cout << "Cannot open the file to output_1 \n";
        return;
    }

    ofstream out1("Документи : \\ 3.А.txt", ios::out);          // потік введення/виведення
    out1.open("3.А.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out1.is_open())
    {
        cout << "Cannot open the file to output_2 \n";
        return;
    }

    ofstream out11("Документи : \\ 3.А.1.txt", ios::out);          // потік введення/виведення
    out11.open("3.А.1.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out11.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }

    ofstream out111("Документи : \\ 3.А.12.txt", ios::out);          // потік введення/виведення
    out111.open("3.А.12.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out111.is_open())
    {
        cout << "Cannot open the file to output_4 \n";
        return;
    }

    ofstream out1111("Документи : \\ 3.А.121.txt", ios::out);          // потік введення/виведення
    out1111.open("3.А.121.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out1111.is_open())
    {
        cout << "Cannot open the file to output_5 \n";
        return;
    }

    ofstream out1_1("Документи : \\ 3.А.1212.txt", ios::out);          // потік введення/виведення
    out1_1.open("3.А.1212.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out1_1.is_open())
    {
        cout << "Cannot open the file to output_5 \n";
        return;
    }

    ofstream out1_11("Документи : \\ 3.А.1_2.txt", ios::out);          // потік введення/виведення
    out1_11.open("3.А.1_2.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out1_11.is_open())
    {
        cout << "Cannot open the file to output_5 \n";
        return;
    }


    int  n = 200, i, k = 0;
    float xa, ya, xb, yb, xc, yc, m1, m2, m3;

    cout << "Input A(xa, ya): ";
    cin >> xa >> ya;
    cout << "Input B(xb, yb): ";
    cin >> xb >> yb;
    cout << "Input C(xc, yc): ";
    cin >> xc >> yc;


    int N;

    cout << "Number of coordinates(n <= 200) ";

Num:
    cin >> N;


    if (N > 200) {
        cout << "Error" << " " << "Try again \n";
        goto Num;
    }


    //Вводимо координати точок
    for (i = 0; i < N; i++) {
        cout << "Input(x" << i << "; y" << i << ") : ";
        cin >> LST[i].x >> LST[i].y;
    }



    // Останні крок. Чи належить точка площині?

    for (i = 0; i < N; i++) {
        m1 = (xa - LST[i].x) * (yb - ya) - (xb - xa) * (ya - LST[i].y);
        m2 = (xb - LST[i].x) * (yc - yb) - (xc - xb) * (yb - LST[i].y);
        m3 = (xc - LST[i].x) * (ya - yc) - (xa - xc) * (yc - LST[i].y);

        if ((m1 == 0) || (m2 == 0) || (m3 == 0)) {
            k++;
        }
        else if ((m1 >= 0) && (m2 >= 0) && (m3 >= 0)) {
            k++;
        }
        else if ((m1 <= 0) && (m2 <= 0) && (m3 <= 0)) {
            k++;
        }
        cout << i << ": " << k << endl;
    }


    if (k == 0)  cout << "None \n";
    else {
        cout << "Number of points in plane: " << k << endl;
    }



    if (out.is_open()) {
        out << "ABC: ";
        out << "A (" << xa << "; " << ya << ")" << ", ";
        out << "B (" << xb << "; " << yb << ")" << ", ";
        out << "C (" << xc << "; " << yc << ")" << endl;

        out << "Paints: ";
        for (i = 0; i < N; i++) {
            out << "(" << LST[i].x << "; " << LST[i].y << ")" << " ";
        }

        out << "\nN: " << N << endl;  // записати у файл N
        out << "\nNumber: " << k;
    }


    if (out1.is_open()) { // записати у файл для завдання 3.4
        out1 << xa << " " << ya;
    }

    if (out11.is_open()) { // 3.4
        out11 << xb << " " << yb;
    }

    if (out1_1.is_open()) { // 3.4
        out1_1 << xc << " " << yc;
    }

    if (out111.is_open()) { // 3.4
        for (i = 0; i < N; i++) {
            out111 << LST[i].x << " " << LST[i].y << " ";
        }
    }

    if (out1111.is_open()) { // 3.4
        out1111 << k;
    }

    if (out1_11.is_open()) { // 3.4
        out1_11 << N;
    }



    out.close(); // закриваєм файли
    out1.close();
    out11.close();
    out111.close();
    out1111.close();
    out1_1.close();
    out1_11.close();



    return;
}

void C2() {

    ofstream out2("Документи : \\ 3.3.2.А.bin", ios::binary | ios::out);          // потік введення/виведення
    out2.open("3.3.2.А.bin"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!out2.is_open())
    {
        cout << "Cannot open the file to output. \n";
        return;
    }

    srand(time(NULL));

    int  n = 200, i, k = 0;
    float xa, ya, xb, yb, xc, yc, m1, m2, m3;


    cout << "A(xa, ya): ";
    xa = 0.01 * (rand() % 2000);
    ya = 0.01 * (rand() % 2000);
    cout << xa << " " << ya << endl;

    cout << "B(xb, yb): ";
    xb = 0.01 * (rand() % 2000);
    yb = 0.01 * (rand() % 2000);
    cout << xb << " " << yb << endl;

    cout << "C(xa, ya): ";
    xc = 0.01 * (rand() % 2000);
    yc = 0.01 * (rand() % 2000);
    cout << xc << " " << yc << endl;

    int N;


    cout << "Number of coordinates(n <= 200) ";

Num:
    cin >> N;


    if (N > 200) {
        cout << "Error" << " " << "Try again \n";
        goto Num;
    }



    //Вводимо координати точок

    for (i = 0; i < N; i++) {
        LST[i].x = 0.01 * (rand() % 2000);
        LST[i].y = 0.01 * (rand() % 2000);
        cout << "(" << LST[i].x << "; " << LST[i].y << ")" << endl;
    }


    // Останні крок. Чи належить точка площині?

    for (i = 0; i < N; i++) {
        m1 = (xa - LST[i].x) * (yb - ya) - (xb - xa) * (ya - LST[i].y);
        m2 = (xb - LST[i].x) * (yc - yb) - (xc - xb) * (yb - LST[i].y);
        m3 = (xc - LST[i].x) * (ya - yc) - (xa - xc) * (yc - LST[i].y);

        if ((m1 == 0) || (m2 == 0) || (m3 == 0)) {
            k++;
        }
        else if ((m1 >= 0) && (m2 >= 0) && (m3 >= 0)) {
            k++;
        }
        else if ((m1 <= 0) && (m2 <= 0) && (m3 <= 0)) {
            k++;
        }
        cout << i << ": " << k << endl;
    }


    if (k == 0)  cout << "\nNone \n";
    else {
        cout << "Number of points in plane: " << k << endl;
    }




    if (out2.is_open()) {
        out2 << "ABC: ";
        out2 << "A (" << xa << "; " << ya << ")" << ", ";
        out2 << "B (" << xb << "; " << yb << ")" << ", ";
        out2 << "C (" << xc << "; " << yc << ")" << endl;

        out2 << "Paints: ";
        for (i = 0; i < N; i++) {
            out2 << "(" << LST[i].x << "; " << LST[i].y << ")" << " ";
        }

        out2 << "\nN: " << N << endl;  // записати у файл N
        if (k == 0) {
            out2 << "None";
        }
        else {
            out2 << "Number: " << k;
        }
    }


    out2.close(); // закриваєм файл



    return;
}

void C3() {

    ofstream out3("Документи : \\ 3.3.3.А.txt", ios::out);          // потік введення/виведення
    out3.open("3.3.3.А.txt"); // відкр. файл для виведення
    // перевірка, чи файл відкрито
    if (!out3.is_open())
    {
        cout << "Cannot open the file_1 to output. \n";
        return;
    }

    ifstream in("Документи : \\ 3.А.txt", ios::in);          // потік введення/виведення
    in.open("3.А.txt"); // відкр. файл-джерело
    // перевірка, чи файл відкрито
    if (!in.is_open())
    {
        std::cout << "Cannot open the file_2 to output. \n";
        return;
    }

    ifstream in1("Документи : \\ 3.А.1.txt", ios::in);          // потік введення/виведення
    in1.open("3.А.1.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in1.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }

    ifstream in11("Документи : \\ 3.А.1212.txt", ios::in);          // потік введення/виведення
    in11.open("3.А.1212.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in11.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }

    ifstream in111("Документи : \\ 3.А.12.txt", ios::in);          // потік введення/виведення
    in111.open("3.А.12.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in111.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }

    ifstream in1_1("Документи : \\ 3.А.1_2.txt", ios::in);          // потік введення/виведення
    in1_1.open("3.А.1_2.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in1_1.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }


    int  n = 200, N, i, k = 0;
    float xa, ya, xb, yb, xc, yc, m1, m2, m3;

    cout << "A(xa, ya): ";
    if (in.is_open()) {
        in >> xa >> ya;
        cout << xa << " " << ya << endl;
    }


    cout << "B(xb, yb): ";
    if (in1.is_open()) {
        in1 >> xb >> yb;
        cout << xb << " " << yb << endl;
    }

    cout << "C(xc, yc): ";
    if (in11.is_open()) {
        in11 >> xc >> yc;
        cout << xc << " " << yc << endl;
    }

    cout << "N: ";
    if (in1_1.is_open()) {
        in1_1 >> N;
        cout << N << endl;
    }

    cout << "\nPoints: ";
    if (in111.is_open()) {
        for (i = 0; i < N; i++) {
            in111 >> LST[i].x >> LST[i].y;
            cout << endl << "(" << LST[i].x << "; " << LST[i].y << ")";
        }
    }
    cout << endl << endl;

    // Останні крок. Чи належить точка площині?

    for (i = 0; i < N; i++) {
        m1 = (xa - LST[i].x) * (yb - ya) - (xb - xa) * (ya - LST[i].y);
        m2 = (xb - LST[i].x) * (yc - yb) - (xc - xb) * (yb - LST[i].y);
        m3 = (xc - LST[i].x) * (ya - yc) - (xa - xc) * (yc - LST[i].y);

        if ((m1 == 0) || (m2 == 0) || (m3 == 0)) {
            k++;
        }
        else if ((m1 >= 0) && (m2 >= 0) && (m3 >= 0)) {
            k++;
        }
        else if ((m1 <= 0) && (m2 <= 0) && (m3 <= 0)) {
            k++;
        }
        cout << i << ": " << k << endl;
    }


    if (k == 0)  cout << "None \n";
    else {
        cout << "Number of points in plane: " << k << endl;
    }


    if (out3.is_open()) {
        out3 << "ABC: ";
        out3 << "A (" << xa << "; " << ya << ")" << ", ";
        out3 << "B (" << xb << "; " << yb << ")" << ", ";
        out3 << "C (" << xc << "; " << yc << ")" << endl;

        out3 << "Paints: ";
        for (i = 0; i < N; i++) {
            out3 << "(" << LST[i].x << "; " << LST[i].y << ")" << " ";
        }

        out3 << "\nN: " << N << endl;  // записати у файл N
        out3 << "\nNumber: " << k;
    }


    out3.close(); // закриваєм файли
    in1.close();
    in11.close();
    in111.close();
    in1_1.close();



    return;
}

void C4() {

    ifstream in("Документи : \\ 3.А.txt", ios::in);          // потік введення/виведення
    in.open("3.А.txt"); // відкр. файл-джерело
    // перевірка, чи файл відкрито
    if (!in.is_open())
    {
        std::cout << "Cannot open the file_2 to output. \n";
        return;
    }

    ifstream in1("Документи : \\ 3.А.1.txt", ios::in);          // потік введення/виведення
    in1.open("3.А.1.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in1.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }

    ifstream in11("Документи : \\ 3.А.1212.txt", ios::in);          // потік введення/виведення
    in11.open("3.А.1212.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in11.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }

    ifstream in111("Документи : \\ 3.А.12.txt", ios::in);          // потік введення/виведення
    in111.open("3.А.12.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in111.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }

    ifstream in1_1("Документи : \\ 3.А.1_2.txt", ios::in);          // потік введення/виведення
    in1_1.open("3.А.1_2.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in1_1.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }

    ifstream in1_2("Документи : \\ 3.А.121.txt", ios::in);          // потік введення/виведення
    in1_2.open("3.А.121.txt"); // окрываем файл для записи
    // перевірка, чи файл відкрито
    if (!in1_2.is_open())
    {
        cout << "Cannot open the file to output_3 \n";
        return;
    }


    int  n = 200, N, i, k = 0;
    float xa, ya, xb, yb, xc, yc, m1, m2, m3;
    std::vector<float> V;


    if (in.is_open()) {
        in >> xa >> ya;
        V.push_back(xa);
        V.push_back(ya);
    }

    if (in1.is_open()) {
        in1 >> xb >> yb;
        V.push_back(xb);
        V.push_back(yb);
    }

    if (in11.is_open()) {
        in11 >> xc >> yc;
        V.push_back(xc);
        V.push_back(yc);
    }

    if (in1_1.is_open()) {
        in1_1 >> N;
        V.push_back(N);
    }

    if (in1_2.is_open()) {
        in1_2 >> k;
        V.push_back(k);
    }

    if (in111.is_open()) {
        for (i = 0; i < N; i++) {
            in111 >> LST[i].x >> LST[i].y;
            V.push_back(LST[i].x);
            V.push_back(LST[i].y);
        }
    }



    cout << "A: ";
    for (i = 0; i < 2; i++) {
        cout << V[i] << " ";
    }
    cout << endl;

    cout << "B: ";
    for (i = 2; i < 4; i++) {
        cout << V[i] << " ";
    }
    cout << endl;

    cout << "C: ";
    for (i = 4; i < 6; i++) {
        cout << V[i] << " ";
    }
    cout << endl;

    cout << "N: ";
    for (i = 6; i < 7; i++) {
        cout << V[6] << " ";
    }
    cout << endl;

    cout << "Points: ";
    for (i = 8; i < V.size(); i++) {
        if (i % 2 == 0) { cout << endl; }
        cout << "       " << V[i] << " ";
    }
    cout << endl;

    cout << "k: ";
    for (i = 7; i < 8; i++) {
        cout << V[7] << " ";
    }

    cout << endl;

    in.close(); // закриваєм файли
    in1.close();
    in11.close();
    in111.close();
    in1_1.close();
    in1_2.close();

    return;
}






// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
