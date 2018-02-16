////////////////////////////////////////////////////////////////////////////////
/*******************************************************************************
The node

David Wisniewski
10/14/2017
Project3
Description:
This class is a double linked list node which is used to make the linked list.
*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////
#ifndef DNODE_H
#define DNODE_H
template < class N >
class Dnode
{
  public:
////////////////////////////////////////////////////////////////////////////////
    Dnode(N d = N(), Dnode *n = NULL, Dnode *p = NULL )
    {data_field = d;  Next_link = n; Prev_link  = p;}
///////////////////////////////////////////////////////////////////////////////
/*******************************************************************************
Universal constructor which sets everything to NULL
*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////
	void set_data(N d)
		{data_field = d;}
////////////////////////////////////////////////////////////////////////////////
	void set_Next(Dnode *n)
		{Next_link = n;}
////////////////////////////////////////////////////////////////////////////////
  void set_Previous(Dnode *n)
  	{Prev_link = n;}
///////////////////////////////////////////////////////////////////////////////
/*******************************************************************************
  Mutator functions that manipulate the linked list
*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////
  N data() const
		{return data_field;}
////////////////////////////////////////////////////////////////////////////////
  Dnode* Nlink() const
	{return Next_link;}
////////////////////////////////////////////////////////////////////////////////
  Dnode* Plink() const
  {return Prev_link;}
////////////////////////////////////////////////////////////////////////////////
/*******************************************************************************
Accessor functions that allow the access to the private variables
*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////
    private:

	N data_field;
	Dnode* Next_link;
  Dnode * Prev_link;
};

#endif