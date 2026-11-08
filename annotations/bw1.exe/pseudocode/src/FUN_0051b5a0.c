// Name: FUN_0051b5a0
// Address: 0051b5a0
// Address Range: [[0051b5a0, 0051b601]]
// Convention: unknown
// Signature: void FUN_0051b5a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b5a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1118);
  while (iVar1 != 0) {
    FUN_0051b4d0(param_1,*(uint *)(param_1 + 0x1118),1);
    iVar1 = *(int *)(param_1 + 0x1118);
  }
  FUN_0051b420(param_1);
  uVar2 = 0x01E82168;
  _DAT_01d06aa0 = 0;
  *(uint *)(param_1 + 0x1454) = 0xffffffff;
  FUN_00559580(uVar2);
  *(uint *)(param_1 + 0x1130) = 0;
  return;
}
