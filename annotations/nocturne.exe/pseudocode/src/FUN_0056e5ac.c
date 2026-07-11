// Name: FUN_0056e5ac
// Address: 0056e5ac
// Address Range: [[0056e5ac, 0056e605]]
// Convention: unknown
// Signature: bool FUN_0056e5ac(void)

#include "nocturne.h"

bool FUN_0056e5ac(void)

{
  if (DAT_005c1ab8 == 0xffffffff) {
    DAT_005c1ab8 = TlsAlloc();
    if ((0x7fff < DAT_005c1d11) && (DAT_005c1d0f < 4)) {
      while ((DAT_005c1ab8 != 0xffffffff && (DAT_005c1ab8 < 3))) {
        DAT_005c1ab8 = TlsAlloc();
      }
    }
  }
  return DAT_005c1ab8 != 0xffffffff;
}
