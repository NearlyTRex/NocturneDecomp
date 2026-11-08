// Name: FUN_00403de0
// Address: 00403de0
// Address Range: [[00403de0, 00403e69]]
// Convention: unknown
// Signature: int FUN_00403de0(int param_1)

#include "nocturne.h"

int FUN_00403de0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DAT_007303dc = *(uint *)(param_1 + 4);
  if (((*(byte *)(param_1 + 7) & 0x80) != 0) && ((*(byte *)(param_1 + 7) & 0x40) == 0)) {
    uVar3 = *(uint *)(param_1 + 4) & 0xff;
    uVar1 = *(int *)(param_1 + 4) >> 8 & 0xff;
    uVar2 = *(int *)(param_1 + 4) >> 0x10 & 0xff;
    if (DAT_005fba20 != 0x20) {
      DAT_007303dc = uVar3 << 0x10 | uVar1 << 8 | uVar2;
      return param_1 + 8;
    }
    DAT_007303dc = uVar2 << (DAT_01c6af8c & 0x1f) |
                   uVar1 << (DAT_01c6af80 & 0x1f) | uVar3 << (DAT_01c6af74 & 0x1f);
  }
  return param_1 + 8;
}
