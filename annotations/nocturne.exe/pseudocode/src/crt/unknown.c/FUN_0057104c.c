// Name: crt_unknown.c_FUN_0057104c
// Address: 0057104c
// Address Range: [[0057104c, 0057109c]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0057104c(void)

#include "nocturne.h"

void FUN_0057104c(void)

{
  FUN_00572cb0();
  if (g_CHAR_PTR_PTR_02de54a4 != (char **)0x0) {
    free(g_CHAR_PTR_PTR_02de54a4);
    g_CHAR_PTR_PTR_02de54a4 = (char **)0x0;
  }
  if (g_PTR_02de5d60 != (byte *)0x0) {
    free(g_PTR_02de5d60);
    g_PTR_02de5d60 = (byte *)0x0;
  }
  if (g_CHAR_PTR_005c1d09 != (char *)0x0) {
    FreeEnvironmentStringsA(g_CHAR_PTR_005c1d09);
  }
  return;
}
