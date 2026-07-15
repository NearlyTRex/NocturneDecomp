// Name: crt_time.c___free_lc_time_FUN_1000d720
// Address: 1000d720
// Address Range: [[1000d720, 1000d952]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c___free_lc_time_FUN_1000d720(__lc_time_data *lc_time)

#include "nocturne.h"

void __cdecl __free_lc_time(__lc_time_data *lc_time)

{
  if (lc_time != (__lc_time_data *)0x0) {
    free(lc_time->wday_abbr[1]);
    free(lc_time->wday_abbr[2]);
    free(lc_time->wday_abbr[3]);
    free(lc_time->wday_abbr[4]);
    free(lc_time->wday_abbr[5]);
    free(lc_time->wday_abbr[6]);
    free(lc_time->wday_abbr[0]);
    free(lc_time->wday[1]);
    free(lc_time->wday[2]);
    free(lc_time->wday[3]);
    free(lc_time->wday[4]);
    free(lc_time->wday[5]);
    free(lc_time->wday[6]);
    free(lc_time->wday[0]);
    free(lc_time->month_abbr[0]);
    free(lc_time->month_abbr[1]);
    free(lc_time->month_abbr[2]);
    free(lc_time->month_abbr[3]);
    free(lc_time->month_abbr[4]);
    free(lc_time->month_abbr[5]);
    free(lc_time->month_abbr[6]);
    free(lc_time->month_abbr[7]);
    free(lc_time->month_abbr[8]);
    free(lc_time->month_abbr[9]);
    free(lc_time->month_abbr[10]);
    free(lc_time->month_abbr[0xb]);
    free(lc_time->month[0]);
    free(lc_time->month[1]);
    free(lc_time->month[2]);
    free(lc_time->month[3]);
    free(lc_time->month[4]);
    free(lc_time->month[5]);
    free(lc_time->month[6]);
    free(lc_time->month[7]);
    free(lc_time->month[8]);
    free(lc_time->month[9]);
    free(lc_time->month[10]);
    free(lc_time->month[0xb]);
    free(lc_time->ampm[0]);
    free(lc_time->ampm[1]);
    free(lc_time->ww_sdatefmt);
    free(lc_time->ww_ldatefmt);
    free(lc_time->ww_timefmt);
  }
  return;
}
