// Name: FUN_00483cf0
// Address: 00483cf0
// Address Range: [[00483cf0, 00483d6b]]
// Convention: unknown
// Signature: void FUN_00483cf0(int param_1,int param_2,int param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483cf0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 << (DAT_01c4e9ec & 0x1f) |
          param_2 << (DAT_01c4e9d4 & 0x1f) | param_3 << (DAT_01c4e9e0 & 0x1f);
  _DAT_01c4f020 = param_4 | param_2 << 0x10 | param_3 << 8;
  if (_DAT_01c50948 == 0) {
    if (DAT_0061b4a0 == 0x20) {
      _DAT_01c4f020 = uVar1;
    }
    _DAT_01c4f020 = _DAT_01c4f020 | *(uint *)(param_1 + 0x14);
    return;
  }
  if (DAT_0061b4a0 == 0x20) {
    _DAT_01c4f020 = uVar1;
  }
  return;
}
