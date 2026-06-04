#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    //Mendefinisakan fungsi di dalam variabel
    auto jumlahkan = [] (int a, int b) {
        return a + b;
    }; 
    cout << "Hasil Lambda: " << jumlahkan(5, 7) << endl;
    return 0;
}