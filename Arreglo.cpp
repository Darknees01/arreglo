# include <iostream>
# include <iomanip>
using namespace std ;

int main()
{
	int const FILAS = 4;
	int const COLUMNAS = 5;
	int Arreglo [FILAS][COLUMNAS] = { {1,2,3,4,5} , {6,7,8,9,10} , {11,12,13,14,15} , {16,17,18,19,20} };
	int f,c ;
	for (f =0 ;  f < FILAS ; f++)
	{
		for (c =0 ;  c < COLUMNAS ; c++)
	{
	cout<< "ingrese el elemento ( " << f << "," << c << ")," ;
	cin >> Arreglo [f][c] ; 
    }
}    
    for (f=0 ; f<FILAS ; f++) {
    	cout << endl;
    	for (c=0 ; c<COLUMNAS ; c++)
    	cout << setw(5) << Arreglo [f][c] ;
    }
	
	system ("pause");
	return 0;
}
