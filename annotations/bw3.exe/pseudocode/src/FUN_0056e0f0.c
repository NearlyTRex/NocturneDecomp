// Name: FUN_0056e0f0
// Address: 0056e0f0
// Address Range: [[0056e0f0, 0056e1f6]]
// Convention: unknown
// Signature: void FUN_0056e0f0(int param_1)

#include "nocturne.h"

void FUN_0056e0f0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00408890(param_1);
  iVar2 = 0x01D81080;
  *(uint *)(param_1 + 0xf8) = 0;
  uVar1 = *(uint *)(iVar2 + 0x1008);
  *(uint *)(param_1 + 0x100) = 1;
  *(uint *)(param_1 + 0xfc) = uVar1;
  if (*(int *)(param_1 + 0x174) == 5) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  if (*(int *)(param_1 + 0x174) == 4) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  if (*(int *)(param_1 + 0x174) == 7) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  if (*(int *)(param_1 + 0x174) == 10) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  *(uint *)(param_1 + 0x2f0) = 0;
  *(uint *)(param_1 + 0x36c) = 0;
  iVar2 = FUN_005a3260(param_1 + 0x224,0x5d65ff);
  if (iVar2 == 0) {
    *(byte *)(param_1 + 0x224) = 0;
  }
  iVar2 = FUN_005a3260(param_1 + 0x288,0x5d6604);
  if (iVar2 == 0) {
    *(byte *)(param_1 + 0x288) = 0;
  }
  *(uint *)(param_1 + 0x104) = 0;
  if ((*(char *)(param_1 + 0x224) == '\0') && (*(char *)(param_1 + 0x288) == '\0')) {
    *(uint *)(param_1 + 0x104) = 1;
    return;
  }
  return;
}
