// Name: crt_unknown.c_FUN_005af64c
// Address: 005af64c
// Address Range: [[005af64c, 005af69c]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005af64c(void)

#include "nocturne.h"

void FUN_005af64c(void)

{
  FUN_005b0bb0();
  if (g_CHAR_PTR_PTR_02d25924 != (char **)0x0) {
    debugFree(g_CHAR_PTR_PTR_02d25924);
    g_CHAR_PTR_PTR_02d25924 = (char **)0x0;
  }
  if (g_PTR_02d261e0 != (byte *)0x0) {
    debugFree(g_PTR_02d261e0);
    g_PTR_02d261e0 = (byte *)0x0;
  }
  if (g_CHAR_PTR_0060797d != (char *)0x0) {
    FreeEnvironmentStringsA(g_CHAR_PTR_0060797d);
  }
  return;
}
