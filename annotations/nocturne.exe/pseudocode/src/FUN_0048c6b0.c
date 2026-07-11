// Name: FUN_0048c6b0
// Address: 0048c6b0
// Address Range: [[0048c6b0, 0048c70c]]
// Convention: unknown
// Signature: void FUN_0048c6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048c6b0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  FUN_00489640(_DAT_01c684dc * 0x58 + 0x1c684e0,param_2,param_3,param_4,param_5);
  _DAT_01c684dc = _DAT_01c684dc + 1;
  if (_DAT_01c684dc < 0x32) {
    return;
  }
  _DAT_01c684dc = 0;
  return;
}
