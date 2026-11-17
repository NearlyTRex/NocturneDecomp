// Name: crt_unknown.c_FUN_005bd118
// Address: 005bd118
// Address Range: [[005bd118, 005bd152]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bd118(void)

#include "nocturne.h"

void FUN_005bd118(void)

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
