#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <string.h>

/*--------------------------------
  !! required structure
  --------------------------------*/

struct  s_art {
  char *name;
  int  price;
};

struct s_item {
  char           *key; //here the key will be the name
  struct s_art   *value;
  struct s_item  *next;
};

struct s_dict {
  struct s_item **items;
  int           capacity; //the capacity of the array 'items'
};

/*--------------------------------
  :) function you must implement
  --------------------------------*/

// DICTIONNARY

size_t hash(char *input); //return hash result

struct s_dict *dictInit(int capacity); //initialize the dictionnary, given as parameter the capacity of the array.
int	dictInsert(struct s_dict *dict, char *key, struct s_art *value); //add one element in the dictionnary, if FAIL return 0, otherwise 1
struct s_art *dictSearch(struct s_dict *dict, char *key); //find one element in the dictionnary, if not found, return NULL

// OTHER

int searchPrice(struct s_dict *dict, char *name);


/*--------------------------------
  ?? test function used in main
  --------------------------------*/

struct s_art **getArts(void);


/*--------------------------------
  &  your own other function
  --------------------------------*/

static const unsigned char T[256] = {
  98,  6, 85,150, 36, 23,112,164,135,207,169,  5, 26, 64,165,219, //  1
  61, 20, 68, 89,130, 63, 52,102, 24,229,132,245, 80,216,195,115, //  2
  90,168,156,203,177,120,  2,190,188,  7,100,185,174,243,162, 10, //  3
  237, 18,253,225,  8,208,172,244,255,126,101, 79,145,235,228,121, //  4
  123,251, 67,250,161,  0,107, 97,241,111,181, 82,249, 33, 69, 55, //  5
  59,153, 29,  9,213,167, 84, 93, 30, 46, 94, 75,151,114, 73,222, //  6
  197, 96,210, 45, 16,227,248,202, 51,152,252,125, 81,206,215,186, //  7
  39,158,178,187,131,136,  1, 49, 50, 17,141, 91, 47,129, 60, 99, //  8
  154, 35, 86,171,105, 34, 38,200,147, 58, 77,118,173,246, 76,254, //  9
  133,232,196,144,198,124, 53,  4,108, 74,223,234,134,230,157,139, // 10
  189,205,199,128,176, 19,211,236,127,192,231, 70,233, 88,146, 44, // 11
  183,201, 22, 83, 13,214,116,109,159, 32, 95,226,140,220, 57, 12, // 12
  221, 31,209,182,143, 92,149,184,148, 62,113, 65, 37, 27,106,166, // 13
  3, 14,204, 72, 21, 41, 56, 66, 28,193, 40,217, 25, 54,179,117, // 14
  238, 87,240,155,180,170,242,212,191,163, 78,218,137,194,175,110, // 15
  43,119,224, 71,122,142, 42,160,104, 48,247,103, 15, 11,138,239  // 16
};

#endif