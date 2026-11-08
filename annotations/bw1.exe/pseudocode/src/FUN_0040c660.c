// Name: FUN_0040c660
// Address: 0040c660
// Address Range: [[0040c660, 0040c697]]
// Convention: unknown
// Signature: void FUN_0040c660(void)

#include "nocturne.h"

void FUN_0040c660(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_007c3044) {
    iVar2 = 0;
    do {
      piVar1 = (int *)((int)&DAT_007c3048 + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      **(uint **)(*piVar1 + 0x30) = 1;
    } while (iVar3 < DAT_007c3044);
  }
  return;
}
