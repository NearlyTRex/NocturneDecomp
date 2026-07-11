// Name: FUN_0040d8c0
// Address: 0040d8c0
// Address Range: [[0040d8c0, 0040d8ee]]
// Convention: unknown
// Signature: void FUN_0040d8c0(void)

#include "nocturne.h"

void FUN_0040d8c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < DAT_00763e94) {
    iVar3 = 0;
    do {
      piVar1 = (int *)((int)&DAT_00763e98 + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      **(uint **)(*piVar1 + 0x30) = *(uint *)(*piVar1 + 0x34);
    } while (iVar2 < DAT_00763e94);
  }
  return;
}
