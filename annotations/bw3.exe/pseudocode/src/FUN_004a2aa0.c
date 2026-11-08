// Name: FUN_004a2aa0
// Address: 004a2aa0
// Address Range: [[004a2aa0, 004a2b01]]
// Convention: unknown
// Signature: void FUN_004a2aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a2aa0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,uint param_10)

{
  if (0x3f < _DAT_01cf5088) {
    return;
  }
  FUN_0049b030(_DAT_01cf5088 * 0x40 + 0x1cf508c,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10,0);
  _DAT_01cf5088 = _DAT_01cf5088 + 1;
  return;
}
