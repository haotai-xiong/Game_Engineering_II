/* listmain.c --- 
 * 
 * Filename: listmain.c
 * Description: 
 * Author: Joseph
 * Maintainer: 
 * Created: Wed Oct  4 20:32:33 2023 (+0100)
 * Last-Updated: Thursday Oct 12 12:10:00 2023 (+0100)
 *           By: Haotai Xiong C00265675
 *     Update #: 11
 * 
 */

/* Commentary: 
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
#include "DLinkedList.h"
#include "minunit.h"
#include <string.h>

int tests_run = 0;

static char* test_ListInit() {
  #define test_name "ListInit"
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized in test_ListInit()" , 0 == size(list));
  
  #undef test_name
  return 0;
}

static char* test_Size() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized in test_Size()", 0 == size(list));
  mu_assert("error, DLList cannot be pushed in test_Size()", 1 == push(list, 1));
  pop(list);
  mu_assert("error, DLList cannot be popped in test_Size()", 0 == size(list));
  mu_assert("error, size != 0 in test_Size()",  0 == size(list));
  return 0;
}

static char* test_Push() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized in test_Push()", 0 == size(list));
  push(list, 1);
  push(list, 2);
  mu_assert("error, DLList cannot be pushed in test_Push()", 2 == size(list));
  return 0;
}

static char* test_Pop() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized in test_Pop()", 0 == size(list));
  push(list, 1);
  push(list, 2);
  mu_assert("error, DLList cannot be pushed in test_Pop()", 2 == size(list));
  pop(list);
  mu_assert("error, DLList cannot be popped in test_Pop()", 1 == size(list));
  return 0;
}

static char* test_GetCurrent() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized in test_GetCurrent()", 0 == size(list));
  push(list, 10);
  mu_assert("error, getCrrent() != 10 in test_GetCurrent()", 10 == getCurrent(list));
  return 0;
}

static char* test_First() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized in test_First", 0 == size(list));
  push(list, 1);
  push(list, 2);
  first(list);
  mu_assert("error, current != first in test_First", 2 == getCurrent(list));
  return 0;
}

static char* test_Next() {
    DLList* list = createDLList();
    push(list, 1);
    push(list, 2);
    push(list, 3); // list = [3, 2, 1]

    first(list); // set current to first element
    mu_assert("Error: current should be 3 in test_Next()", getCurrent(list) == 3);

    next(list); // move to the next element
    mu_assert("Error: current should be 2 in test_Next()", getCurrent(list) == 2);

    return 0;
}

static char* test_AtEnd() {
    DLList* list = createDLList();
    push(list, 1);
    push(list, 2);

    first(list); // set current to first element
    next(list); // move to the next element
    next(list); // move to the next element, which should be NULL

    mu_assert("Error: should not be at end in test_AtEnd()", !atEnd(list));

    return 0;
}

static char* test_DeleteCurrent() {
    DLList* list = createDLList();
    push(list, 1);
    push(list, 2);
    push(list, 3); // list = [3, 2, 1]

    first(list); // set current to first element
    next(list);  // move to the next element

    deleteCurrent(list); // delete current element, which is 2

    mu_assert("Error: size should be 2 in test_DeleteCurrent()", size(list) == 2);
    mu_assert("Error: current should be 1 in test_DeleteCurrent()", getCurrent(list) == 1);

    return 0;
}

static char* test_InsertAfter() {
    DLList* list = createDLList();
    push(list, 1);
    push(list, 2);

    first(list); // set current to first element
    insertAfter(list, 3); // list should now be [2, 3, 1]

    mu_assert("Error: size should be 3 in test_InsertAfter()", size(list) == 3);
    next(list);
    mu_assert("Error: current should be 3 in test_InsertAfter()", getCurrent(list) == 3);

    return 0;
}

static char* test_InsertBefore() {
    DLList* list = createDLList();
    push(list, 1);
    push(list, 2);

    first(list); // set current to first element
    insertBefore(list, 3); // list should now be [3, 2, 1]

    mu_assert("Error: size should be 3 in test_InsertBefore()", size(list) == 3);
    mu_assert("Error: current should be 2 in test_InsertBefore()", getCurrent(list) == 2);

    return 0;
}

static char* test_PrintList() {
    DLList* list = createDLList();
    push(list, 1);
    push(list, 2);
    push(list, 3); // list = [3, 2, 1]

    printList(list);

    return 0;
}

/**
* run all the tests above
*/
static char * all_tests() {
    mu_run_test(test_ListInit);
    mu_run_test(test_Size);
    mu_run_test(test_Push);
    mu_run_test(test_Pop);
    mu_run_test(test_GetCurrent);
    mu_run_test(test_First);
    mu_run_test(test_Next);
    mu_run_test(test_AtEnd);
    mu_run_test(test_DeleteCurrent);
    mu_run_test(test_InsertAfter);
    mu_run_test(test_InsertBefore);
    mu_run_test(test_PrintList);
    return 0;
}

int main() {
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    }
    else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests runned: %d\n", tests_run);

    return result != 0;
}

/* listmain.c ends here */
