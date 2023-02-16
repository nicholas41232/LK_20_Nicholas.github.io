#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int suhu,kelvin,fahrenheit,reamur;
    cout << "Masukan Celsius = ";cin >> suhu;
    kelvin = suhu + 273;
    reamur = (4 * suhu/ 5);
    fahrenheit = (9 * suhu / 5) + 32;
    if (suhu <= 500){
        cout<<"Dalam fahrentheit = "<<fahrenheit<<endl;
        cout<<"Dalam kelvin  = "<<kelvin<<endl;
        cout<<"Dalam reamur = "<<reamur<<endl;
    } else {
        cout << "berlebihan";
        return 0;
    }
}