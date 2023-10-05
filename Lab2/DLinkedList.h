/* DLinkedList.h --- 
 * 
 * Filename: DLinkedList.h
 * Description: 
 * Author: Joseph
 * Maintainer: 
 * Created: Wed Oct  4 18:44:47 2023 (+0100)
 * Last-Updated: Wed Oct  4 20:39:12 2023 (+0100)
 *           By: Joseph
 *     Update #: 7
 * 
 * Commentary: 
 * 
 * 
 * 
 * 
 * 
 */

/* This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Code: */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
* node_t
*
* Struct representing Node in a doubly linked list
*/
struct node_t {
  struct node_t *prev;
  struct node_t *next;
  int data;
};

/**
* DLList
*
* Struct representing a doubly linked list data type
*/
struct DLList_t {
  struct node_t *first;
  struct node_t *current;
  int size;
};

#define DLList struct DLList_t

/**
* List constructor.
* @return Pointer to the new list
*/
DLList* createDLList() {

}


/**
* returns the number of items in the list
* @param theList a pointer to the DLList struct
* @return The number of elements in the DLList
*/
int size(DLList *theList) {

}


/**
* Adds an item to the front of the list
* @param theList a pointer to the DLList struct
* @param newData the data item to be added (an integer).
* @return The number of elements in the DLList
*/
int push(DLList * theList, int newData) {

}


/**
* removes an item to the front of the list
* @param theList a pointer to the DLList struct
* @return The data item - an integer
*/
int pop(DLList* theList) {

}


/**
* returns the current element of the list
* @param theList a pointer to the DLList struct
* @return The data at the current position- an integer
*/
int getCurrent(DLList* theList) {

}


/**
* Moves current* to the start of the list
* @param theList a pointer to the DLList struct
* @return void
*/
void first(DLList* theList) {

}


/**
* Moves current* to next element of the list
* @param theList a pointer to the DLList struct
* @return void
*/
void next(DLList *theList) {

}


/**
* states whether current is the last element or not
* @param theList a pointer to the DLList struct
* @return true if current is at end otherwise false
*/
bool atEnd(DLList *theList) {

}


/**
* Deletes the current element
* @param theList a pointer to the DLList struct
* @return number of elements remaining in list
*/
int deleteCurrent(DLList* theList) {

}


/**
* Inserts data after the current element
* @param theList a pointer to the DLList struct
* @param newData the data to be inserted
* @return void
*/
void insertAfter(DLList* theList, int newData) {

}


/**
* Inserts data before the current element
* @param theList a pointer to the DLList struct
* @param newData the data to be inserted
* @return void
*/
void insertBefore(DLList* theList, int newData) {

}


/**
* Prints the entire list
* @param theList a pointer to the DLList struct
* @return void
*/
void printList(DLList* theList) {

}

  
/* DLinkedList.h ends here */
