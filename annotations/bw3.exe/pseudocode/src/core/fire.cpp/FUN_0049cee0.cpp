// Name: FUN_0049cee0
// Address: 0049cee0
// Address Range: [[0049cee0, 0049d07d]]
// Convention: unknown
// Signature: void FUN_0049cee0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049cee0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int iVar1;
  byte bVar2;
  float afStackY_1020 [1013];
  uint *puVar3;
  float *pfVar4;
  uint uVar5;
  float local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  bVar2 = 0;
  *param_1 = param_2;
  param_1[0xf7] = param_6;
  param_1[0xf9] = 0;
  switch(*param_1) {
  case 0:
    FUN_004625f0(param_1 + 1,"dynamitestick.kfm");
    local_14 = 0x3f800000;
    break;
  case 1:
    FUN_004625f0(param_1 + 1,"bindingstone.kfm");
    local_14 = 0x3f800000;
    break;
  case 2:
    FUN_004625f0(param_1 + 1,"scarabstone.kfm");
    local_14 = 0x3f800000;
    break;
  case 3:
    FUN_004625f0(param_1 + 1,"rainvial.kfm");
    local_14 = 0x3f800000;
    break;
  default:
    _DAT_01d71de0 = "..\\core\\fire.cpp";
    _DAT_01d71de4 = 0xe59;
    FUN_004e4330("CToss::create - invalid toss type.");
  }
  pfVar4 = &stack0xffffffc8;
  if ((float)param_1[0xf7] <= 0.0) {
    param_1[0xf7] = 0x40a00000;
  }
  param_1[0xf8] = param_1[0xf7];
  FUN_00462580(param_1 + 1);
  iVar1 = FUN_004625a0(param_1 + 1);
  uVar5 = local_14;
  local_20 = *(float *)(iVar1 + 0x344) - *(float *)(iVar1 + 0x338);
  local_1c = *(float *)(iVar1 + 0x348) - *(float *)(iVar1 + 0x33c);
  local_18 = *(float *)(iVar1 + 0x34c) - *(float *)(iVar1 + 0x340);
  local_38 = local_20;
  *(float *)((int)&stack0xffffffcc + (uint)bVar2 * 0xfffffffe * 4) =
       (&stack0xffffffe4)[(uint)bVar2 * 0xfffffffe];
  puVar3 = param_1 + 0x60;
  *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  FUN_0041ae00(puVar3,param_3,param_4,pfVar4,uVar5);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0x4116cbe4;
  FUN_0041d790(param_1 + 0x60,param_5,&stack0xffffffd4);
  return;
}
