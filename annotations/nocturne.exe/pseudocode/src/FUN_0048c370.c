// Name: FUN_0048c370
// Address: 0048c370
// Address Range: [[0048c370, 0048c3b3]]
// Convention: unknown
// Signature: void FUN_0048c370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048c370(uint param_1,uint param_2,uint param_3)

{
  FUN_004876d0(_DAT_01c625f4 * 0x70 + 0x1c625f8,param_2,param_3);
  _DAT_01c625f4 = _DAT_01c625f4 + 1;
  if (_DAT_01c625f4 < 0x14) {
    return;
  }
  _DAT_01c625f4 = 0;
  return;
}
