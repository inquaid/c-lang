atoi(str): Converts a string str to an integer.

atol(str): Converts a string str to a long integer.

atoll(str): Converts a string str to a long long integer.

strtol(str, endptr, base): Converts a string str to a long integer with error checking and returns the converted value. The endptr parameter is used to point to the first invalid character in the string, and base specifies the base (e.g., 10 for decimal).

strtoul(str, endptr, base): Converts a string str to an unsigned long integer with error checking.

strtod(str, endptr): Converts a string str to a double-precision floating-point number with error checking.

malloc(size): Allocates a block of memory of the specified size in bytes and returns a pointer to the first byte of the block.

calloc(num, size): Allocates memory for an array of num elements, each of size bytes, and initializes the memory to zero. Returns a pointer to the allocated memory.

realloc(ptr, size): Changes the size of a previously allocated block of memory pointed to by ptr to the specified size. Returns a pointer to the resized memory block.

free(ptr): Deallocates (frees) a block of memory previously allocated by malloc, calloc, or realloc.

exit(status): Terminates the program with the specified exit status.

system(command): Executes a shell command specified by the command parameter.

rand(): Generates a pseudo-random integer.

srand(seed): Seeds the random number generator with a specified seed value.

rand_r(seedptr): A reentrant version of rand, which allows you to specify a pointer to a seed.

qsort(base, num, size, compare): Sorts an array pointed to by base, which contains num elements of size bytes each. You provide a custom comparison function compare for sorting.
