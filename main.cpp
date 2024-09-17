#include <iostream>
#include <fstream>

using namespace std;

int main(){
  fstream file("New_file.txt");
  file.seekp(3);
  file << "Hello world!";
}
