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
