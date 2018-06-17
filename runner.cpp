#include <iostream>
#include "display_funcs.cpp"

using namespace std;

int main(){
  cout << "Welcome User!" << endl;
  cout << "solving this puzzle..." << endl << endl;

  int board[9][9] = {{0, 0, 0, 2, 6, 0, 7, 0, 1}, {6, 8, 0, 0, 7, 0, 0, 9, 0},
  {0, 0, 0, 2, 6, 0, 7, 0, 1}, {6, 8, 0, 0, 7, 0, 0, 9, 0},
  {0, 0, 0, 2, 6, 0, 7, 0, 1}, {6, 8, 0, 0, 7, 0, 0, 9, 0},
  {0, 0, 0, 2, 6, 0, 7, 0, 1}, {6, 8, 0, 0, 7, 0, 0, 9, 0},
  {0, 0, 0, 2, 6, 0, 7, 0, 1}};



  display_board(board);
  return 0;
}
