#include <iostream>

using namespace std;
int main() {
  int num=0;
  
  cout<<"Digite un número entre 0 y 999"<< endl;
  cin>>num;
  if (num>=0 && num<1000) {
    
    if (num>=900 && num<=999){
      cout<<"novecientos ";
      num -=900;
    }
      else if (num>=800 && num<=899){
      cout<<"ochocientos ";
      num -=800;
    }
      else if (num>=700 && num<=799){
      cout<<"setecientos ";
      num -=700;
    }
      else if (num>=600 && num<=699){
      cout<<"seiscientos ";
      num -=600;
    }
    
      else if (num>=500 && num<=599){
      cout<<"quinicientos ";
      num -=500;
    }
    
      else if (num>=400 && num<=499){
      cout<<"cuatrocientos ";
      num -=400;
    }
  
      else if (num>=300 && num<=399){
      cout<<"trecientos ";
      num -=300;
    }
      
      else if (num>=200 && num<=299){
      cout<<"dosicientos ";
      num -=200;
    }  
      else if (num>=100 && num<=199){
      cout<<"ciento ";
      num -=100;
    }   
    if (num>=90 && num<=99){
      cout<<"noventa y ";
      num -=90;
    }
      else if (num>=80 && num<=89){
        cout<<"ochenta y ";
        num -=80;
    }
      else if (num>=70 && num<=79){
        cout<<"setenta y ";
        num -=70;
    }
      else if (num>=60 && num<=69){
        cout<<"sesenta y ";
        num -=60;
    }
    
      else if (num>=50 && num<=59){
        cout<<"cincuenta y ";
        num -=50;
    }
    
      else if (num>=40 && num<=49){
        cout<<"cuarenta y ";
        num -=40;
    }
  
      else if (num>=30 && num<=39){
        cout<<"treinta y";
        num -=30;
    }
      
      else if (num>=20 && num<=29){
        cout<<"veinte y  ";
        num -=20;
    }  
      else if (num>=10 && num<=19){
        cout<<"diez y ";
        num -=10;
      }
    if (num==9){
        cout<<"Nueve";
        num -=9;
    }  
    if (num==8){
      cout<<"ocho";
      num -=8;
    }
      else if (num==7){
        cout<<"Siete";
        num -=7;
    }
      else if (num==6){
        cout<<"Seis";
        num -=6;
    }
      else if (num==5){
        cout<<"cinco";
        num -=5;
    }
    
      else if (num==4){
        cout<<"Cuatro";
        num -=4;
    }
    
      else if (num==3){
        cout<<"tres";
        num -=3;
    }
  
      else if (num==2){
        cout<<"dos";
        num -=2;
    }
      
      else if (num==1){
        cout<<"Uno ";
        num -=1;
    }  
    /*
      else if (num==0){
        cout<<"Cero";
        
    }
     */
    cout<<num;

      }
  else{
    cout<<num<<" No es un número valido"<<endl;
    cout<<"Favor de digitar un número del rango permitido "<<endl;
    main ();

  }
    
   
  
  
}
