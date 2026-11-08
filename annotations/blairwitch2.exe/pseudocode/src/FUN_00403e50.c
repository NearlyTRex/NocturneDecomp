// Name: FUN_00403e50
// Address: 00403e50
// Address Range: [[00403e50, 00403ed9]]
// Convention: unknown
// Signature: int FUN_00403e50(int param_1)

#include "nocturne.h"

int FUN_00403e50(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DAT_0070ca5c = *(uint *)(param_1 + 4);
  if (((*(byte *)(param_1 + 7) & 0x80) != 0) && ((*(byte *)(param_1 + 7) & 0x40) == 0)) {
    uVar3 = *(uint *)(param_1 + 4) & 0xff;
    uVar1 = *(int *)(param_1 + 4) >> 8 & 0xff;
    uVar2 = *(int *)(param_1 + 4) >> 0x10 & 0xff;
    if (DAT_006141c0 != 0x20) {
      DAT_0070ca5c = uVar3 << 0x10 | uVar1 << 8 | uVar2;
      return param_1 + 8;
    }
    DAT_0070ca5c = uVar2 << (DAT_01c3582c & 0x1f) |
                   uVar1 << (DAT_01c35820 & 0x1f) | uVar3 << (DAT_01c35814 & 0x1f);
  }
  return param_1 + 8;
}
