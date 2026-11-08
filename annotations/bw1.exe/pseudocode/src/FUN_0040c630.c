// Name: FUN_0040c630
// Address: 0040c630
// Address Range: [[0040c630, 0040c65e]]
// Convention: unknown
// Signature: void FUN_0040c630(void)

#include "nocturne.h"

void FUN_0040c630(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < DAT_007c3044) {
    iVar3 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007c3048 + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      **(uint **)(*piVar1 + 0x30) = *(uint *)(*piVar1 + 0x34);
    } while (iVar2 < DAT_007c3044);
  }
  return;
}
