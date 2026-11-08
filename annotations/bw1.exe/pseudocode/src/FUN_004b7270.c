// Name: FUN_004b7270
// Address: 004b7270
// Address Range: [[004b7270, 004b72c7]]
// Convention: unknown
// Signature: void FUN_004b7270(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b7270(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  FUN_004b4000(_DAT_01cbae44 * 0x60 + 0x1cbae48,param_2,param_3,param_4,param_5);
  _DAT_01cbae44 = _DAT_01cbae44 + 1;
  if (_DAT_01cbae44 < 0x32) {
    return;
  }
  _DAT_01cbae44 = 0;
  return;
}
