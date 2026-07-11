// Name: FUN_00460f20
// Address: 00460f20
// Address Range: [[00460f20, 00460f9b]]
// Convention: unknown
// Signature: void FUN_00460f20(int param_1,int param_2,int param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460f20(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 << (DAT_01c0063c & 0x1f) |
          param_2 << (DAT_01c00624 & 0x1f) | param_3 << (DAT_01c00630 & 0x1f);
  _DAT_01c00c70 = param_4 | param_2 << 0x10 | param_3 << 8;
  if (_DAT_01c02594 == 0) {
    if (DAT_005b7624 == 0x20) {
      _DAT_01c00c70 = uVar1;
    }
    _DAT_01c00c70 = _DAT_01c00c70 | *(uint *)(param_1 + 0x14);
    return;
  }
  if (DAT_005b7624 == 0x20) {
    _DAT_01c00c70 = uVar1;
  }
  return;
}
