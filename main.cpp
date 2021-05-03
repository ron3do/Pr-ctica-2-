#include <iostream>

using namespace std;
int main() {
  int num=0; /* Se crea una variable en la cual vamos a guardar el numero que deseamos convertir a  texto */
  
  cout<<"Digite un número entre 0 y 999"<< endl; /* Se despliega un mensaje al usuario que debe de digitar un numero y el rango que debe de pertenecer */
  cin>>num; // lee y almacema el numero en la variable num
  if (num>=0 && num<1000) { 
    /*  Para esta funcion se uso un IF ya que mientras el numero este en rango permitido realizara el programa */
    
    if (num==900){ //funcion cuando el numero solo tiene un numero y el resto es cero.
        cout<<"novecientos "; // despliega el dato en letras
        num -=900;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando      
      }

      else if (num==800){ //funcion cuando el numero solo tiene un numero y el resto es cero.
        cout<<"ochocientos "; // despliega el dato en letras
        num -=800;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando      
      }  

      else if (num==700){ //funcion cuando el numero solo tiene un numero y el resto es cero.
        cout<<"setecientos "; // despliega el dato en letras
        num -=700;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando      
      }

      else if (num==600){ //funcion cuando el numero solo tiene un numero y el resto es cero.
        cout<<"seiscientos "; // despliega el dato en letras
        num -=600;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando      
      }

      else if (num==500){ //funcion cuando el numero solo tiene un numero y el resto es cero.
        cout<<"quinicientos "; // despliega el dato en letras
        num -=500;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando      
      }
      else if (num==400){ //funcion cuando el numero solo tiene un numero y el resto es cero.
        cout<<"cuatrocientos "; // despliega el dato en letras
        num -=400;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando      
      }

      else if (num==300){ //funcion cuando el numero solo tiene un numero y el resto es cero.
        cout<<"trecientos "; // despliega el dato en letras
        num -=300;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando      
      }
      else if (num==200){ //funcion cuando el numero solo tiene un numero y el resto es cero.
        cout<<"docientos "; // despliega el dato en letras
        num -=200;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando      
      }
      else if (num==100){ //funcion cuando el numero solo tiene un numero y el resto es cero.
        cout<<"ciento "; // despliega el dato en letras
        num -=100;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando      
      }

      else if (num>900 && num<=999){ // evalua si en numero esta entre ]900,999[
      cout<<"novecientos "; // despliega el dato en letras
      num -=900;            // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando              
      }
    
      else if (num>800 && num<=899){ 
        cout<<"ochocientos "; // despliega el dato en letras
        num -=800; // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando    
    }
      else if (num>700 && num<=799){
      cout<<"setecientos "; // despliega el dato en letras
      num -=700;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
      else if (num>600 && num<=699){
      cout<<"seiscientos "; // despliega el dato en letras
      num -=600;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
    
      else if (num>500 && num<=599){
      cout<<"quinicientos ";  // despliega el dato en letras
      num -=500;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
    
      else if (num>400 && num<=499){
      cout<<"cuatrocientos "; // despliega el dato en letras
      num -=400;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
  
      else if (num>300 && num<=399){
      cout<<"trecientos ";  // despliega el dato en letras
      num -=300;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
      
      else if (num>200 && num<=299){
      cout<<"dosicientos "; // despliega el dato en letras
      num -=200;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }  
      else if (num>100 && num<=199){
      cout<<"ciento ";  // despliega el dato en letras
      num -=100;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }   
    if (num>=90 && num<=99){
      cout<<"noventa y "; // despliega el dato en letras
      num -=90; // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
      else if (num>=80 && num<=89){
        cout<<"ochenta y "; // despliega el dato en letras
        num -=80; // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
      else if (num>=70 && num<=79){
        cout<<"setenta y "; // despliega el dato en letras
        num -=70; // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
      else if (num>=60 && num<=69){
        cout<<"sesenta y "; // despliega el dato en letras
        num -=60; // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
    
      else if (num>=50 && num<=59){
        cout<<"cincuenta y "; // despliega el dato en letras
        num -=50; // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
    
      else if (num>=40 && num<=49){
        cout<<"cuarenta y ";  // despliega el dato en letras
        num -=40; // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
  
      else if (num>=30 && num<=39){
        cout<<"treinta y";  // despliega el dato en letras
        num -=30; // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
      
      else if (num>=20 && num<=29){
        cout<<"veinte y  "; // despliega el dato en letras
        num -=20; // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }  
      else if (num>=10 && num<=19){
        cout<<"diez y ";  // despliega el dato en letras
        num -=10; // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
      }
    if (num==9){
        cout<<"nueve";  // despliega el dato en letras
        num -=9;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }  
    if (num==8){
      cout<<"ocho"; // despliega el dato en letras
      num -=8;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
      else if (num==7){
        cout<<"siete";  // despliega el dato en letras
        num -=7;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
      else if (num==6){
        cout<<"seis"; // despliega el dato en letras
        num -=6;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
      else if (num==5){
        cout<<"cinco";  // despliega el dato en letras
        num -=5;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
    
      else if (num==4){
        cout<<"cuatro"; // despliega el dato en letras
        num -=4;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
    
      else if (num==3){
        cout<<"tres"; // despliega el dato en letras
        num -=3;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
  
      else if (num==2){
        cout<<"dos";  // despliega el dato en letras
        num -=2;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
    }
      
      else if (num==1){
        cout<<"uno "; // despliega el dato en letras
        num -=1;  // para continuar conviertiendo se realiza la resta, a num de la parte ya evaluzada así poder continuar evaluando
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
