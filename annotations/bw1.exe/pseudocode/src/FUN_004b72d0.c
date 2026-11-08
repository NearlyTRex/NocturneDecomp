// Name: FUN_004b72d0
// Address: 004b72d0
// Address Range: [[004b72d0, 004b7317]]
// Convention: unknown
// Signature: void FUN_004b72d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b72d0(uint param_1,uint param_2,uint param_3)

{
  (*(code *)**(uint **)(&DAT_01cbc148 + _DAT_01cbc108 * 0x40))
            (_DAT_01cbc108 * 0x40 + 0x1cbc10c,param_2,param_3);
  _DAT_01cbc108 = _DAT_01cbc108 + 1;
  if (_DAT_01cbc108 < 0x100) {
    return;
  }
  _DAT_01cbc108 = 0;
  return;
}
