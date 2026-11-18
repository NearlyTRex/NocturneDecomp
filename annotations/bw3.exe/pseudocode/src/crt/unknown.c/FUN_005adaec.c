// Name: crt_unknown.c_FUN_005adaec
// Address: 005adaec
// Address Range: [[005adaec, 005adb45]]
// Convention: unknown
// Signature: bool crt_unknown_c_FUN_005adaec(void)

#include "nocturne.h"

bool FUN_005adaec(void)

{
  if (g_INT_0060799c == -1) {
    g_INT_0060799c = TlsAlloc();
    if ((0x7fff < (ushort)g_WindowsPlatformVersion) && (g_WindowsMinorVersion < 4)) {
      while ((g_INT_0060799c != 0xffffffff && ((uint)g_INT_0060799c < 3))) {
        g_INT_0060799c = TlsAlloc();
      }
    }
  }
  return g_INT_0060799c != 0xffffffff;
}
