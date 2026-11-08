// Name: FUN_0046b7f0
// Address: 0046b7f0
// Address Range: [[0046b7f0, 0046b86b]]
// Convention: unknown
// Signature: void FUN_0046b7f0(int param_1,int param_2,int param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b7f0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 << (DAT_01c3582c & 0x1f) |
          param_2 << (DAT_01c35814 & 0x1f) | param_3 << (DAT_01c35820 & 0x1f);
  _DAT_01c35e60 = param_4 | param_2 << 0x10 | param_3 << 8;
  if (_DAT_01c37788 == 0) {
    if (DAT_006141c0 == 0x20) {
      _DAT_01c35e60 = uVar1;
    }
    _DAT_01c35e60 = _DAT_01c35e60 | *(uint *)(param_1 + 0x14);
    return;
  }
  if (DAT_006141c0 == 0x20) {
    _DAT_01c35e60 = uVar1;
  }
  return;
}
