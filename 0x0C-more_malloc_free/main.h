#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned new_size);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *malloc_checked(unsigned int b);
int *array_range(int min, int max);
char *_initialize_array(char *ar, int lar);
void _is_zero(char *argv[]);
int _checknum(char *argv[], int n);
int main(int argc, char *argv[]);

#endif
