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
  node_iterator(Dnode<T> *init =NULL)
  {current = init;}
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
  node_iterator operator --(){current = current ->Plink(); return *this;}
  node_iterator operator --(int){node_iterator original(*this);
    current = current -> Plink();return original;}
    friend class dlist<T>;
private:
  Dnode<T> *current;

};
