
#include "include/list.h"


int main(int arr_count, char *args[]){
  if (arr_count>1) {
    List simpleList;
    simpleList.name = string(args[1]);
    //string name(args[1]); //crea el objeto name y le pasa el argumento al constructor
    //otra forma seria  string name = args[1]   pero es lo mismo
    simpleList.print_menu();
  }else{
    cout << "username not supplied...exiting program"<< endl;
  }

  return 0;
}
