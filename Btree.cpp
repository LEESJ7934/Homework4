#include <iostream>
#include <time.h> 
#include "Btree.h"

using namespace std;


   int main() {
        clock_t start, finish;  // 시간 측정을 하기 위한 함수이다.
        double duration;

        start = clock();

        BTree t(9); //Minimum degree 값을 설정한다.

        int arr[10];

        for (int i = 1500; i < 2500; i++) {

            t.insertion(i);
        }

        cout << "B-tree : ";
        t.traverse();

        for (int i = 0; i < 500; i++) {

            t.insertion(i);
        }
        cout << "\nB-tree : ";
        t.traverse();

        finish = clock();

        duration = (double)(finish - start) / CLOCKS_PER_SEC;
        printf("\n%f초", duration); //시간을 측정한다.

        return 0;
    }
