// Name: crt_locale.c___free_lconv_mon_FUN_1000df60
// Address: 1000df60
// Address Range: [[1000df60, 1000dfc5]]
// Convention: __cdecl
// Signature: void __cdecl crt_locale_c___free_lconv_mon_FUN_1000df60(lconv *lc)

#include "nocturne.h"

void __cdecl __free_lconv_mon(lconv *lc)

{
  if ((lc != (lconv *)0x0) && (lc->int_curr_symbol != &DAT_1001821c)) {
    free(lc->int_curr_symbol);
    free(lc->currency_symbol);
    free(lc->mon_decimal_point);
    free(lc->mon_thousands_sep);
    free(lc->mon_grouping);
    free(lc->positive_sign);
    free(lc->negative_sign);
  }
  return;
}
