#include <iostream>
#include <string>
using namespace std;

class AC{
	public:
		void unggul1 (string unggul1);
		void unggul2 (string unggul2);
		void unggul3 (string unggul3);
		string tipe;
		int harga;
};

int main(){
		AC PANASONIC, SHARP, LG;
	
	PANASONIC.tipe="PANASONIC Alowa";
	SHARP.tipe="SHARP Plasmacluster";
	LG.tipe="LG Dual Cool Series";
	PANASONIC.harga=2700000;
	SHARP.harga=3300000;
	LG.harga=2900000;
	
	cout<<"Harga "<<(PANASONIC.tipe)<< "     : Rp. "<<(PANASONIC.harga)<<endl;
	cout<<"Harga "<<(SHARP.tipe)<< " : Rp. "<<(SHARP.harga)<<endl;
	cout<<"Harga "<<(LG.tipe)<< " : Rp. "<<(LG.harga)<<endl;
}
