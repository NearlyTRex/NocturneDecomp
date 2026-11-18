// Name: crt_unknown.c_FUN_005a8258
// Address: 005a8258
// Address Range: [[005a8258, 005a8292]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a8258(void)

#include "nocturne.h"

void FUN_005a8258(void)

{
  if (g_CommandLineA != (char *)0x0) {
    debugFree(g_CommandLineA);
    g_CommandLineA = (char *)0x0;
  }
  if (g_CommandLineW != (WCHAR *)0x0) {
    debugFree(g_CommandLineW);
    g_CommandLineW = (WCHAR *)0x0;
  }
  return;
}
