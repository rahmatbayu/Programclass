#include <iostream>
#include <string>
using namespace std;

class Jenissemut

{
private:

	string namasemut;
    string habitat;
    string makanan;
    string karakter;
    
public:

    Jenissemut (string namasemut, string habitat, string makanan, string karakter )
    
      {
    	Jenissemut::namasemut = namasemut;
        Jenissemut::habitat = habitat;
        Jenissemut::makanan = makanan;
        Jenissemut::karakter = karakter;
        
    }
    
    void perolehInfo (void)
    
	{
	
    cout << "================================JENIS SEMUT================================= " << endl;
    
     	cout << "Nama Semut            : " << namasemut << endl;
        cout << "Nama Habitat          : " << habitat << endl;
        cout << "Nama Makanan          : " << makanan << endl;
        cout << "Karakter      	       : " << karakter << endl;
        
        
        cout << endl;
    };
    };
int main()

  { 
	Jenissemut semutA("semut hitam", "tumpukan batu, daun daun kering yang sudah rusak, memakan serangga pengganggu(hama)", 
	"lebih aktif di pagi hari dan sore hari");
	
	Jenissemut semutB("semut merah", "didaunan/tumbuhan, memakan serangga pengganggu(hama)", 
	"membuat sarang dengan cara mengumpulkan daun daun menjadi sebuah rumah/tempat tinggal");
	
}
