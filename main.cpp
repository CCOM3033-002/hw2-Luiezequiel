/*
Lab 1: Suma de dos fracciones
Nombre: Luiezequiel Benítez Medero
Núm. Est: 801-XX-XXXX
Colaboraciones: 
- tutor X,
- página web: [link]
*/

#include<iostream>
using namespace std;

int main(){
  // Proposito programa
  cout << "Este programa suma dos fracciones." << endl;

  //Fracciones
  int num1, denom1, num2, denom2;
  char slash;
  // Input
  cout << "Entre las fracciones en el formato a/b." << endl;

  //  Usuario entra valores
  cout << "Entre la primera fracción: ";
  cin >> num1 >> slash >> denom1;

  cout << "Entre la segunda fracción: ";
  cin >> num2 >> slash >> denom2;

  // Calculos 
  int num_result = num1 * denom2 + num2 * denom1;
  int denom_result = denom1 * denom2;

  //Resultado
  cout << "La suma es " << num_result << slash << denom_result << "." << endl;


  return 0;
}
