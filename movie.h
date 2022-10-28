#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <list>

struct movie {
  std::string title;
  std::string dir_name;
  int runtime;//The total runtime in minutes
  std::string format;// Digital, DVD, Blu-ray, or VHS
  float price;
  int year;
};

class Movie_list {
 private:
  List<movie> collection;

 public:

  /**
   * Default constructor
   *
   * @post The list is made.
   *
   */
  Movie_list();

  /**
   * Destructor for the Movie_list
   *
   * @return ~Movie_list();
   * @post
   */
  ~Movie_list();

  readFile();

  writeFile();

  find_movie(std::string title);

  director_search(std::string dir_name);

  remove(std::string title);
  
};



#endif //MOVIE_H
