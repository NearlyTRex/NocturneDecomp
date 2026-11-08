// Name: FUN_0045c7b0
// Address: 0045c7b0
// Address Range: [[0045c7b0, 0045c9d2]]
// Convention: unknown
// Signature: void FUN_0045c7b0(int param_1,int param_2)

#include "nocturne.h"

void FUN_0045c7b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x27b0) != 0) {
    FUN_004a1b70(0x01C51D80,"@ShotInvulnerable" + 1);
    return;
  }
  FUN_0045c4a0(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc340) * 4) == 0) {
    *(uint *)(param_1 + 0x2538) = 0;
  }
  *(uint *)(param_1 + 0xc1e4) = 0x3f99999a;
  if (0.0 < *(float *)(param_1 + 0x2538)) {
    iVar1 = FUN_0040cc60(0,3);
    iVar1 = iVar1 + 0xf;
    if (iVar1 == 0x12) {
      iVar2 = FUN_0040cc60(0,4);
      if (iVar2 != 1) {
        iVar1 = 0xf;
      }
    }
    if (*(int *)(param_2 + 0x28) == 4) {
      iVar2 = FUN_0040cd00(0x3f19999a);
      if (iVar2 != 0) {
        iVar1 = FUN_0040cc60(0,1);
        iVar1 = iVar1 + 9;
      }
    }
    FUN_005247c0(param_1 + 0x158,iVar1,1);
    if (*(float *)(param_1 + 0xc344) <= 0.0) {
      *(uint *)(param_1 + 0xc344) = 0x40000000;
      iVar1 = FUN_005735a0(*(uint *)(param_1 + 0xc34c));
      if (iVar1 == 0) {
        (**(code **)(*(int *)(param_1 + 0x154) + 0x14c))(param_1);
        FUN_004a0f00(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar1 = FUN_00524770(param_1 + 0x158);
    if ((*(int *)(iVar1 + 0x24) != 0x1a) && (*(int *)(iVar1 + 0x24) != 0x19)) {
      FUN_0045bfa0(param_1);
      iVar1 = FUN_0040cc60(0,4);
      iVar1 = iVar1 + 0x14;
      if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc340) * 4) == 0) &&
         (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc33c) * 4) != 0)) {
        iVar1 = 0x1f;
      }
      iVar2 = FUN_005c04e0(param_1 + 0x24a8,"D_SHERIFF.dfm");
      if (iVar2 == 0) {
        iVar1 = 0x18;
      }
      FUN_005247c0(param_1 + 0x158,iVar1,1);
      FUN_00573a80(*(uint *)(param_1 + 0xc34c));
      (**(code **)(*(int *)(param_1 + 0x154) + 0x150))(param_1);
    }
  }
  FUN_004a0f00(param_1,param_2);
  return;
}
