#include <iostream>
#include <fstream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main() {

  ofstream data;
  data.open("data.txt");
  for(int i=0;i<200;i++){
    double x=-10+0.1*i;

    data <<x<<" "<<x*x<<" "<<x*x+50<<" "<<x*x*x/10.<<endl;

  }

  data.close();

  system("./plot_script.sh");
  return 0;
}
