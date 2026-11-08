// Name: FUN_004b6f80
// Address: 004b6f80
// Address Range: [[004b6f80, 004b6fd8]]
// Convention: unknown
// Signature: void FUN_004b6f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6f80(uint param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  for (; 0 < param_4; param_4 = param_4 + -1) {
    FUN_004b2b50(&DAT_01cb5824 + _DAT_01cb5820 * 0x24,param_2,param_3,param_5);
    _DAT_01cb5820 = _DAT_01cb5820 + 1;
    if (499 < _DAT_01cb5820) {
      _DAT_01cb5820 = 0;
    }
  }
  return;
}
