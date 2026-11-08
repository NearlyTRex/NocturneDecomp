// Name: FUN_00412840
// Address: 00412840
// Address Range: [[00412840, 00412b1b]]
// Convention: unknown
// Signature: void FUN_00412840(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412840(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0xc268) = 0;
  FUN_004a0510(param_1);
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  uVar2 = FUN_00569f30(iVar1);
  DAT_007c37b8 = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_007c37c4 = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_007c37c8 = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_007c37cc = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_007c37d0 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_007c37d4 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_007c37d8 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_007c37bc = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  DAT_007c37c0 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  DAT_007c37dc = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_007c37e0 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  DAT_007c37e4 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  DAT_007c37b8 = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_007c37cc = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_007c37d0 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  DAT_007c37dc = FUN_005634f0(uVar2,"Bip01 Spine",1);
  DAT_007c37e4 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00569eb0(iVar1);
  uVar3 = FUN_00565780(uVar2,"head01",1);
  *(uint *)(param_1 + 0xc2d0) = uVar3;
  uVar3 = FUN_00565780(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xc2d4) = uVar3;
  uVar3 = FUN_00565780(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xc2d8) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0xc2dc) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xc2e0) = uVar3;
  uVar3 = FUN_00565780(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0xc2e4) = uVar3;
  uVar3 = FUN_00565780(uVar2,"ass01",1);
  *(uint *)(param_1 + 0xc2e8) = uVar3;
  uVar3 = FUN_00565780(uVar2,"tail01",1);
  *(uint *)(param_1 + 0xc2ec) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0xc2f0) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0xc2f4) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0xc2f8) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0xc2fc) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lfoot01",1);
  *(uint *)(param_1 + 0xc300) = uVar3;
  uVar2 = FUN_00565780(uVar2,"rfoot01",1);
  *(uint *)(param_1 + 0xc304) = uVar2;
  return;
}
