// Name: crt_unknown.c_FUN_005adaec
// Address: 005adaec
// Address Range: [[005adaec, 005adb45]]
// Convention: unknown
// Signature: bool crt_unknown_c_FUN_005adaec(void)

#include "nocturne.h"

bool FUN_005adaec(void)

{
  if (DAT_0060799c == 0xffffffff) {
    DAT_0060799c = TlsAlloc();
    if ((0x7fff < DAT_00607985) && (DAT_00607983 < 4)) {
      while ((DAT_0060799c != 0xffffffff && (DAT_0060799c < 3))) {
        DAT_0060799c = TlsAlloc();
      }
    }
  }
  return DAT_0060799c != 0xffffffff;
}
