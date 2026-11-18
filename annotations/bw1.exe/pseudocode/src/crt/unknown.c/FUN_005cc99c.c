// Name: crt_unknown.c_FUN_005cc99c
// Address: 005cc99c
// Address Range: [[005cc99c, 005cc9ec]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005cc99c(void)

#include "nocturne.h"

void FUN_005cc99c(void)

{
  FUN_005cde20();
  if (g_EnvironmentBlock != (char **)0x0) {
    debugFree(g_EnvironmentBlock);
    g_EnvironmentBlock = (char **)0x0;
  }
  if (g_PTR_02c9ff90 != (byte *)0x0) {
    debugFree(g_PTR_02c9ff90);
    g_PTR_02c9ff90 = (byte *)0x0;
  }
  if (g_EnvironmentStrings != (char *)0x0) {
    FreeEnvironmentStringsA(g_EnvironmentStrings);
  }
  return;
}
