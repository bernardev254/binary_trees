#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: data to store in new node
 *
 * Return: pointer to node created or null on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
	{
		return NULL;
	}

	newnode->parent = parent;
	newnode->n = value;

	return (newnode);
}

