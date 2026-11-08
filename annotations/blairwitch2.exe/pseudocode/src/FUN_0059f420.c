// Name: FUN_0059f420
// Address: 0059f420
// Address Range: [[0059f420, 0059f56f]]
// Convention: unknown
// Signature: void FUN_0059f420(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0059f420(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004244b0(param_1,param_2);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x1141c) = 0;
    return;
  }
  *(uint *)(param_1 + 0x1141c) = 1;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x15c))(param_1,param_2);
  iVar1 = FUN_004287f0(param_1,param_2);
  if (iVar1 == 0) {
    FUN_0059da20(param_1 + 0x10af8,param_2);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x160))(param_1,param_2,1);
  }
  else {
    switch(*(uint *)(param_1 + 0x27ac)) {
    case 0:
      uVar2 = *(uint *)(param_1 + 0x11384);
      break;
    case 1:
      uVar2 = *(uint *)(param_1 + 0x11388);
      break;
    case 2:
      FUN_00503620(param_1 + 0x2b4,*(uint *)(param_1 + 0x1138c),1);
      goto LAB_0059f4a2;
    case 3:
      uVar2 = *(uint *)(param_1 + 0x11380);
      break;
    default:
      uVar2 = *(uint *)(param_1 + 0x11384);
    }
    FUN_00503620(param_1 + 0x2b4,uVar2,1);
  }
LAB_0059f4a2:
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x164))(param_1,param_2);
  if (*(int *)(param_1 + 0x113b8) != 0) {
    FUN_0059f5b0(param_1,param_2);
  }
  FUN_0059f660(param_1,param_2);
  FUN_0042b5e0(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x154))(param_1,param_2);
  return;
}
