// Name: FUN_005aa4a0
// Address: 005aa4a0
// Address Range: [[005aa4a0, 005aa59e]]
// Convention: unknown
// Signature: bool FUN_005aa4a0(int param_1)

#include "nocturne.h"

bool FUN_005aa4a0(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  *(uint *)(param_1 + 0x113c4) = 0x3f800000;
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  if ((*(int *)(iVar1 + 0x24) == 0) ||
     (iVar1 = FUN_005035c0(param_1 + 0x2b4), *(int *)(iVar1 + 0x24) == 6)) {
    *(uint *)(param_1 + 0x113c4) = 0;
  }
  uVar2 = FUN_005035c0(param_1 + 0x2b4,&DAT_005f0adf);
  iVar1 = FUN_005b8c30(uVar2);
  if (iVar1 == 0) {
    uVar2 = FUN_00503e60(param_1 + 0x2b4);
    *(uint *)(param_1 + 0x113c4) = uVar2;
  }
  uVar2 = FUN_005035c0(param_1 + 0x2b4,"sleep");
  iVar1 = FUN_005b8c30(uVar2);
  if (iVar1 != 0) {
    uVar2 = FUN_005035c0(param_1 + 0x2b4,&DAT_005f0aea);
    iVar1 = FUN_005b8c30(uVar2);
    if (iVar1 != 0) goto LAB_005aa54b;
  }
  fVar3 = (float)FUN_00503e60(param_1 + 0x2b4);
  *(float *)(param_1 + 0x113c4) = 1.0 - fVar3;
LAB_005aa54b:
  iVar1 = FUN_0059f980(param_1);
  return iVar1 != 0;
}
