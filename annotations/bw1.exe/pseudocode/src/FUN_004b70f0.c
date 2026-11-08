// Name: FUN_004b70f0
// Address: 004b70f0
// Address Range: [[004b70f0, 004b7146]]
// Convention: unknown
// Signature: void FUN_004b70f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b70f0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  FUN_004b3c80(_DAT_01cba030 * 0x24 + 0x1cba034,param_2,param_3,param_4,param_5,param_6);
  _DAT_01cba030 = _DAT_01cba030 + 1;
  if (_DAT_01cba030 < 100) {
    return;
  }
  _DAT_01cba030 = 0;
  return;
}
