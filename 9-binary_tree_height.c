#include "binary_trees.h"
/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: 0, if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height->left, height->right;
if (tree == NULL)
return (0);
height->left = binary_tree_height(tree->left);
height->right = binary_tree_height(tree->right);
if (height->left > height->right)
return (height->left + 1);
else
return (height->right+ 1);
}