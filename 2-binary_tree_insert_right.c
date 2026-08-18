#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node as a right child
 * @parent: pointer to the parent node
 * @value: value of the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_right;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	old_right = parent->right;

	parent->right = new_node;

	if (old_right != NULL)
	{
		new_node->right = old_right;
		old_right->parent = new_node;
	}

	return (new_node);
}
