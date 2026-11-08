// Name: FUN_004b1c50
// Address: 004b1c50
// Address Range: [[004b1c50, 004b1d80]]
// Convention: unknown
// Signature: void FUN_004b1c50(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b1c50(int *param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

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
    FUN_00468950(param_1 + 1,"@\\@dynamitestick.kfm" + 3);
    local_14 = 0x3f800000;
  }
  else {
    _DAT_01d1d400 = "..\\core\\fire.cpp";
    _DAT_01d1d404 = 0xd76;
    FUN_005030e0("CToss::create - invalid toss type.");
  }
  if ((float)param_1[0xf7] <= 0.0) {
    param_1[0xf7] = 0x40a00000;
  }
  FUN_004688e0(param_1 + 1);
  iVar1 = FUN_00468900(param_1 + 1);
  uVar3 = local_14;
  local_38 = *(float *)(iVar1 + 0x344) - *(float *)(iVar1 + 0x338);
  local_34 = *(float *)(iVar1 + 0x348) - *(float *)(iVar1 + 0x33c);
  local_30 = *(float *)(iVar1 + 0x34c) - *(float *)(iVar1 + 0x340);
  local_2c = local_38;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffcc + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffdc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  FUN_0041dac0(param_1 + 0x60,param_3,param_4,&stack0xffffffd4,uVar3);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0x4116cbe4;
  FUN_00420450(param_1 + 0x60,param_5,&stack0xffffffe0);
  return;
}
