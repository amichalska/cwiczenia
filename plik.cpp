#include <iostream>

using namespace std;

int main (){
	int tablica[5]={1,33,55,22,88};
int min;
int max;

min = tablica[0]; 
max = tablica[0]; 

for( int i = 1; i < 5; i++ )
{
    if( tablica[i] > min )
         max = tablica[i]; 
    
    if( tablica[i] < max )
        min = tablica[i]; 
     }   
   cout<<"Najmniejszy element  "<<min<<endl;
   cout<<"Największy element  "<<max<<endl;    
	
	
}
