/*************************************
 * program1.cpp
 * Kyle Wessel
 * 9/5/2020
 * COSC4785/5785, Program 1
 *
 * 
 * "Driver" program for an example. This does not really do a lot, just
 * formats and outputs the information from flex.
 *
 * 
 * **********************************/


#include<fstream>
#include<iostream>
#include<iomanip>
#include<string>
#include<stdio.h>
#include<FlexLexer.h>

using std::cin;
using std::cout;
using std::string;
using std::endl;

string spacer(int disp);

string value;
int line;
int column=1;
int ofType;
int len;


int main()
{
  
  int rtn;
  yyFlexLexer scanner;
  cout << "Line    Column  Type    Length  Value" << endl;
  
  while((rtn=scanner.yylex()) != 0 )
  {
    int col = column-len;
    cout << line << spacer(line) << col << spacer(col)
         << ofType << spacer(ofType) << len << spacer(len) 
         << value << endl;
    if (ofType == 11) {column = 1; line +=1;}
  }

  return 0;
}

string spacer(int disp) {
  // pads (8 spaces) - (# of characters in previous entry)
  string l = "";
  int d = 8- std::to_string(disp).length();
  for (int i = 0; i<d; i++){
    l.append(" ");
  }
  return l;  
}
