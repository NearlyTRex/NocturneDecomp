// Name: crt_unknown.c___I8D_FUN_005b9d26
// Address: 005b9d26
// Address Range: [[005b9d26, 005b9d7a]]
// Convention: unknown
// Signature: longlong crt_unknown_c___I8D_FUN_005b9d26(longlong dividend,longlong divisor)

#include "nocturne.h"

/* WARNING: Unknown calling convention */

longlong __I8D(longlong dividend,longlong divisor)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (dividend < 0) {
    if (divisor < 0) {
      lVar1 = FUN_005b9d7b();
      return lVar1;
    }
    uVar2 = FUN_005b9d7b();
    return CONCAT44(-(uint)((int)uVar2 != 0) - (int)((ulonglong)uVar2 >> 0x20),-(int)uVar2);
  }
  if (-1 < divisor) {
    lVar1 = FUN_005b9d7b();
    return lVar1;
  }
  uVar2 = FUN_005b9d7b();
  return CONCAT44(-(uint)((int)uVar2 != 0) - (int)((ulonglong)uVar2 >> 0x20),-(int)uVar2);
}
