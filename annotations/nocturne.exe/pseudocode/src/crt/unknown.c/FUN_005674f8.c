// Name: crt_unknown.c_FUN_005674f8
// Address: 005674f8
// Address Range: [[005674f8, 00567532]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005674f8(void)

#include "nocturne.h"

void FUN_005674f8(void)

{
  if (g_CommandLineA != (char *)0x0) {
    free(g_CommandLineA);
    g_CommandLineA = (char *)0x0;
  }
  if (g_CommandLineW != (WCHAR *)0x0) {
    free(g_CommandLineW);
    g_CommandLineW = (WCHAR *)0x0;
  }
  return;
}
