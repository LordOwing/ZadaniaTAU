//Zad PESEL
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
	cin>>n;
	string pesel;
	int suma=0;
    
	for(int i =1; i<=n; i++){
		cin>>pesel;
	   
		suma+= int(pesel[0]-48);
	
		suma+= (int(pesel[1]-48)*3);

		suma+= (int(pesel[2]-48)*7);
	
		suma+= (int(pesel[3]-48)*9);

		suma+= int(pesel[4]-48);
	
		suma+= (int(pesel[5]-48)*3);

		suma+= (int(pesel[6]-48)*7);
	
		suma+= (int(pesel[7]-48)*9);
	
		suma+= int(pesel[8]-48);
	
		suma+= (int(pesel[9]-48)*3);
	
		suma+= int(pesel[10]-48);

	
		if(suma%10==0){
		    cout<<"D"<<endl;
		}
		else cout<<"N"<<endl;
		suma = 0;
	}

    return 0;
}
//Zad Ĺšrednia arytmetyczna
#include <iostream>

using namespace std;

float avg, najmniejsza, roznica, suma = 0, tab[100];;
int z, n, wynik;



int main() {
    cin >> z;
    
    for (int i = 1; i <= z; i++) {
        najmniejsza = 100;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> tab[j];
            suma += tab[j];
        }
        avg = suma/n;
        for (int x = 0; x < n; x++) {
            roznica = avg - tab[x];
            if (roznica < 0) roznica = -roznica;
            if (roznica < najmniejsza) {
                najmniejsza = roznica;
                wynik = tab[x];
            }
        }
        
        cout << wynik << endl;
        suma = 0;
        
    }
}


//Zad tablice
#include <iostream>

using namespace std;

float avg, najmniejsza, roznica, suma = 0, tab[100];;
int z, n, wynik;



int main() {
  int ile;
  cin>>ile;
  int n;
  for(int i = 1; i<= ile; i++){
      cin>>n;
      int tab[n];
      for(int z = 0; z<n; z++){
          cin>>tab[z];
      }
      for(int j = n-1; j>=0; j--){
          cout<<tab[j]<<" ";
      }
  }
}