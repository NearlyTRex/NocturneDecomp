// Name: FUN_0049e7f0
// Address: 0049e7f0
// Address Range: [[0049e7f0, 0049e846]]
// Convention: unknown
// Signature: void FUN_0049e7f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e7f0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  FUN_0049b2e0(_DAT_01ca15a4 * 0x24 + 0x1ca15a8,param_2,param_3,param_4,param_5,param_6);
  _DAT_01ca15a4 = _DAT_01ca15a4 + 1;
  if (_DAT_01ca15a4 < 100) {
    return;
  }
  _DAT_01ca15a4 = 0;
  return;
}
