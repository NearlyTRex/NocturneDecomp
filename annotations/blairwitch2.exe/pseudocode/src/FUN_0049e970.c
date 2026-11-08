// Name: FUN_0049e970
// Address: 0049e970
// Address Range: [[0049e970, 0049e9c7]]
// Convention: unknown
// Signature: void FUN_0049e970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e970(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  FUN_0049b660(_DAT_01ca23b8 * 0x60 + 0x1ca23bc,param_2,param_3,param_4,param_5);
  _DAT_01ca23b8 = _DAT_01ca23b8 + 1;
  if (_DAT_01ca23b8 < 0x32) {
    return;
  }
  _DAT_01ca23b8 = 0;
  return;
}
