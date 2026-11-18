// Name: crt_unknown.c_FUN_005c297c
// Address: 005c297c
// Address Range: [[005c297c, 005c29d5]]
// Convention: unknown
// Signature: bool crt_unknown_c_FUN_005c297c(void)

#include "nocturne.h"

bool FUN_005c297c(void)

{
  if (g_INT_0061f2a0 == -1) {
    g_INT_0061f2a0 = TlsAlloc();
    if ((0x7fff < (ushort)g_WindowsPlatformVersion) && (g_WindowsMinorVersion < 4)) {
      while ((g_INT_0061f2a0 != 0xffffffff && ((uint)g_INT_0061f2a0 < 3))) {
        g_INT_0061f2a0 = TlsAlloc();
      }
    }
  }
  return g_INT_0061f2a0 != 0xffffffff;
}
