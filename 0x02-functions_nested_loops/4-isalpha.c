#include "main.h"
/**
 *  _is aplha - checks aphabetic character 
 *  @c is the character that will be checked
 *  Return: 1 if c a letter, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
