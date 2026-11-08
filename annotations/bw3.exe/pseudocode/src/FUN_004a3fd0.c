// Name: FUN_004a3fd0
// Address: 004a3fd0
// Address Range: [[004a3fd0, 004a4023]]
// Convention: unknown
// Signature: void FUN_004a3fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3fd0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_004a0480(_DAT_01d0ce7c * 0xc + 0x1d0ce80,param_2,param_3,param_4);
  _DAT_01d0ce7c = _DAT_01d0ce7c + 1;
  if (_DAT_01d0ce7c < 4) {
    return;
  }
  _DAT_01d0ce7c = 0;
  return;
}
