/* Juego de adivinar un numero
tener un numero 
preguntar al usuario el numero
informar si lo adivino o no
*/
#include <iostream>
int main(void) {
  const int NUM =10;
  int guessed_number;
  std::cout <<"adivina un numero entre 1 y 100:\n";
  std::cin >> guessed_number;
  
  if(guessed_number== NUM)
   {std::cout<<"GANASTE!!!\n";}
  else { std::cout << "No ganaste, sigue intentando\n";
  }
 
  return 0;
}