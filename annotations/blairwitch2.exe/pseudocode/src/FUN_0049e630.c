// Name: FUN_0049e630
// Address: 0049e630
// Address Range: [[0049e630, 0049e673]]
// Convention: unknown
// Signature: void FUN_0049e630(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e630(uint param_1,uint param_2,uint param_3)

{
  FUN_00499610(_DAT_01c9c4d0 * 0x70 + 0x1c9c4d4,param_2,param_3);
  _DAT_01c9c4d0 = _DAT_01c9c4d0 + 1;
  if (_DAT_01c9c4d0 < 0x14) {
    return;
  }
  _DAT_01c9c4d0 = 0;
  return;
}
