/*******************************
 * program1.hpp
 * $Author: kwessel $
 * $Date: 2020-09-09 $
 * $Id: program1.hpp, kwessel Exp kwessel $
 *
 * Purpose of this file is to allow variables to be shared between the scanner
 * and the driver. The variables are declared in the driver (.cpp)
 *
 * Do NOT have to have this, can just put any extern declarations in the .lpp
 * file.
 *
 * $Log: program1.hpp,v $
 *
 *
 *
 *********************************/

extern string value;
extern int line;
extern int column;
extern int ofType;
extern int len;
