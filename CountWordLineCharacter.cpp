#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  int lines=0,characters=0,words=0;
  ifstream myfile ("hello.txt");

  if (myfile.is_open())
  {

    while ( getline(myfile,line) )
    {
      lines++;
      words++;
      for(int i=0;i<line.length();i++)
      {
          if(line[i]==' ')
          {
              words++;
          }
          characters++;
      }
      cout<<"\n";
      words++;
    }

    myfile.close();
  }

  else cout << "Unable to open file";
  cout<<"lines: "<<lines<<" words: "<<words<<"characters: "<<characters;
  return 0;
}
