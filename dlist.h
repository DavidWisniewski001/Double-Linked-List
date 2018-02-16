////////////////////////////////////////////////////////////////////////////////
/*******************************************************************************
Welcome to the college course tracker.

David Wisniewski
10/14/2017
Project3
Description:
This class is a linked list container that orders your college classes in order
alphabetically. It calculates your GPA and even allows you to remove that history
class you really wish you had never took and see what your GPA could be like if
you had never taken that class.
*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////

#include<iomanip>
#include<string>
#include "Dnode.h"
#include"iterator.h"
#include<cstdlib>
#include<iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////
template< class T>
class dlist
{
public:
  typedef node_iterator<T> iterator;
  dlist();
////////////////////////////////////////////////////////////////////////////////
/*******************************************************************************
Initilizes head & tail to NULL
*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////
dlist(const dlist & other);
////////////////////////////////////////////////////////////////////////////////
//dlist& operator = (const dlist& other);
////////////////////////////////////////////////////////////////////////////////
  ~dlist();
////////////////////////////////////////////////////////////////////////////////
/*******************************************************************************
Destructs old linked lists that are not being used and gives the memory back
to the OS
*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////
int size(){return node_count;}
////////////////////////////////////////////////////////////////////////////////
void front_insert(T& object);
////////////////////////////////////////////////////////////////////////////////
void rear_insert(T& object);
////////////////////////////////////////////////////////////////////////////////
void show();
////////////////////////////////////////////////////////////////////////////////
void reverse_show();
////////////////////////////////////////////////////////////////////////////////
void front_remove();
////////////////////////////////////////////////////////////////////////////////
void rear_remove();
////////////////////////////////////////////////////////////////////////////////
void remove(iterator& other);
////////////////////////////////////////////////////////////////////////////////
iterator begin(){return iterator (head);}
////////////////////////////////////////////////////////////////////////////////
iterator end(){return iterator(NULL);}
////////////////////////////////////////////////////////////////////////////////
iterator r_begin(){return iterator (tail);}
////////////////////////////////////////////////////////////////////////////////
iterator r_end(){return iterator(NULL);}
////////////////////////////////////////////////////////////////////////////////
void insert_before(iterator& it, T& item);
////////////////////////////////////////////////////////////////////////////////
void insert_after(iterator& it, T& item);
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

private:
  Dnode<T>* head;
  Dnode<T>* tail;
  int node_count;
};
#include"dlist.template"
////////////////////////////////////////////////////////////////////////////////
