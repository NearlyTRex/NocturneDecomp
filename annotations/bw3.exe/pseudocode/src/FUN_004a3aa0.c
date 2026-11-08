// Name: FUN_004a3aa0
// Address: 004a3aa0
// Address Range: [[004a3aa0, 004a3ae3]]
// Convention: unknown
// Signature: void FUN_004a3aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a3aa0(uint param_1,uint param_2,uint param_3)

{
  FUN_0049d590(_DAT_01cfaff4 * 0x70 + 0x1cfaff8,param_2,param_3);
  _DAT_01cfaff4 = _DAT_01cfaff4 + 1;
  if (_DAT_01cfaff4 < 0x14) {
    return;
  }
  _DAT_01cfaff4 = 0;
  return;
}
