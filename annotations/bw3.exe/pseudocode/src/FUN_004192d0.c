// Name: FUN_004192d0
// Address: 004192d0
// Address Range: [[004192d0, 004193b7]]
// Convention: unknown
// Signature: void FUN_004192d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004192d0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  FUN_00556be0(*(uint *)(param_1 + 0xd078));
  if (*(int *)(param_2 + 0x30) == 0x70) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    iVar2 = FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar2 == 0) goto LAB_0041934a;
    uVar3 = 3;
  }
  else {
    if ((*(int *)(param_1 + 0xd0ec) < 1) &&
       (((*(uint *)(param_1 + 0x3254) & 0x7fffffff) == 0 || (*(int *)(param_1 + 0x3258) != 0)))) {
      *(uint *)(param_1 + 0x2538) = 0x3f800000;
      FUN_00419550(param_1);
      *(int *)(param_1 + 0xd0ec) = *(int *)(param_1 + 0xd0ec) + 1;
      FUN_00489b80(param_1,param_2);
      return;
    }
    *(uint *)(param_1 + 0x2538) = 0;
    iVar2 = FUN_004fc070(param_1 + 0x158);
    if ((*(int *)(iVar2 + 0x24) == 5) || (*(int *)(iVar2 + 0x24) == 4)) goto LAB_0041934a;
    uVar3 = 4;
  }
  FUN_004fc0d0(param_1 + 0x158,uVar3,1);
LAB_0041934a:
  FUN_00489b80(param_1,param_2);
  return;
}
