// Name: crt_unknown.c_FUN_005cac7c
// Address: 005cac7c
// Address Range: [[005cac7c, 005cacd5]]
// Convention: unknown
// Signature: bool crt_unknown_c_FUN_005cac7c(void)

#include "nocturne.h"

bool FUN_005cac7c(void)

{
  if (g_INT_006265f8 == -1) {
    g_INT_006265f8 = TlsAlloc();
    if ((0x7fff < (ushort)g_SHORT_006265e1) && (g_BYTE_006265df < 4)) {
      while ((g_INT_006265f8 != 0xffffffff && ((uint)g_INT_006265f8 < 3))) {
        g_INT_006265f8 = TlsAlloc();
      }
    }
  }
  return g_INT_006265f8 != 0xffffffff;
}
