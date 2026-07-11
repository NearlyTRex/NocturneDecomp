// Name: FUN_0040d8f0
// Address: 0040d8f0
// Address Range: [[0040d8f0, 0040d927]]
// Convention: unknown
// Signature: void FUN_0040d8f0(void)

#include "nocturne.h"

void FUN_0040d8f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_00763e94) {
    iVar2 = 0;
    do {
      piVar1 = (int *)((int)&DAT_00763e98 + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      **(uint **)(*piVar1 + 0x30) = 1;
    } while (iVar3 < DAT_00763e94);
  }
  return;
}
