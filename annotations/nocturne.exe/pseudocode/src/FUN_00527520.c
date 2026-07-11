// Name: FUN_00527520
// Address: 00527520
// Address Range: [[00527520, 00527566]]
// Convention: unknown
// Signature: uint FUN_00527520(uint param_1)

#include "nocturne.h"

uint FUN_00527520(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0x3f) + 1;
  if (uVar2 < 0x40) {
    iVar1 = uVar2 * 0x120;
    do {
      if ((*(int *)(&DAT_02dbd3e8 + iVar1) != 0) && (*(int *)(&DAT_02dbd3e4 + iVar1) != 0)) {
        return *(int *)(&DAT_02dbd3e4 + iVar1) << 6 | uVar2;
      }
      iVar1 = iVar1 + 0x120;
      uVar2 = uVar2 + 1;
    } while (iVar1 < 0x4800);
  }
  return 0;
}
