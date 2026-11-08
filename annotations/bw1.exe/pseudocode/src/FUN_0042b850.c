// Name: FUN_0042b850
// Address: 0042b850
// Address Range: [[0042b850, 0042ba27]]
// Convention: unknown
// Signature: void FUN_0042b850(int param_1,int param_2)

#include "nocturne.h"

void FUN_0042b850(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x27b0) != 0) {
    FUN_004a1b70(0x01C51D80,"@ShotInvulnerable" + 1);
    return;
  }
  FUN_0042b580(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2d0) * 4) == 0) {
    *(uint *)(param_1 + 0x2538) = 0;
  }
  *(uint *)(param_1 + 0xc1e4) = 0x3f99999a;
  if (0.0 < *(float *)(param_1 + 0x2538)) {
    iVar1 = FUN_0040cc60(0,5);
    FUN_005247c0(param_1 + 0x158,iVar1 + 0xd,1);
    if (*(float *)(param_1 + 0xc2d4) <= 0.0) {
      *(uint *)(param_1 + 0xc2d4) = 0x40000000;
      iVar1 = FUN_005735a0(*(uint *)(param_1 + 0xc2dc));
      if (iVar1 == 0) {
        uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"carved-damage?.wav");
        *(uint *)(param_1 + 0xc2dc) = uVar2;
        FUN_004a0f00(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    iVar1 = FUN_00524770(param_1 + 0x158);
    iVar1 = *(int *)(iVar1 + 0x24);
    if (((iVar1 == 0x16) || (iVar1 == 0x13)) && ((iVar1 == 0x17 || (iVar1 == 0x14)))) {
      if (iVar1 == 0x18) goto LAB_0042b956;
      if (iVar1 == 0x15) {
        FUN_004a0f00(param_1,param_2);
        return;
      }
    }
    FUN_0042b370(param_1);
    iVar1 = FUN_0040cc60(0,2);
    FUN_005247c0(param_1 + 0x158,iVar1 + 0x13,1);
    FUN_00573a80(*(uint *)(param_1 + 0xc2dc));
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"carved-die?.wav");
    (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
  }
LAB_0042b956:
  FUN_004a0f00(param_1,param_2);
  return;
}
