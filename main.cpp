
#include "Butelka.h"

int main(void){
  Butelka<std::string> butelka1("Rabbit");
  Butelka<std::string> butelka2("Martini");

  std::cout << "Rabbit '> < = ?' Martini : " << (butelka1>butelka2) << std::endl;


  Butelka<const char*> butelka3("Kadarka");
  Butelka<const char*> butelka4("Carlo Rossi");
  
 std::cout << "Kadarka '> < = ?' Carlo Rossi : " << (butelka4>butelka3) << std::endl;

  return 0;
}

/*OUTPUT

Wino: Rabbit
Wino: Martini
Rabbit '> < = ?' Martini : Martini 

Wino: Kadarka
Wino: Carlo Rossi
Kadarka '> < = ?' Carlo Rossi : Carlo Rossi 

*/