// Name: FUN_0046d3d0
// Address: 0046d3d0
// Address Range: [[0046d3d0, 0046d44b]]
// Convention: unknown
// Signature: void FUN_0046d3d0(int param_1,int param_2,int param_3,uint param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d3d0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = param_4 << (DAT_01c6af8c & 0x1f) |
          param_2 << (DAT_01c6af74 & 0x1f) | param_3 << (DAT_01c6af80 & 0x1f);
  _DAT_01c6b5c0 = param_4 | param_2 << 0x10 | param_3 << 8;
  if (_DAT_01c6cee8 == 0) {
    if (DAT_005fba20 == 0x20) {
      _DAT_01c6b5c0 = uVar1;
    }
    _DAT_01c6b5c0 = _DAT_01c6b5c0 | *(uint *)(param_1 + 0x14);
    return;
  }
  if (DAT_005fba20 == 0x20) {
    _DAT_01c6b5c0 = uVar1;
  }
  return;
}
