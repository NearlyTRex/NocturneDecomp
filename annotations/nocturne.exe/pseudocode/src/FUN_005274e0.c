// Name: FUN_005274e0
// Address: 005274e0
// Address Range: [[005274e0, 00527512]]
// Convention: unknown
// Signature: uint FUN_005274e0(void)

#include "nocturne.h"

uint FUN_005274e0(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  while ((*(int *)(&DAT_02dbd3e8 + iVar1) == 0 || (*(int *)(&DAT_02dbd3e4 + iVar1) == 0))) {
    iVar1 = iVar1 + 0x120;
    uVar2 = uVar2 + 1;
    if (0x47ff < iVar1) {
      return 0;
    }
  }
  return *(int *)(&DAT_02dbd3e4 + iVar1) << 6 | uVar2;
}
