//Else If
#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
    return (a + b) / 2;
}

string Status_lulus(float r){
    if (r >= 60)
        return "Lolos";
    else
        return "Gagal";
}

int main(){
    float nilBI, nilMT, rerata;
    string status;

    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout << "Masukkan nilai Matematika = ";
    cin >> nilMT;

    //rerata = (nilBI+nilMT)/2;
    //if (rerata >= 60)
    //  status = "Lolos";
    //else
    //  status = "Gagal";

    rerata = Rata_rata(nilBI, nilMT);
    //status = Status_lulus(rerata);

    cout << "Status kelulusan = " << Status_lulus(rerata) << " ,dengan nilai rerata = " << rerata << endl;

    return 0;
}

//Nested If
#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
    return (a + b) / 2;
}

string Status_lulus(float r){
    if (r >= 60){
        if (r > 80){
            return "Lulus Cumlade";
        }
        else{
            return "Lulus baik";
        }
    }
    else{
        return "";
    }
}

int main(){
    float nilBI, nilMT, rerata;
    string status;

    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout << "Masukkan nilai Matematika = ";
    cin >> nilMT;

    //rerata = (nilBI+nilMT)/2;
    //if (rerata >= 60)
    //  status = "Lolos";
    //else
    //  status = "Gagal";

    rerata = Rata_rata(nilBI, nilMT);
    //status = Status_lulus(rerata);

    cout << "Status kelulusan = " << Status_lulus(rerata) << " ,dengan nilai rerata = " << rerata << endl;

    return 0;
}

//Simple If
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
