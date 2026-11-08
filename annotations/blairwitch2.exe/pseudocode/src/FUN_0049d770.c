// Name: FUN_0049d770
// Address: 0049d770
// Address Range: [[0049d770, 0049d7d1]]
// Convention: unknown
// Signature: void FUN_0049d770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049d770(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,uint param_7,uint param_8,uint param_9,uint param_10)

{
  if (0x3f < _DAT_01c965dc) {
    return;
  }
  FUN_00497660(_DAT_01c965dc * 0x40 + 0x1c965e0,param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10,0);
  _DAT_01c965dc = _DAT_01c965dc + 1;
  return;
}
