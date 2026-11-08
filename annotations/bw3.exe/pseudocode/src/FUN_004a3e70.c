// Name: FUN_004a3e70
// Address: 004a3e70
// Address Range: [[004a3e70, 004a3ec7]]
// Convention: unknown
// Signature: void FUN_004a3e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3e70(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  FUN_004a0960(_DAT_01d028c4 * 0x60 + 0x1d028c8,param_2,param_3,param_4,param_5);
  _DAT_01d028c4 = _DAT_01d028c4 + 1;
  if (_DAT_01d028c4 < 0x32) {
    return;
  }
  _DAT_01d028c4 = 0;
  return;
}
