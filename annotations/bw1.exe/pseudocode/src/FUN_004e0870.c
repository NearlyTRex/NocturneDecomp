// Name: FUN_004e0870
// Address: 004e0870
// Address Range: [[004e0870, 004e0c31]]
// Convention: unknown
// Signature: void FUN_004e0870(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e0870(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  byte auStack_78 [100];
  float fStack_14;
  
  FUN_00573a80(*(uint *)(param_1 + 0xc2b8));
  if ((*(int *)(param_1 + 0xc2c8) != 0) &&
     (iVar1 = FUN_00524770(param_1 + 0x158), *(int *)(iVar1 + 0x24) == 0)) {
    *(uint *)(param_1 + 0xc2cc) = 0x41f00000;
    *(uint *)(param_1 + 0xc2c8) = 0;
    *(uint *)(param_1 + 0xc2d0) = 1;
    *(uint *)(param_1 + 0xc2d4) = 0x3f800000;
    if ((uint *)(param_1 + 0xc2d8) != (uint *)(param_1 + 0x20)) {
      *(uint *)(param_1 + 0xc2d8) = *(uint *)(param_1 + 0x20);
      *(uint *)(param_1 + 0xc2dc) = *(uint *)(param_1 + 0x24);
      *(uint *)(param_1 + 0xc2e0) = *(uint *)(param_1 + 0x28);
    }
    FUN_00445430(PTR_DAT_00611100,"@go berzerk\n" + 1);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    *(uint *)(param_1 + 0xc2c4) = 0x40800000;
  }
  FUN_004e05b0(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0xc1e8);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xf4))(iVar1), iVar1 == param_1)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xc1e8) + 0x154) + 0xf0))(*(int *)(param_1 + 0xc1e8));
  }
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2b4) * 4) == 0) {
    *(uint *)(param_1 + 0x2538) = 0;
  }
  if (*(float *)(param_1 + 0x2538) <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    if (*(int *)(param_1 + 0xc258) != 0) {
      FUN_00430c40(param_1);
      FUN_004a0f00(param_1,param_2);
      return;
    }
    iVar1 = FUN_00524770(param_1 + 0x158);
    if ((*(int *)(iVar1 + 0x24) != 10) && (*(int *)(iVar1 + 0x24) != 9)) {
      if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2b4) * 4) == 0) {
        *(uint *)(param_1 + 0xc284) = 0;
      }
      else {
        *(int *)(param_1 + 0xc284) = *(int *)(param_1 + 0xc284) + -1;
      }
      uVar3 = 6;
      if (*(int *)(param_1 + 0x3004) < 1) {
        iVar1 = FUN_0040cd00(0x3f000000);
        if (iVar1 != 0) {
          uVar3 = 7;
        }
      }
      else {
        iVar2 = 0;
        iVar1 = param_1;
        if (0 < *(int *)(param_1 + 0x3004)) {
          do {
            if (*(int *)(iVar1 + 0x3008) == *(int *)(param_1 + 0xc2b0)) {
              uVar3 = 8;
              break;
            }
            iVar2 = iVar2 + 1;
            iVar1 = iVar1 + 0x38;
          } while (iVar2 < *(int *)(param_1 + 0x3004));
        }
      }
      FUN_005247c0(param_1 + 0x158,uVar3,1);
      iVar1 = FUN_005735a0(*(uint *)(param_1 + 0xc2c0));
      if (iVar1 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"ghoul-die-!-?.wav @1.6");
        *(uint *)(param_1 + 0xc2c0) = uVar3;
      }
      fStack_14 = (float)FUN_0040cc00(0x40800000,0x41200000);
      fVar4 = (float10)fStack_14 * (float10)_DAT_005e3e01;
      *(uint *)(param_1 + 0xc274) = 0xa0000;
      iVar1 = FUN_005c03a0(0x32,0x41c80000);
      *(int *)(param_1 + 0xc270) = (int)ROUND(fVar4);
      (**(code **)(iVar1 + 0xa8))(param_1);
    }
  }
  else {
    iVar1 = FUN_00524770(param_1 + 0x158);
    iVar1 = *(int *)(iVar1 + 0x24);
    if (((iVar1 == 0) || (iVar1 == 0xb || (iVar1 == 0xc || iVar1 == 2))) ||
       (iVar1 = FUN_0040cd00(0x3e800000), iVar1 != 0)) {
      iVar1 = FUN_0040cd00(0x3f000000,1);
      FUN_005247c0(param_1 + 0x158,(iVar1 == 0) + '\x03');
    }
    else {
      uVar3 = FUN_0040cc60(1,2);
      FUN_005bfb40(auStack_78,"guul flinch%d",uVar3);
      uVar3 = FUN_00524a00(param_1 + 0x158,auStack_78,1);
      uVar3 = FUN_005240c0(uVar3);
      *(uint *)(param_1 + 0xc27c) = 0x3f800000;
      *(uint *)(param_1 + 0xc280) = uVar3;
    }
    iVar1 = FUN_005735a0(*(uint *)(param_1 + 0xc2bc));
    if (iVar1 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"ghoul-mad-!-?.wav");
      *(uint *)(param_1 + 0xc2bc) = uVar3;
      FUN_004a0f00(param_1,param_2);
      return;
    }
  }
  FUN_004a0f00(param_1,param_2);
  return;
}
