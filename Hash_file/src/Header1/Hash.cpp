#include "Hash.h"
#include <iostream>
#include<string>
#include<vector>

Hash::Hash()
{for(int i=0;i<table_size;i++)
    {   Hash_table[i]=new item;
        Hash_table[i]->name={"empty"};
        Hash_table[i]->drink={"empty"};
        Hash_table[i]->next=NULL;
        
    }
}
        

int Hash:: Hash_func(std::string key)                                         //key is the name of item
    {
    int size=sizeof(key)/sizeof(char);                                         //func returns a index where element with name will be stored
    size=key.size();
    //Hash::print_char_array(key);
    int sum=0;
    for(int i=0;i<size;i++)
    {sum=sum+int(key[i]);
    }
    int index=sum%table_size;
    return index;
    }


void Hash::print_char_array(std::string array)
    {
    int size=sizeof(array)/sizeof(char);
    size=array.size();
    for(int i=0;i<size;i++)
    {std::cout<<array[i];}
    }
    
    
void Hash::add_item(std::string name,std::string drink)
{   int index=Hash::Hash_func(name);
    if(Hash_table[index]->name==compare)              // check if its is defalut created by const
    {   Hash_table[index]->name=name;
        Hash_table[index]->drink=drink;
        //Hash_table[index]->next}
        //std::cout<<Hash_table[index]->name;std::cout<<"q"<<std::endl;
    }
    
    else
    {   item *ptr=Hash_table[index];
        item *n=new item;
        n->name=name;
        n->drink=drink;
        n->next=NULL;
        while(ptr->next!=NULL)
        {ptr=ptr->next;//std::cout<<"a"<<std::endl;}
        ptr->next=n;
    }        
}
}

int Hash::NoOfItemsinIndex (int index)
{int count=0;
    if(Hash_table[index]->name==compare)
        {return count;}
    else
        {count++;item *ptr;
        ptr=Hash_table[index];
        while(ptr->next!=NULL)
            {ptr=ptr->next;
            count++;//std::cout<<"n"<<std::endl;
            }
            
            }
         return count;   
        }
void Hash::print_table()
{
for(int i=0;i<table_size;i++)
    {std::cout<<"Element no "<<i+1<<" Has Name ";
    Hash::print_char_array(Hash_table[i]->name);
    std::cout<<" And has fav drink ";
    Hash::print_char_array(Hash_table[i]->drink);
    int n=Hash::NoOfItemsinIndex(i);
    std::cout<<" and has "<<Hash::NoOfItemsinIndex(i)<<" elements"<<std::endl;
    if(n>1)
    {Hash::print_all_elements_of_bucket(i);}
        }

}

void Hash::print_all_elements_of_bucket(int index)
{   item *ptr=Hash_table[index];int count=0;
    if(Hash_table[index]->next==NULL)
        {std::cout<<"1st element is "<<Hash_table[index]->name<<"and has fav drink "<<Hash_table[index]->drink<<std::endl;}
    else
    {while(ptr->next!=NULL)
        {count++;
         std::cout<<count<<" element is "<<ptr->name<<"and has fav drink "<<ptr->drink<<std::endl;
         ptr=ptr->next;   
         }
         
    }
}


void Hash::Find_drink(std::string name)
{   int index=Hash:: Hash_func(name);
    item *ptr=Hash_table[index];
    
    while(ptr->name!=name    &&    ptr->next!=NULL)
        {   
            ptr=ptr->next; 
            
        }
        
    if(ptr->name==name)
        {std::cout<<"Element found in bucket "<<index<<" who has fav drink "<<ptr->drink<<std::endl;}
    else
        {std::cout<<"Element not found"<<std::endl;} 
    
}

int Hash::Find_person(std::string name)
{   int index=Hash:: Hash_func(name);
    item *ptr=Hash_table[index];
    
    while(ptr->name!=name    &&    ptr->next!=NULL)
        {   
            ptr=ptr->next; 
            
        }
        
    if(ptr->name==name)
        {return index;//std::cout<<"Element found in bucket "<<index<<" who has fav drink "<<ptr->drink<<std::endl;}
        }
    else
        {return -1;//std::cout<<"Element not found"<<std::endl;} 
        }
    
}

void Hash::Remove_item(std::string name)
{   int index=Hash::Find_person(name);
    int i=Hash::Hash_func(name);
    item* ptr=Hash_table[i];
    item* ptr1=Hash_table[i];
    if(index==-1)
        {std::cout<<"Element with name "<<name<<" not present"<<std::endl;}
    else
            {while(ptr->next!=NULL)
                {if(ptr->name==name)
                        ptr1=ptr;
                    ptr=ptr->next;
                    }
   
    if(ptr1==Hash_table[i])
    {   Hash_table[i]->name={"empty"};
        Hash_table[i]->drink={"empty"};}
        
    ptr1->name={"empty"};
    ptr1->drink={"empty"};
            
            }
}


//Hash::Hash()
//{
//}

//Hash::~Hash()
//{
//}

