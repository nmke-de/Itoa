// From http://www.strudel.org.uk/itoa/
char* itoa(int val, int base){
	if(val == 0)return "0";
	static char buf[32] = {0};
	int i = 30;
	for(; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];
	return &buf[i+1];
}