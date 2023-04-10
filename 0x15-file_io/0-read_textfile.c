#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	/* buffer to store the text */
	char *buffer;
       
	/* check if filename is NULL and return 0*/
	if (filename == NULL)
		return (0);
        /* give memory to buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open_file = open(filename, O_RDONLY);
	read_file = read(open_file, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);
        /* do some checks */
	if (open_file == -1 || read_file == -1 || write_file == -1 || write_file != read_file)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open_file);

	return (write_file);
}
