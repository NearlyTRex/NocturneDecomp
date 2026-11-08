// Name: FUN_005491b0
// Address: 005491b0
// Address Range: [[005491b0, 0054920e]]
// Convention: unknown
// Signature: void FUN_005491b0(void)

#include "nocturne.h"

void FUN_005491b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x20ccff4;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_02177ff4 + iVar1) == 0) {
      FUN_00541160(iVar2);
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 0x2ac0;
  } while (iVar1 != 0x100);
  iVar2 = 0x21780f4;
  iVar1 = 0;
  do {
    if (*(int *)(&DAT_02628554 + iVar1) == 0) {
      FUN_00540980(iVar2,1);
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 0x1e01c;
  } while (iVar1 != 0xa0);
  return;
}
