 Binary Trees – Project Overview


This project focuses on understanding and implementing binary trees, one of the most fundamental data structures in computer science. A binary tree is a hierarchical structure in which each node has at most two children, commonly referred to as the left and right child.
The goal of this project is to learn how binary trees work internally, how to build them dynamically using pointers, and how to implement essential operations that allow trees to grow, shrink, and be traversed.

 What I Learned in This Project

How to define a binary tree node using a struct
How to create nodes dynamically using malloc
How parent, left, and right pointers link nodes together
How to insert nodes on the left or right of a given parent
How to check whether a node is a root
How to check whether a node is a leaf
How to delete an entire binary tree safely using post-order traversal
How recursive functions work in tree structures
How memory management and pointers are used to build non-linear data structures


 Functions Implemented


binary_tree_node() – create a new tree node
binary_tree_insert_left() – insert a node as the left child
binary_tree_insert_right() – insert a node as the right child
binary_tree_delete() – delete an entire binary tree
binary_tree_is_leaf() – check if a node is a leaf
binary_tree_is_root() – check if a node is a root
(other functions depending on project requirements)

 What Is a Binary Tree?

A binary tree is a collection of nodes where:
The topmost node is called the root
Each node contains:

a value
a pointer to the parent
a pointer to the left child
a pointer to the right child

A leaf node is a node with no children

Trees are often used to implement searching, sorting, and hierarchical data models

 Why Binary Trees Matter

Binary trees form the basis for many important structures such as:
Binary Search Trees (BST)
Heaps & Priority Queues
AVL Trees
Red-Black Trees
Expression Trees
File system hierarchy
Decision trees in AI
They also help build strong understanding of:
Recursion
Memory allocation
Pointers
Tree traversal algorithms
Non-linear data structures
