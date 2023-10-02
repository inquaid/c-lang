strcpy(dest, src): Copies the content of the src string to the dest string.

strncpy(dest, src, n): Copies at most n characters from src to dest.

strcat(dest, src): Concatenates (appends) the src string to the end of the dest string.

strncat(dest, src, n): Concatenates (appends) at most n characters from src to the end of the dest string.

strlen(str): Returns the length (number of characters) of the string str.

strcmp(str1, str2): Compares two strings str1 and str2 lexicographically. Returns 0 if they are equal, a positive value if str1 is greater, and a negative value if str2 is greater.

strncmp(str1, str2, n): Compares at most n characters of two strings str1 and str2 lexicographically. Returns 0 if they are equal, a positive value if str1 is greater, and a negative value if str2 is greater.

strchr(str, ch): Searches for the first occurrence of character ch in the string str and returns a pointer to it, or NULL if ch is not found.

strrchr(str, ch): Searches for the last occurrence of character ch in the string str and returns a pointer to it, or NULL if ch is not found.

strstr(str, substr): Searches for the first occurrence of the substring substr in the string str and returns a pointer to it, or NULL if substr is not found.

strtok(str, delim): Tokenizes the string str into tokens based on the delimiter characters specified in delim.

memset(ptr, value, size): Sets the first size bytes of the memory pointed to by ptr to the specified value.

memcpy(dest, src, size): Copies size bytes from the memory pointed to by src to the memory pointed to by dest.

memcmp(ptr1, ptr2, size): Compares the first size bytes of two memory areas pointed to by ptr1 and ptr2. Returns 0 if they are equal, a positive value if ptr1 is greater, and a negative value if ptr2 is greater.
