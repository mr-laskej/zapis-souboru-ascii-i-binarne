#include <stdio.h>

int main()
{
	FILE* vystuptxt = fopen("vystup-txt.txt", "w");
	FILE* vystupbin = fopen("vystup - bin.txt", "wb");

	int x = 0x1A2B3C4D;
	fprintf(vystuptxt, "%d", x);
	fwrite(&x, sizeof(int), 1, vystupbin);
	fclose(vystuptxt);
	fclose(vystupbin);

}


