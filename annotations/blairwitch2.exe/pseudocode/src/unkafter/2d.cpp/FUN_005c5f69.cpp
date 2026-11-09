// Name: unkafter_2d.cpp_FUN_005c5f69
// Address: 005c5f69
// Address Range: [[005c5f69, 005c5ff1]]
// Convention: unknown
// Signature: uint unkafter_2d_cpp_FUN_005c5f69(int *param_1)

#include "nocturne.h"

uint unkafter_2d_cpp_FUN_005c5f69(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = FUN_005c0c9f(param_1,1);
  if (iVar2 == 0) {
    param_1[1] = 0;
    return 0xffffffff;
  }
  iVar2 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 4);
  if (*(uint *)(iVar2 + 0x10) <= *(uint *)(iVar2 + 0x14)) {
    iVar4 = (**(code **)(*(int *)(iVar2 + 0x28) + 0x10))(iVar2);
    if (iVar4 == -1) {
      uVar3 = 0xffffffff;
      goto LAB_005c5fa8;
    }
  }
  pbVar1 = *(byte **)(iVar2 + 0x14);
  *(byte **)(iVar2 + 0x14) = pbVar1 + 1;
  uVar3 = (uint)*pbVar1;
LAB_005c5fa8:
  if (uVar3 != 0xffffffff) {
    param_1[1] = 1;
    return uVar3;
  }
  FUN_005c0b85(*(int *)(*param_1 + 4) + (int)param_1,4);
  param_1[1] = 0;
  return 0xffffffff;
}
