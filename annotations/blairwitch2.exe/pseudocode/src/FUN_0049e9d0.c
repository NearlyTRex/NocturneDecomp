// Name: FUN_0049e9d0
// Address: 0049e9d0
// Address Range: [[0049e9d0, 0049ea17]]
// Convention: unknown
// Signature: void FUN_0049e9d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049e9d0(uint param_1,uint param_2,uint param_3)

{
  (*(code *)**(uint **)(&DAT_01ca36bc + _DAT_01ca367c * 0x40))
            (_DAT_01ca367c * 0x40 + 0x1ca3680,param_2,param_3);
  _DAT_01ca367c = _DAT_01ca367c + 1;
  if (_DAT_01ca367c < 0x100) {
    return;
  }
  _DAT_01ca367c = 0;
  return;
}
