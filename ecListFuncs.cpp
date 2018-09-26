/*  Name:Sarthak seth	
 *  USC NetID:sethsart@usc.edu
 *  CS 455 Spring 2018, Extra Credit assignment
 *
 *  See ecListFuncs.h for specification of each function.
 */

#include <iostream>

#include <cassert>

#include "ecListFuncs.h"

using namespace std;


bool isInOrder(ListType list) {
 int first,second,difference, flag=0;
	
if(list==NULL){

	return true;
}

	while (list->next != NULL)
	{
		first= list->data;
		list= list->next;   
		second= list->data;
		difference=first-second;
 		
 		if( difference> 0)
			flag++;
	}
		if (flag)
		return false;
	else
		return true;


}



void insertInOrder(ListType & list, Node *itemP) {
assert (isInOrder(list));
	assert (itemP->next==NULL);
	ListType helper;
 
    if (list== NULL || (list)->data >= itemP->data)
    {
        itemP->next = list;

        
        list = itemP;
    }
    else
    {  
        helper = list;
        while (helper->next!=NULL && helper->next->data < itemP->data)
        {
            helper = helper->next;
        }
        itemP->next = helper->next;


        helper->next = itemP;
    }


}



void insertionSort(ListType &list) {

    ListType sortedList = NULL;

 
    while (list != NULL)
     { ListType node1=new Node(list->data);
    	
    	node1->next=NULL;
//      node1->next=NULL;


 
  insertInOrder(sortedList, node1);
 
list=list->next;
     }
 

 list = sortedList;

}




void splitEvenOdd(ListType &list, ListType &first, ListType &second){
int count=0;
	ListType temp1;
	ListType temp2;
	while (list != NULL)
	{
		if ((count%2)==0)
	 	{
  		if (first==NULL)	
	  		{	
	 			first=new Node(list->data);
	temp1=first;
		}
	 	
	 		else
			{
	 			first->next= new Node(list->data);
				first=first->next;
	 			first->next=NULL;
	 		}
	  	count++;
	  	list=list->next;
	  	}
	 	else
	  	{
	 		if (second==NULL)	
			{	
	 			second=new Node(list->data);
				temp2=second;
	 		}
 		else
			{
				second->next= new Node(list->data);
	 			second=second->next;
				second->next=NULL;
	 		}
	  	count++;
	  	list=list->next;
	 	}
	 


}

 first=temp1;
	  second=temp2;
}