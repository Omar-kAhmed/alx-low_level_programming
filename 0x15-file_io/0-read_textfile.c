#include "main.h"

/**
 * read_textfile - reads a text file and print to stdout
 * @filename: pointer to name of file
 * @letters: number of letter to read
 * Return: number of letter to write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buff = malloc((letters + 1) * sizeof(char));
	if (buff == NULL)
		return (0);
	rd = read(file, buff, letters);
	if (rd == -1)
		return (-1);

	buff[letters] = '\0';

	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
		return (0);
	close(file);
	free(buff);
	return (wr);
}
