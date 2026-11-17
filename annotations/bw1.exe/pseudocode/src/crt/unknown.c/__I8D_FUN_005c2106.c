// Name: crt_unknown.c___I8D_FUN_005c2106
// Address: 005c2106
// Address Range: [[005c2106, 005c215a]]
// Convention: unknown
// Signature: longlong crt_unknown_c___I8D_FUN_005c2106(longlong dividend,longlong divisor)

#include "nocturne.h"

/* WARNING: Unknown calling convention */

longlong __I8D(longlong dividend,longlong divisor)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (dividend < 0) {
    if (divisor < 0) {
      lVar1 = FUN_005c215b();
      return lVar1;
    }
    uVar2 = FUN_005c215b();
    return CONCAT44(-(uint)((int)uVar2 != 0) - (int)((ulonglong)uVar2 >> 0x20),-(int)uVar2);
  }
  if (-1 < divisor) {
    lVar1 = FUN_005c215b();
    return lVar1;
  }
  uVar2 = FUN_005c215b();
  return CONCAT44(-(uint)((int)uVar2 != 0) - (int)((ulonglong)uVar2 >> 0x20),-(int)uVar2);
}
