#pragma once
#include <iostream>
#include<string>
#include<vector>

class Hash
{private:
static const int table_size=10;
struct item{
    std::string name;
    std::string drink;
    item* next;
            };
item* Hash_table[table_size];                                  //define whole hash table
std::string compare={"empty"};
public:
    
    int Hash_func(std::string key);                                      //calculates the index where a particular item should be stored wrt name
    void print_char_array(std::string array);
    void add_item(std::string name,std::string drink);                         //adds items to Hash table
    int NoOfItemsinIndex(int index);                                 //gives no of items in a bucket or a index
    void print_table();                                              //prints name and drink of each 1st element of bucket and no of elements in bucket
    void print_all_elements_of_bucket(int index);
    void Find_drink(std::string name);                                //look in the  hash table for element name and if present, display whats their fav drink 
    int Find_person(std::string name);
    void Remove_item(std::string name);
    
    Hash();                                                          //default constructor initializes the hash table with table_size no of components
    
    //Hash();
    //Hash();

};

