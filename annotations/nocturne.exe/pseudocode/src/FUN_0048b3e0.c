// Name: FUN_0048b3e0
// Address: 0048b3e0
// Address Range: [[0048b3e0, 0048b43e]]
// Convention: unknown
// Signature: void FUN_0048b3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048b3e0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

{
  if (0x3f < _DAT_01c5c700) {
    return;
  }
  FUN_004858f0(_DAT_01c5c700 * 0x40 + 0x1c5c704,param_2,param_3,param_4,0,0,param_5,param_6,param_7,
               0x3CA3D70A,param_8);
  _DAT_01c5c700 = _DAT_01c5c700 + 1;
  return;
}
