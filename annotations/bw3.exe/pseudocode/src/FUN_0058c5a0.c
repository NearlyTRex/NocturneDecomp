// Name: FUN_0058c5a0
// Address: 0058c5a0
// Address Range: [[0058c5a0, 0058c7c3]]
// Convention: unknown
// Signature: void FUN_0058c5a0(int param_1,int param_2)

#include "nocturne.h"

void FUN_0058c5a0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  FUN_0058c330(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd12c) * 4) == 0) {
    *(uint *)(param_1 + 0x2538) = 0;
  }
  *(uint *)(param_1 + 0xcde0) = 0x3f99999a;
  if (*(float *)(param_1 + 0x2538) <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar1 = FUN_004fc070(param_1 + 0x158);
    iVar1 = *(int *)(iVar1 + 0x24);
    if (((iVar1 != 9) && (iVar1 != 8)) && (iVar1 != 0x15)) {
      FUN_0058be30(param_1);
      uVar3 = 7;
      if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd12c) * 4) == 0) &&
         ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd11c) * 4) != 0 ||
          (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd114) * 4) != 0)))) {
        uVar2 = FUN_004fc310(param_1 + 0x158,"@lookForHead" + 1,0);
        iVar1 = FUN_004fb9c0(uVar2);
        if (-1 < iVar1) {
          uVar3 = 10;
        }
      }
      FUN_004fc0d0(param_1 + 0x158,uVar3,1);
      FUN_00556be0(*(uint *)(param_1 + 0xd138));
      if (*(int *)(param_1 + 0xd0e0) == 0) {
        pcVar4 = "zom-d0?.wav";
      }
      else {
        pcVar4 = "f-zombie-die?.wav";
      }
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar4);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
      FUN_00489b80(param_1,param_2);
      return;
    }
  }
  else {
    iVar1 = FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar1 != 0) {
      FUN_004fc0d0(param_1 + 0x158,6,1);
    }
    if (*(float *)(param_1 + 0xd130) <= 0.0) {
      *(uint *)(param_1 + 0xd130) = 0x40000000;
      iVar1 = FUN_00556700(*(uint *)(param_1 + 0xd138));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0xd0e0) == 0) {
          uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"zom-s0?.wav");
          *(uint *)(param_1 + 0xd138) = uVar3;
          FUN_00489b80(param_1,param_2);
          return;
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"f-zombie-hit?.wav")
        ;
        *(uint *)(param_1 + 0xd138) = uVar3;
        FUN_00489b80(param_1,param_2);
        return;
      }
    }
  }
  FUN_00489b80(param_1,param_2);
  return;
}
