// Name: crt_unknown.c_staticFinal_FUN_00602748
// Address: 00602748
// Address Range: [[00602748, 00602782]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_staticFinal_FUN_00602748(void)

#include "nocturne.h"

void __cdecl staticFinal(void)

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
