// Name: crt_time.c_is_leap_year_FUN_0056cea0
// Address: 0056cea0
// Address Range: [[0056cea0, 0056ced7]]
// Convention: __cdecl
// Signature: int __cdecl crt_time_c_is_leap_year_FUN_0056cea0(int year)

#include "nocturne.h"

int __cdecl is_leap_year(int year)

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
