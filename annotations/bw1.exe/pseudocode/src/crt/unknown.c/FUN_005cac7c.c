// Name: crt_unknown.c_FUN_005cac7c
// Address: 005cac7c
// Address Range: [[005cac7c, 005cacd5]]
// Convention: unknown
// Signature: bool crt_unknown_c_FUN_005cac7c(void)

#include "nocturne.h"

bool FUN_005cac7c(void)

{
  if (DAT_006265f8 == 0xffffffff) {
    DAT_006265f8 = TlsAlloc();
    if ((0x7fff < DAT_006265e1) && (DAT_006265df < 4)) {
      while ((DAT_006265f8 != 0xffffffff && (DAT_006265f8 < 3))) {
        DAT_006265f8 = TlsAlloc();
      }
    }
  }
  return DAT_006265f8 != 0xffffffff;
}
