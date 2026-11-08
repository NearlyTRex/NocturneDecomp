// Name: FUN_00558860
// Address: 00558860
// Address Range: [[00558860, 0055889d]]
// Convention: unknown
// Signature: void FUN_00558860(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558860(uint param_1,uint param_2,uint param_3)

{
  _DAT_02cf3400 = param_1;
  _DAT_02cf3404 = param_2;
  _DAT_02cf3408 = param_3;
  if (_DAT_02cf3280 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf3280 + 0x2c))(_DAT_02cf3280,param_1,param_2,param_3);
  return;
}
