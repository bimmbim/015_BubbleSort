#include <iostream>
#include <string>
using namespace std;

int arr{20};
int n;

void input(){
    int d;
    while (true) {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++){
        cout << "Data ke-" << (i+1) << ";";
        cin >> arr[i];
    }
}

void input(){
    int d;
    while (true) {
        cout << "Masukkan banyaknya elemen pada array: ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++){
        cout << "Data ke-" << (i+1) << ";";
        cin >> arr[i];
    }
}

void display(){
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
       for (int j = 0; j < n; j++) {
           cout << arr[j];
               if (j < n - 1){
                   cout << " -->";
               }
       }
       cout << endl;
       cout << endl;

       cout << "Jumlah pass = " << n - 1 << endl;
       cout << endl;
       cout << endl;

}

int main (){
    input();

    bubbleSortArray();
    display();

    system("pause");
    return 0;
}