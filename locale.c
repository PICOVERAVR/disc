#include "locale.h"
#include <locale.h>
#include <stdio.h>
#include <time.h>

void locale() {
	const char* loc_str = setlocale(LC_ALL, ""); // get default host locale

	printf("default env locale %s:\n", loc_str);

	time_t raw;
	time(&raw);
	struct tm* local = localtime(&raw);

	char time_str[64] = {};
	strftime(time_str, 64, "%c", local);
	printf("\tcurrent date/time: %s\n", time_str);

	struct lconv* lc = localeconv();
	printf("\tcurrency symbol: %s\n", lc->currency_symbol);
	printf("\tinternational currency symbol: %s\n", lc->int_curr_symbol);

	printf("\n");
}

