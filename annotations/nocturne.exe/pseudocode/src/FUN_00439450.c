// Name: FUN_00439450
// Address: 00439450
// Address Range: [[00439450, 004394a5]]
// Convention: unknown
// Signature: void FUN_00439450(int param_1)

#include "nocturne.h"

void FUN_00439450(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1 << ((byte)*(uint *)(param_1 + 4) & 0x1f);
  iVar2 = 0;
  *(int *)(param_1 + 0xc) = iVar1;
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      *(int *)(*(int *)(param_1 + 0x10) + iVar1) = iVar2;
      *(uint *)(*(int *)(param_1 + 0x10) + 4 + iVar1) = 0xffffffff;
      *(uint *)(*(int *)(param_1 + 0x10) + 8 + iVar1) = 0xffffffff;
      *(uint *)(*(int *)(param_1 + 0x10) + 0xc + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 4);
  return;
}
