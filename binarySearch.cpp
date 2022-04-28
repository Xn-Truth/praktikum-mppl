#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;

int binary_search(int a[], int l, int r, int key) {
    while (l <= r) {
          int m = l + (r - l) / 2;
          if (key == a[m])
              return m;
          else if (key < a[m])
               r = m - 1;
          else
              l = m + 1;
          }
          return -1;
     }

int main(){
int n, data[100000], i, j, temp;
char ulang;
int key;
do {
    cout<<"======================================= \n";
    cout<<"\tALGORITMA SELECTION SORT\n" ;
    cout<<"======================================= \n\n";
    cout<<"Masukkan Jumlah Data: ";
    cin>>n;
    cout<<endl;
    cout<<"\n\nMasukkan Angka yang dicari: ";
    cin>>key;
    
    printf("Data sebelum diurutkan: ");
    
    for (i = 0; i < n; i++){
        data[i]=rand()%10000+1;
        cout<<data[i]<<" ";
}

    cout<<endl<<endl;
    double start = clock();
    srand(time(NULL));
    for(i=0; i<(n-1); i++){
        for(j=i+1; j<n; j++){
            if(data[i]>data[j]){
            temp=data[i];
            data[i]=data[j];
            data[j]=temp;
        }
    }
 }
    printf("Data setelah diurutkan: ");
    for (i = 0; i <= n - 1; i++) {
        cout<<data[i]<<" ";
 }

    int res = binary_search(data, 0, n - 1, key);
        if (res != -1){
            cout <<"\n\n"<< key << " ditemukan \n\n" << endl;
        }
        else{
            cout <<"\n\n"<< key << " tidak ditemukan\n\n" << endl;
        }

double stop = clock();
cout<<endl<<endl;
cout<<"Waktu Eksekusi : "<<(stop-start)<<"ms";
cout<<endl<<endl;
cout<<"Apakah ingin mengulang program?[y/t]: ";
cin>>ulang;
 }
 while(ulang=='y');
return 0;
}