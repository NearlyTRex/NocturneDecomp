// Name: FUN_005b0ff9
// Address: 005b0ff9
// Address Range: [[005b0ff9, 005b1081]]
// Convention: unknown
// Signature: uint FUN_005b0ff9(int *param_1)

#include "nocturne.h"

uint FUN_005b0ff9(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = FUN_005abd9f(param_1,1);
  if (iVar2 == 0) {
    param_1[1] = 0;
    return 0xffffffff;
  }
  iVar2 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
  if (*(uint *)(iVar2 + 0x10) <= *(uint *)(iVar2 + 0x14)) {
    iVar4 = (**(code **)(*(int *)(iVar2 + 0x28) + 0x10))(iVar2);
    if (iVar4 == -1) {
      uVar3 = 0xffffffff;
      goto LAB_005b1038;
    }
  }
  pbVar1 = *(byte **)(iVar2 + 0x14);
  *(byte **)(iVar2 + 0x14) = pbVar1 + 1;
  uVar3 = (uint)*pbVar1;
LAB_005b1038:
  if (uVar3 != 0xffffffff) {
    param_1[1] = 1;
    return uVar3;
  }
  FUN_005abc85(*(int *)(*param_1 + 4) + (int)param_1,4);
  param_1[1] = 0;
  return 0xffffffff;
}
