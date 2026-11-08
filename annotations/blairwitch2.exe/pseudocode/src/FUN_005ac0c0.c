// Name: FUN_005ac0c0
// Address: 005ac0c0
// Address Range: [[005ac0c0, 005ac1f9]]
// Convention: unknown
// Signature: void FUN_005ac0c0(int param_1,float param_2)

#include "nocturne.h"

void FUN_005ac0c0(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x1185c) == 0) {
    FUN_0059d880(param_1 + 0x10af8,"?ChaseFoodComplete" + 1);
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1185c) + 0x474);
  if ((iVar1 != 0) && (param_1 != iVar1)) {
    *(uint *)(param_1 + 0x1185c) = 0;
    FUN_0059d880(param_1 + 0x10af8,"ChaseFoodComplete");
    return;
  }
  iVar1 = FUN_00423000(param_1,*(int *)(param_1 + 0x1185c) + 0x20,0,param_1 + 0x11424,
                       *(uint *)(param_1 + 0x1142c),0x3eb2b8c2);
  if (iVar1 == 0) {
    FUN_00503620(param_1 + 0x2b4,2,1);
    return;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1185c) + 0x2b0) + 0x90))
            (*(int *)(param_1 + 0x1185c),param_1);
  *(uint *)(param_1 + 0x10a78) = 0;
  FUN_00503620(param_1 + 0x2b4,9,1);
  param_2 = *(float *)(param_1 + 0x11868) - param_2;
  *(float *)(param_1 + 0x11868) = param_2;
  if (0.0 < param_2) {
    return;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1185c) + 0x2b0) + 0x94))(*(int *)(param_1 + 0x1185c),0)
  ;
  FUN_004fc7b0(0x01D182F0,*(uint *)(param_1 + 0x1185c),1);
  uVar2 = FUN_0059db90(param_1 + 0x10af8);
  FUN_0059d8e0(param_1 + 0x10af8,uVar2);
  return;
}
