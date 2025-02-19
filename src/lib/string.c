#include <string.h>
#include <stdbool.h>

size_t strlen(const char *s)
{
	const char *tmp;
	for (tmp = s; *tmp; ++tmp)
		;

	return (tmp - s);
}

char *itoa(char *buf, int base, int d)
{
	char *tmp = buf;
	char *tmp1, *tmp2;
	unsigned long ud = d;
	int div = 10;

	if (base == 'd' && d < 0) {
		*tmp++ = '-';
		buf++;
		ud = -d;
	} else if (base == 'x') {
		div = 16;
	}

	do {
		int rem = ud % div;

		*tmp++ = (rem < 10) ? rem + '0' : rem + 'a' - 10;
	} while (ud /= div);

	*tmp = 0;

	tmp1 = buf;
	tmp2 = tmp - 1;
	while (tmp1 < tmp2) {
		char tmp3 = *tmp1;
		*tmp1 = *tmp2;
		*tmp2 = tmp3;
		tmp1++;
		tmp2--;
	}

	return buf;
}

char *utoa(char *buf, int base, unsigned int d)
{
	char *tmp = buf;
	char *tmp1, *tmp2;
	unsigned long ud = d;
	int div = 10;

	if (base == 'x') {
		div = 16;
	}

	do {
		int rem = ud % div;

		*tmp++ = (rem < 10) ? rem + '0' : rem + 'a' - 10;
	} while (ud /= div);

	*tmp = 0;

	tmp1 = buf;
	tmp2 = tmp - 1;
	while (tmp1 < tmp2) {
		char tmp3 = *tmp1;
		*tmp1 = *tmp2;
		*tmp2 = tmp3;
		tmp1++;
		tmp2--;
	}

	return buf;
}