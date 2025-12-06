// Name: crt_unknown.c_staticFinal_FUN_0060c73c
// Address: 0060c73c
// Address Range: [[0060c73c, 0060c78c]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticFinal_FUN_0060c73c()

#include "nocturne.h"

void crt_unknown_c_staticFinal_FUN_0060c73c(void)

{
  crt_unknown_c_FUN_0060e4f0();
  if (g_EnvironmentBlock != (char **)0x0) {
    crt_memory_c_free_FUN_00601cd0(g_EnvironmentBlock);
    g_EnvironmentBlock = (char **)0x0;
  }
  if (DAT_03f9c150 != (void *)0x0) {
    crt_memory_c_free_FUN_00601cd0(DAT_03f9c150);
    DAT_03f9c150 = (void *)0x0;
  }
  if (g_EnvironmentStrings != (char *)0x0) {
    (*PTR_FreeEnvironmentStringsA_00611558)(g_EnvironmentStrings);
  }
  return;
}
