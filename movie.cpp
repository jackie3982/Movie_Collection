#include "movie.h"

#inlcude <iostream>
#include <list>
#include <fstream>

using namespace std;

Movie_list::Movie_list(){

}

Movie_list::~Movie_list(){

}

Movie_list::readFile(string file_name){
  ifstream infile;
  infile.open(file_name);

  
}


/*
Movie_list();


* Destructor for the Movie_list
*
* @return ~Movie_list();
* @post
~Movie_list();

readFile();

writeFile();

find_movie(std::string title);

director_search(std::string dir_name);

remove(std::string title);
*/
