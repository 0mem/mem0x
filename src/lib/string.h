#ifndef __STRING_H
#define __STRING_H

#include <stddef.h>

size_t strlen(const char *fmt);

char *itoa (char *buf, int base, int d);
char *utoa(char *buf, int base, unsigned int d);

#endif
