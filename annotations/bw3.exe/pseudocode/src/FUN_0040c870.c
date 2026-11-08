// Name: FUN_0040c870
// Address: 0040c870
// Address Range: [[0040c870, 0040c89e]]
// Convention: unknown
// Signature: void FUN_0040c870(void)

#include "nocturne.h"

void FUN_0040c870(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < DAT_007df9c4) {
    iVar3 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007df9c8 + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      **(uint **)(*piVar1 + 0x30) = *(uint *)(*piVar1 + 0x34);
    } while (iVar2 < DAT_007df9c4);
  }
  return;
}
