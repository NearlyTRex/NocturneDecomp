// Name: FUN_004992b0
// Address: 004992b0
// Address Range: [[004992b0, 004993e0]]
// Convention: unknown
// Signature: void FUN_004992b0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004992b0(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  byte bVar2;
  float afStackY_1020 [1013];
  uint uVar3;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar2 = 0;
  *param_1 = param_2;
  param_1[0xf7] = param_6;
  param_1[0xf8] = 0;
  if (*param_1 == 0) {
    FUN_0044fd70(param_1 + 1,"@\\@dynamitestick.kfm" + 3);
    local_14 = 0x3f800000;
  }
  else {
    _DAT_01d046a0 = "..\\core\\fire.cpp";
    _DAT_01d046a4 = 0xd76;
    FUN_004e4500("CToss::create - invalid toss type.");
  }
  if ((float)param_1[0xf7] <= 0.0) {
    param_1[0xf7] = 0x40a00000;
  }
  FUN_0044fd00(param_1 + 1);
  iVar1 = FUN_0044fd20(param_1 + 1);
  uVar3 = local_14;
  local_38 = *(float *)(iVar1 + 0x344) - *(float *)(iVar1 + 0x338);
  local_34 = *(float *)(iVar1 + 0x348) - *(float *)(iVar1 + 0x33c);
  local_30 = *(float *)(iVar1 + 0x34c) - *(float *)(iVar1 + 0x340);
  local_2c = local_38;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  FUN_005b1c80(param_1 + 0x60,param_3,param_4,&stack0xffffffd4,uVar3);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0x4116cbe4;
  FUN_005b4610(param_1 + 0x60,param_5,&stack0xffffffe0);
  return;
}
