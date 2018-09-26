# Special-lInked-List-Functions
Implementing some essential functions Using C++ Linked lists

# What functions are we Implementing?
- InsertFront-inserts value at the front of list.
- ClearList- makes list into an empty list reclaiming memory used by nodes .
- PrintList-prints list elements, space separated, ending with '\n' .Prints empty list as     "<empty>".
- IsInOrder-returns true iff the elements in the list are in increasing order
  (duplicate elements allowed)

 Examples:
  ```sh
     list    :            isInOrder(list)
     ()                    true
     (2)                   true
     (7 2 2 3)             false
     (2 2 3 7)             true
     (2 2 3 3 3 4 4 4 4)   true
     (-12 0 7 10)          true
     (-12 0 7 5)           false
```
-InsertInOrder-inserts the new node into the ordered list.
Examples:
 ```sh
   list          itemP    list'
     ()          (2)      (2)
     (7)         (2)      (2 7)
     (1 3 5)     (4)      (1 3 4 5)
     (1 3 5)     (-12)    (-12 1 3 5)
     (1 3 5 9)   (12)     (1 3 5 9 12)
     (1 3 5 9)   (3)      (1 3 3 5 9)
```
-InsertionSort-sorts the list in increasing order using the insertion sort algorithm
Examples:
 ```sh
   list            list'
     ()            ()
     (7)           (7)
     (1 3 5)       (1 3 5)
    (8 2 7 9 5)   (2 5 7 8 9)
    (3 1 3 12 2)  (1 2 3 3 12)
```
-SplitEvenOdd-splits list into two sub-lists. "a" will contain the first, third, fifth, etc.  element from list.  And "b" will contain the second, fourth, sixth, etc. element from list.  So, if there are an odd number of nodes in list, "a" will end up with one more node than "b".  This operation will destroy the list, because it reuses nodes from the original list.  After the operation, list will be NULL.
Examples:
```sh
   list           a        b
     ()           ()      ()
     (7)          (7)     ()
     (7 2)        (7)     (2)
     (1 3 5)      (1 5)   (3)
     (1 2 3 4)    (1 3)   (2 4)
     (1 2 3 4 5)  (1 3 5) (2 4)
```
