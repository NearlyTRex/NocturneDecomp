// Name: FUN_00551330
// Address: 00551330
// Address Range: [[00551330, 0055137b]]
// Convention: unknown
// Signature: uint FUN_00551330(uint param_1)

#include "nocturne.h"

uint FUN_00551330(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0x3f) + 1;
  if (uVar2 < 0x40) {
    iVar1 = uVar2 * 0x11c;
    do {
      if ((*(int *)(&DAT_0263cf84 + iVar1) != 0) && (*(int *)(&DAT_0263cf80 + iVar1) != 0)) {
        return *(int *)(&DAT_0263cf80 + iVar1) << 6 | uVar2;
      }
      iVar1 = iVar1 + 0x11c;
      uVar2 = uVar2 + 1;
    } while (iVar1 < 0x4700);
  }
  return 0;
}
