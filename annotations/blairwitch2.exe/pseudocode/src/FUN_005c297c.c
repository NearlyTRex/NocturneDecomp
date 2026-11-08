// Name: FUN_005c297c
// Address: 005c297c
// Address Range: [[005c297c, 005c29d5]]
// Convention: unknown
// Signature: bool FUN_005c297c(void)

#include "nocturne.h"

bool FUN_005c297c(void)

{
  if (DAT_0061f2a0 == 0xffffffff) {
    DAT_0061f2a0 = TlsAlloc();
    if ((0x7fff < DAT_0061f289) && (DAT_0061f287 < 4)) {
      while ((DAT_0061f2a0 != 0xffffffff && (DAT_0061f2a0 < 3))) {
        DAT_0061f2a0 = TlsAlloc();
      }
    }
  }
  return DAT_0061f2a0 != 0xffffffff;
}
