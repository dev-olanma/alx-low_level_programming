#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * Description: Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	/* create variables */
	int open_file, write_file, len = 0;

	/* check if filename is NULL */
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		/* loop through text_content and increment len */
		for (len = 0; text_content[len];)
			len++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	write_file = write(open_file, text_content, len);

	/* do some checks and close */
	if (open_file == -1 || w == -1)
		return (-1);

	close(open_file);

	return (1);
}
