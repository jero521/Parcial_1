#include <iostream>

using namespace std;

int main()
{
       //comparacion




     short unsigned int bin1[8]={0,1,0,0,1,0,1,1};

     short unsigned int bin2[8];         //arreglo que guarda el numero posterior a la clave
     short unsigned int bin3[8];        //arreglo que guarda los byts. correspondiente a el numero par

     short unsigned int bin4[8]={0,1,0,0,1,0,1,1};  //arreglo que simula la clave 75

     for(short int i=0;i<8;i++){

        bin2[i]=bin1[i];
     }



    //comprovacion de si un numero es igual a otro//

     //cuando sea true





     int con=0;
     int pep=128;
     int sum=0;




     while(pep!=0){



                 if(bin1[con]==1){
                     sum+=pep;
                 }
                 con++;
                 pep/=2;

             }


             con=0;
             pep=128;





     cout<<sum;


     if(sum==75){

     }


}
