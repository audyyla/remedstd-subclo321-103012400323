#include "sll.h"
#include <iostream>
using namespace std;

void createList(list &L) {
    L.first = nullptr;
}

address createNewElm(infotype x) {
    address p;

    p = new elmList;
    p->info = x;
    p->next = nullptr;
    return p;
}

void tambahData(list &L, infotype x) {
    address p;

    p = createNewElm(x);
    p->next = L.first;
    L.first = p;
}

address panenTerbanyak(list L) {
    address max, p;

    if (L.first == nullptr) {
        return nullptr;
    }

    max = L.first;
    p = L.first->next;

    while (p != nullptr) {
        if (p->info.jumlah > max->info.jumlah) {
            max = p;
        }
        p = p->next;
    }
    return max;
}

void panenBulanan(list L, string bulan) {
    address p;
    p = L.first;
    while (p != nullptr) {
        if (p->info.bulan == bulan) {
            cout << p->info.namaTanaman << " ";
        }
        p = p->next;
    }
    cout << endl;
}
