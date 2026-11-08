// Name: FUN_004a2b10
// Address: 004a2b10
// Address Range: [[004a2b10, 004a2b6e]]
// Convention: unknown
// Signature: void FUN_004a2b10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2b10(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8)

{
  if (0x3f < _DAT_01cf5088) {
    return;
  }
  FUN_0049b030(_DAT_01cf5088 * 0x40 + 0x1cf508c,param_2,param_3,param_4,0,0,param_5,param_6,param_7,
               0x3CA3D70A,param_8);
  _DAT_01cf5088 = _DAT_01cf5088 + 1;
  return;
}
