//Aula de matriz 09.08.2016 (;
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int matriz[3][3] = {
	{ 5, 8, -2},
	{ 11, 0, 0},
	{ 2, 3, 9}
	
	};
	
  /*
    cout << "pos [2][2] "<< matriz [2][2] <<endl;
	cout << "pos [2][1] "<< matriz [2][1] <<endl;
	cout << "pos [0][0] "<< matriz [0][0] <<endl;
  */
  for (int lin = 0; lin < 3; lin++)
  {
      for (int col =0; col <3 ; col++)
      {
  	    cout << matriz[lin][col] << " ";
      }	
      cout << endl;
}
}
