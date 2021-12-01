#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left_child of another node
 * @parent: pointer to the node to insert the left node in
 * @value: value to store in the node
 *
 * Return: returns a pointer to the new node or null on failure or if
 * parent is null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
	{
		return (NULL);
	}
	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = parent->left;
	if (newnode->left)
	{
		newnode->left->parent = newnode;
	}

	return(newnode);
}

