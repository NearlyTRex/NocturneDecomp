// Name: crt_unknown.c_FUN_005c53e8
// Address: 005c53e8
// Address Range: [[005c53e8, 005c5422]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c53e8(void)

#include "nocturne.h"

void FUN_005c53e8(void)

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
