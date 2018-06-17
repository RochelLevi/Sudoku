#include "display_funcs.h"
#include <unordered_map>
#include <vector>

using namespace std;

void display_board(int board[9][9]){
  for (int i = 0; i < 9; i++){
    display_one_line(board[i]);
    if(i == 2 || i == 5){
      print_divider();
    }
  }
}

void display_one_line(int line[9]){
  cout << line[0] << "  " << line[1] << "  " << line[2] << " | " << line[3]
  << "  " << line[4] << "  " << line[5] << " | " << line[6] << "  "
  << line[7] << "  " << line[8] << endl;
}

void print_divider(){
  cout << "------- " << "  -------  " << " -------" << endl;
}

unordered_map <string, vector<int,9>> map_space_to_possibilities(){

}
