// Name: FUN_0059d360
// Address: 0059d360
// Address Range: [[0059d360, 0059d404]]
// Convention: unknown
// Signature: void FUN_0059d360(int param_1,int param_2)

#include "nocturne.h"

void FUN_0059d360(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_2 + 0x30) == 0x6a) {
    return;
  }
  iVar1 = param_1 + 0x158;
  FUN_00556be0(*(uint *)(param_1 + 0xd054));
  fVar2 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar2;
  if (0.0 < fVar2) {
    iVar3 = FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar3 == 0) goto LAB_0059d3d8;
    FUN_004fc070(iVar1);
    uVar4 = 6;
  }
  else {
    *(uint *)(param_1 + 0x2540) = 0;
    *(uint *)(param_1 + 0x2538) = 0;
    iVar3 = FUN_004fc070(iVar1);
    if ((*(int *)(iVar3 + 0x24) == 7) || (*(int *)(iVar3 + 0x24) == 8)) goto LAB_0059d3d8;
    uVar4 = 7;
  }
  FUN_004fc0d0(iVar1,uVar4,1);
LAB_0059d3d8:
  FUN_00489b80(param_1,param_2);
  return;
}
