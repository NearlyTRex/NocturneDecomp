// Name: crt_unknown.c_FUN_0057104c
// Address: 0057104c
// Address Range: [[0057104c, 0057109c]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0057104c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057104c(void)

{
  func_0x00572cb0();
  if (_DAT_02de54a4 != (void *)0x0) {
    free(_DAT_02de54a4);
    _DAT_02de54a4 = (void *)0x0;
  }
  if (_DAT_02de5d60 != (void *)0x0) {
    free(_DAT_02de5d60);
    _DAT_02de5d60 = (void *)0x0;
  }
  if (_DAT_005c1d09 != (LPCH)0x0) {
    FreeEnvironmentStringsA(_DAT_005c1d09);
  }
  return;
}
