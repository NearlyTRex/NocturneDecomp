// Name: crt_time.c_is_leap_year_FUN_00607820
// Address: 00607820
// Address Range: [[00607820, 00607857]]
// Convention: __cdecl
// Signature: int crt_time.c_is_leap_year_FUN_00607820(int year)

#include "nocturne.h"

int __cdecl crt_time_c_is_leap_year_FUN_00607820(int year)

{
  if ((year & 3U) == 0) {
    if ((int)((ulonglong)(uint)year % 100) != 0) {
      return 1;
    }
    if ((int)(((ulonglong)(uint)year % 100 << 0x20 | (ulonglong)(uint)year) % 400) == 0) {
      return 1;
    }
  }
  return 0;
}
