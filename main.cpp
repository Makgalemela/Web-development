
#include <iostream>
#include <fstream>
#include "DotAndCross.h"

using namespace std;

int main()
{
    int rows;
    int cols;
      ifstream indata("input.txt");
        if(indata.is_open()){
       while(indata >>rows >>cols){
         DotAndCross  dcObj(rows,cols);
            dcObj.createABoard();
            dcObj.mainManu();
        }
    return 0;
}
}
