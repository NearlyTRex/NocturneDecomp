// Name: crt_unknown.c_FUN_0056e5ac
// Address: 0056e5ac
// Address Range: [[0056e5ac, 0056e605]]
// Convention: unknown
// Signature: bool crt_unknown_c_FUN_0056e5ac(void)

#include "nocturne.h"

bool FUN_0056e5ac(void)

{
  if (g_INT_005c1ab8 == -1) {
    g_INT_005c1ab8 = TlsAlloc();
    if ((0x7fff < g_WORD_005c1d11) && (g_BYTE_005c1d0f < 4)) {
      while ((g_INT_005c1ab8 != 0xffffffff && ((uint)g_INT_005c1ab8 < 3))) {
        g_INT_005c1ab8 = TlsAlloc();
      }
    }
  }
  return g_INT_005c1ab8 != 0xffffffff;
}
