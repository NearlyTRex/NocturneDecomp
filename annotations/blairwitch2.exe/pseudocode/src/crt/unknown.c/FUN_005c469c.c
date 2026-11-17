// Name: crt_unknown.c_FUN_005c469c
// Address: 005c469c
// Address Range: [[005c469c, 005c46ec]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c469c(void)

#include "nocturne.h"

void FUN_005c469c(void)

{
  FUN_005c5b20();
  if (g_CHAR_PTR_PTR_026807e4 != (char **)0x0) {
    debugFree(g_CHAR_PTR_PTR_026807e4);
    g_CHAR_PTR_PTR_026807e4 = (char **)0x0;
  }
  if (g_PTR_026810a0 != (byte *)0x0) {
    debugFree(g_PTR_026810a0);
    g_PTR_026810a0 = (byte *)0x0;
  }
  if (g_CHAR_PTR_0061f281 != (char *)0x0) {
    FreeEnvironmentStringsA(g_CHAR_PTR_0061f281);
  }
  return;
}
