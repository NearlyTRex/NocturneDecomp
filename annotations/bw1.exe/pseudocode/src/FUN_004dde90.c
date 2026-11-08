// Name: FUN_004dde90
// Address: 004dde90
// Address Range: [[004dde90, 004de0f1]]
// Convention: unknown
// Signature: void FUN_004dde90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dde90(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  uVar2 = FUN_00569f30(iVar1);
  _DAT_01cd0d98 = FUN_005634f0(uVar2,"@Bip01 Head" + 1,1);
  _DAT_01cd0da4 = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01cd0da8 = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01cd0dac = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cd0db0 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cd0db4 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_01cd0db8 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_01cd0d9c = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_01cd0da0 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_01cd0dbc = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01cd0dc0 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00569eb0(iVar1);
  uVar3 = FUN_00565780(uVar2,"r high arm01",1);
  *(uint *)(param_1 + 0xc28c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"r lo arm01",1);
  *(uint *)(param_1 + 0xc290) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l high arm01",1);
  *(uint *)(param_1 + 0xc294) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l lo arm01",1);
  *(uint *)(param_1 + 0xc298) = uVar3;
  uVar3 = FUN_00565780(uVar2,"r thigh01",1);
  *(uint *)(param_1 + 0xc29c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"r shin01",1);
  *(uint *)(param_1 + 0xc2a0) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l thigh01",1);
  *(uint *)(param_1 + 0xc2a4) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l shin01",1);
  *(uint *)(param_1 + 0xc2a8) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lo torso01",1);
  *(uint *)(param_1 + 0xc2ac) = uVar3;
  uVar3 = FUN_00565780(uVar2,"high torso01",1);
  *(uint *)(param_1 + 0xc2b0) = uVar3;
  uVar2 = FUN_00565780(uVar2,"head01",1);
  *(uint *)(param_1 + 0xc2b4) = uVar2;
  FUN_004a0510(param_1);
  *(uint *)(param_1 + 0xc2c4) = 0;
  *(uint *)(param_1 + 0xc2c8) = 0;
  *(uint *)(param_1 + 0xc2cc) = 0;
  *(uint *)(param_1 + 0xc2d0) = 0;
  *(uint *)(param_1 + 0xc2d4) = 0;
  *(uint *)(param_1 + 0xc2b8) = 0;
  *(uint *)(param_1 + 0xc2bc) = 0;
  *(uint *)(param_1 + 0xc2c0) = 0;
  return;
}
