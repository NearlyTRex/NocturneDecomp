// Name: FUN_005277b0
// Address: 005277b0
// Address Range: [[005277b0, 00527823]]
// Convention: unknown
// Signature: void FUN_005277b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005277b0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  _DAT_02dc78f8 = param_1;
  _DAT_02dc78fc = param_2;
  _DAT_02dc7900 = param_3;
  _DAT_02dc7904 = param_4;
  _DAT_02dc7908 = param_5;
  _DAT_02dc790c = param_6;
  if (_DAT_02dc8318 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc8318 + 0x20))
            (_DAT_02dc8318,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}
