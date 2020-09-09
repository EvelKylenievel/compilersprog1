# Makefile
# COSC 4785/5785
# $Author: kwessel $
# $Date: 2020-09-02 $
# $Id: Makefile,v 1.3 2020-09-02 kwessel Exp kwessel $
#
# $Log: Makefile,v 3
# Revision 1.3  2020-09-06 kwessel
# third revision
#
#
# Might need the c++11 standard with older compilers 
# The -Wno-sign-compare stops a warning that is in the generated function and
# you cannot change. Also it will NOT cause a problem. This is not uncommon in
# inherited code.  But you really HAVE to investigate before suppressing it. 
#
CXXFLAGS=-ggdb -Wall -Wno-sign-compare
CXX=g++ 
LEX=flex++
LEXFLAGS=--warn


program1: program1.cpp program1_lex.cpp
	$(CXX) $(CXXFLAGS) program1.cpp program1_lex.cpp -o program1

program1_lex.cpp: program1.lpp
	$(LEX) $(LEXFLAGS) program1.lpp

# 
# Probably do not need the core.* for students or the *.o 
# The a.out is just because old habits die hard. 
# Do need the -f so that all files get deleted if some are missing.
#
clean: 
	/bin/rm -f program1 program1_lex.cpp a.out core.* *.o
