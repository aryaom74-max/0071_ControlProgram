#include <iostream>
#include <ctime> // Tambahkan library ini untuk time()
#include <cstdlib> // Tambahkan library ini untuk rand() dan srand()

using namespace std;

int main(){
    int x;

    srand(time(0));
    x = rand() % 10;

    if (x == 5){
        x = x + 1;
        cout << "nilai x sudah dikoreksi menjadi : " << x << endl;
    }

    cout << "Bilangan yang diberikan = " << x;

    return 0;
}