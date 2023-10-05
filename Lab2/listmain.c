/* listmain.c --- 
 * 
 * Filename: listmain.c
 * Description: 
 * Author: Joseph
 * Maintainer: 
 * Created: Wed Oct  4 20:32:33 2023 (+0100)
 * Last-Updated: Wed Oct  4 20:40:43 2023 (+0100)
 *           By: Joseph
 *     Update #: 4
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

int tests_run = 0;

static char* test_ListInit() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized", 0 == size(list));
  return 0;
}

static char* test_Size() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized", 0 == size(list));
  push(list, 1);
  push(list, 2);
  mu_assert("error, DLList cannot be pushed", 2 == size(list));
  pop(list);
  mu_assert("error, DLList cannot be popped", 1 == size(list));
  mu_assert("error, size != 1",  1 == size(list));
  return 0;
}

static char* test_Push() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized", 0 == size(list));
  push(list, 1);
  push(list, 2);
  mu_assert("error, DLList cannot be pushed", 2 == size(list));
  return 0;
}

static char* test_Pop() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized", 0 == size(list));
  push(list, 1);
  push(list, 2);
  mu_assert("error, DLList cannot be pushed", 2 == size(list));
  pop(list);
  mu_assert("error, DLList cannot be popped", 1 == size(list));
  return 0;
}

static char* test_GetCurrent() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized", 0 == size(list));
  push(list, 10);
  mu_assert("error, getCrrent() != 10", 10 == getCurrent(list));
  return 0;
}

static char* test_First() {
  DLList* list = createDLList();
  mu_assert("error, DLList is not initialized", 0 == size(list));
  push(list, 1);
  push(list, 2);
  first(list);
  mu_assert("error, current != first", 2 == getCurrent(list));
  return 0;
}

static char* test_Next() {
    // mu_assert("");
    return 0;
}

static char* test_AtEnd() {
    // mu_assert("");
    return 0;
}

static char* test_DeleteCurrent() {
    // mu_assert("");
    return 0;
}

static char* test_InsertAfter() {
    // mu_assert("");
    return 0;
}

static char* test_InsertBefore() {
    // mu_assert("");
    return 0;
}

static char* test_PrintList() {
    // mu_assert("");
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

int main(int argc, char **argv) {
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    }
    else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}

/* listmain.c ends here */
