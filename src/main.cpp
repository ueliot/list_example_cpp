
#include "include/list.h"
#include "include/database.h"


int main(int arr_count, char *args[]){
  List simpleList;
  Database data;
  if (arr_count>1) {
    
    simpleList.name = string(args[1]);    
    simpleList.print_menu();
    data.write(simpleList.list);
    data.read();
  }
  else{
    cout << "username not supplied...exiting program"<< endl;
  }
  

  return 0;
}
