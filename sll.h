#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <string>
using namespace std;

struct tPanen {
    string namaTanaman;
    string bulan;
    int jumlah;
};

typedef tPanen infotype;

struct elmList;
typedef elmList* address;

struct elmList {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList(list &L);
address createNewElm(infotype x);
void tambahData(list &L, infotype x);
address panenTerbanyak(list L);
void panenBulanan(list L, string bulan);

#endif
