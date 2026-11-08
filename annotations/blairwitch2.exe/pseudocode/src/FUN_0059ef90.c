// Name: FUN_0059ef90
// Address: 0059ef90
// Address Range: [[0059ef90, 0059f0d3]]
// Convention: unknown
// Signature: void FUN_0059ef90(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0059ef90(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x10a6c) != 0) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x150))(param_1,param_2);
  }
  iVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  if (iVar3 != 0) {
    if ((*(int *)(param_1 + 0x10a6c) == 0) &&
       (fVar1 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x20) - *(float *)(param_1 + 0x20),
       fVar2 = *(float *)(*(int *)(param_1 + 0x10a78) + 0x28) - *(float *)(param_1 + 0x28),
       *(float *)(param_1 + 0x11374) <= SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
      *(uint *)(param_1 + 0x10a78) = 0;
      uVar4 = FUN_0059db90(param_1 + 0x10af8);
      FUN_0059d8e0(param_1 + 0x10af8,uVar4);
      return;
    }
    uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0x10a78) + 0x2b0) + 0xcc))
                      (*(int *)(param_1 + 0x10a78),param_1 + 0x11424,
                       *(uint *)(param_1 + 0x11394),0x3e32b8c2);
    iVar3 = FUN_00423000(param_1,*(int *)(param_1 + 0x10a78) + 0x20,uVar4);
    if (iVar3 != 0) {
      FUN_0059d880(param_1 + 0x10af8,"ChaseComplete");
      return;
    }
    fVar1 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x20);
    fVar2 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0x10a78) + 0x28);
    iVar3 = *(int *)(param_1 + 0x11388);
    if (*(float *)(param_1 + 0x11398) < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      iVar3 = *(int *)(param_1 + 0x1138c);
    }
    if (-1 < iVar3) {
      FUN_00503620(param_1 + 0x2b4,iVar3,1);
      return;
    }
  }
  return;
}
