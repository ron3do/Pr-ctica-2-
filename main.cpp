#include <iostream>

using namespace std;
int main() {
  int num=0;
  
  cout<<"Digite un número entre 0 y 999"<<endl;
  cin>>num;
  if (num>1 && num<999) {
    
    if (num>900 && num<999){
      cout<<"novecientos "<<endl;
      num -=900;
    }
    if (num>800 && num<899){
      cout<<"ochocientos "<<endl;
      num -=800;
    }
    if (num>700 && num<799){
      cout<<"setecientos "<<endl;
      num -=700;
    }
    if (num>600 && num<699){
      cout<<"seiscientos "<<endl;
      num -=600;
    }
    
    if (num>500 && num<599){
      cout<<"quinicientos "<<endl;
      num -=500;
    }
    
    if (num>400 && num<499){
      cout<<"cuatrocientos "<<endl;
      num -=400;
    }
  
    if (num>300 && num<399){
      cout<<"trecientos "<<endl;
      num -=300;
    }
      
    if (num>200 && num<299){
      cout<<"dosicientos "<<endl;
      num -=200;
    }  
    if (num>100 && num<199){
      cout<<"ciento "<<endl;
      num -=100;
    }   
    cout<<num;

      }

    
   
  
  
}
