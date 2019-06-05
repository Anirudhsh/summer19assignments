#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line,given;
  char ch;
  cout<<"Enter String To Be Searched\n";
  getline(cin,given);
  ifstream myfile ("hello.txt");

  if (myfile.is_open())
  {

    while ( getline(myfile,line) )
    {
      for(int i=0;i<line.length();i++)
      {
          if(line.find(given)!=string::npos)
          {
               cout<<line[i];
          }

      }
       cout<<"\n";
    }

    myfile.close();
  }

  return 0;
}
