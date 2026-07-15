// Name: crt_time.c___tzset_FUN_1000fff0
// Address: 1000fff0
// Address Range: [[1000fff0, 10010021]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c___tzset_FUN_1000fff0(void)

#include "nocturne.h"

void __cdecl __tzset(void)

{
  if (DAT_100185dc == 0) {
    _lock(0xb);
    if (DAT_100185dc == 0) {
      _tzset();
      DAT_100185dc = DAT_100185dc + 1;
    }
    _unlock(0xb);
  }
  return;
}
