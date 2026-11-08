// Name: FUN_004b6f30
// Address: 004b6f30
// Address Range: [[004b6f30, 004b6f73]]
// Convention: unknown
// Signature: void FUN_004b6f30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6f30(uint param_1,uint param_2,uint param_3)

{
  FUN_004b1fb0(_DAT_01cb4f5c * 0x70 + 0x1cb4f60,param_2,param_3);
  _DAT_01cb4f5c = _DAT_01cb4f5c + 1;
  if (_DAT_01cb4f5c < 0x14) {
    return;
  }
  _DAT_01cb4f5c = 0;
  return;
}
