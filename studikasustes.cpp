#include <iostream>
using namespace std;

class Operator{
  public:
       void input();
       void proses();
       void output();

  private:
        string barang[10];
        int angka[10][10];
};

void Operator::input(){
  for(int i=0; i<6; i++){
     	for(int j=0; j<2; j++){
    		cout<<""
       		cout<<endl;
     }
  }
}

void Operator::proses(){
  for(int i=0; i<6; i++){
     for(int j=0; j<2; j++){
        total_penjualan+=stok_jual[i];
        sisa_barang=angka[i][j]-stok_jual[i];
        total_pendapatan=stok_jual[i]*angka[i][j+1];
        cout<<"Sisa Stok Barang "<<barang[i][j]<<"= "<<sisa_barang;
        cout<<"Total pendapatan bulan ini : "<<total_pendapatan;
     }
  }
 cout<<"Total stok terjual bulan ini : "<<total_penjualan;
}

void Operator::output(){
  cout<<"Tabel Daftar Barang\n";
  cout <<"----------------------------------------------------------------------\n";
  cout <<"|Barang\t\t\t\tStok Barang\t\tHarga|\n";
  cout <<"----------------------------------------------------------------------\n";
    for(int i=0;i<6;i++){
      for(int j=0; j<2; j++){
        cout << barang[i][j] << "\t\t\t" << angka[i][j];
      }
      cout<<endl;
   }
   cout <<"----------------------------------------------------------------------\n";
   cout << endl;
}

int main(){
  Operator run ;
  run.output();
  run.input();
  run.proses();
  return 0;
}
