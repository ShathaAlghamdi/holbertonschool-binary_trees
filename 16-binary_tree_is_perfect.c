#include "binary_trees.h"

size_t tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if perfect, 0 if not or if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);

	if (left_h == right_h)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	}

	return (0);
}

/**
 * tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the node to measure the height.
 *
 * Return: Height of the tree, or 0 if tree is NULL.
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	left_h = tree_height(tree->left);
	right_h = tree_height(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	return (right_h + 1);
}
