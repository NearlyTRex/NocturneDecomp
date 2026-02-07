// Name: crt_environ.c_staticFinal_FUN_0060c73c
// Address: 0060c73c
// Address Range: [[0060c73c, 0060c78c]]
// Convention: __cdecl
// Signature: void __cdecl crt_environ_c_staticFinal_FUN_0060c73c(void)

#include "nocturne.h"

void __cdecl staticFinal(void)

{
  FUN_0060e4f0();
  if (g_EnvironmentBlock != (char **)0x0) {
    free(g_EnvironmentBlock);
    g_EnvironmentBlock = (char **)0x0;
  }
  if (INT_03f9c150 != 0) {
    free((void *)INT_03f9c150);
    INT_03f9c150 = 0;
  }
  if (g_EnvironmentStrings != (char *)0x0) {
    (*g_FreeEnvironmentStringsAFunc)(g_EnvironmentStrings);
  }
  return;
}
