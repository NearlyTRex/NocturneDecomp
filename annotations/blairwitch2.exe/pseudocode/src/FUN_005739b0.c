// Name: FUN_005739b0
// Address: 005739b0
// Address Range: [[005739b0, 00573a55]]
// Convention: unknown
// Signature: void FUN_005739b0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005739b0(uint *param_1)

{
  code *pcVar1;
  uint *puVar2;
  
  param_1[0x6002] = 0;
  puVar2 = param_1 + 1;
  param_1[0x6001] = 0;
  do {
    if (puVar2[0x11] != 0) {
      FUN_005b86a0(puVar2[0x11]);
    }
    if (puVar2[0x12] != 0) {
      FUN_005b86a0(puVar2[0x12]);
    }
    if (puVar2[0x13] != 0) {
      FUN_005b86a0(puVar2[0x13]);
    }
    if (puVar2[0x14] != 0) {
      FUN_005b86a0(puVar2[0x14]);
    }
    puVar2 = puVar2 + 0x18;
  } while (puVar2 != param_1 + 0x6001);
  FUN_005b77c0(param_1 + 1,0,0x18000);
  pcVar1 = _DAT_0264bcbc;
  *param_1 = 0;
  if (pcVar1 == (code *)0x0) {
    return;
  }
  (*_DAT_0264bcbc)();
  return;
}
