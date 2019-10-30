#include <iostream>
#include<string>
#include "Hash.h"
#include<vector>
using namespace std;
int main()
{  Hash hashobj;
string name={"Pranav"};
string drink={"coke"};
int x=hashobj.Hash::Hash_func(name);
//cout<<x;

hashobj.add_item(name,drink);
hashobj.add_item("Vatsal","orange juice");
hashobj.add_item("viraj","beer");
hashobj.Hash::print_table();
hashobj.Hash::Find_drink("viraj");
hashobj.Hash::Find_person("viraj");
hashobj.Remove_item("viraj");
cout<<endl;
hashobj.Hash::print_table();
//hashobj.Hash::print_char_array(name);

}
