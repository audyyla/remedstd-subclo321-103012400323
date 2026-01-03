#include <iostream>
#include "sll.h"
using namespace std;

int main() {
    list L;
    createList(L);

    tPanen p1 = {"Padi", "Maret", 500};
    tPanen p2 = {"Jagung", "Maret", 300};
    tPanen p3 = {"Labu", "April", 700};

    tambahData(L, p1);
    tambahData(L, p2);
    tambahData(L, p3);

    address maxPanen = panenTerbanyak(L);
    if (maxPanen != nullptr) {
        cout << "Panen terbanyak: "
             << maxPanen->info.namaTanaman << " "
             << maxPanen->info.jumlah << endl;
    }

    cout << "Panen bulan Maret: ";
    panenBulanan(L, "Maret");

    return 0;
}
