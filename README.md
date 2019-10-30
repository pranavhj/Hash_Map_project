# Hash_Map_project
A Hash map project is created from scratch in C++ using OOP principles
Description of methods of the class 

int Hash_func(std::string key);                           //calculates the index where a particular item should be stored wrt name
    void print_char_array(std::string array);
    void add_item(std::string name,std::string drink);                         //adds items to Hash table
    int NoOfItemsinIndex(int index);                                 //gives no of items in a bucket or a index
    void print_table();                         //prints name and drink of each 1st element of bucket and no of elements in bucket
    void print_all_elements_of_bucket(int index);      //print all elements of the hash_table in that index
    void Find_drink(std::string name);                                //look in the  hash table for element name and if present, display whats their fav drink 
    int Find_person(std::string name);                                 //find person name in hash table
    void Remove_item(std::string name);                                //remove item in hash_table
