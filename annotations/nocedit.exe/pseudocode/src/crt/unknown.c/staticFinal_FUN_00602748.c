// Name: crt_unknown.c_staticFinal_FUN_00602748
// Address: 00602748
// Address Range: [[00602748, 00602782]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticFinal_FUN_00602748()

#include "nocturne.h"

void crt_unknown_c_staticFinal_FUN_00602748(void)

{
  if (g_CommandLineA != (char *)0x0) {
    crt_memory_c_free_FUN_00601cd0(g_CommandLineA);
    g_CommandLineA = (char *)0x0;
  }
  if (g_CommandLineW != (WCHAR *)0x0) {
    crt_memory_c_free_FUN_00601cd0(g_CommandLineW);
    g_CommandLineW = (WCHAR *)0x0;
  }
  return;
}
