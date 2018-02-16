////////////////////////////////////////////////////////////////////////////////
/*******************************************************************************
Welcome to the template linked list iterator.

David Wisniewski
10/14/2017
Project3
Description:
This class is the .iterator for the linked list. this allows the application
programmer to manipulate the linked list and not worry about messing up the
pointers
*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////
#include<iomanip>
#include<string>
#include "Dnode.h"
#include<cstdlib>
#include<iostream>
template <class T>
class dlist;
template <class T>
class node_iterator
{
public:
////////////////////////////////////////////////////////////////////////////////
node_iterator(Dnode<T> *init =NULL){current = init;}
////////////////////////////////////////////////////////////////////////////////
T operator *(){return current->data();}
////////////////////////////////////////////////////////////////////////////////
bool operator !=(const node_iterator &other){return current!= other.current;}
////////////////////////////////////////////////////////////////////////////////
bool operator ==(const node_iterator &other){return current == other.current;}
////////////////////////////////////////////////////////////////////////////////
node_iterator operator ++(){current = current ->Nlink(); return *this;}
////////////////////////////////////////////////////////////////////////////////
node_iterator operator ++(int){node_iterator original(*this);
  current = current -> Nlink();return original;}
////////////////////////////////////////////////////////////////////////////////
node_iterator operator --(){current = current ->Plink(); return *this;}
////////////////////////////////////////////////////////////////////////////////
node_iterator operator --(int){node_iterator original(*this);
  current = current -> Plink();return original;}
////////////////////////////////////////////////////////////////////////////////
    friend class dlist<T>;
////////////////////////////////////////////////////////////////////////////////
private:
  Dnode<T> *current;

};
