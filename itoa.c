// From http://www.strudel.org.uk/itoa/
/**
 * C++ version 0.4 char* style "itoa":
 * Written by Lukás Chmela
 * Released under GPLv3.
*/
// It's actually C, if you ask me.
char* itoa(long val, int base) {
	// check that the base if valid
	if (base < 2 || base > 36) return "";
	static char result[32] = {0};
	char* ptr = result, *ptr1 = result, tmp_char;
	long tmp_val;

	do {
		tmp_val = val;
		val /= base;
		*ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_val - val * base)];
	} while ( val );

	// Apply negative sign
	if (tmp_val < 0) *ptr++ = '-';
	*ptr-- = '\0';
	while(ptr1 < ptr) {
		tmp_char = *ptr;
		*ptr--= *ptr1;
		*ptr1++ = tmp_char;
	}
	return result;
}
