// Name: FUN_004f2860
// Address: 004f2860
// Address Range: [[004f2860, 004f2b57]]
// Convention: unknown
// Signature: void FUN_004f2860(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f2860(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_004a0510(param_1);
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  uVar2 = FUN_00569f30(iVar1);
  _DAT_01d06cf8 = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_01d06d04 = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01d06d08 = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01d06d0c = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d06d10 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d06d14 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_01d06d18 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_01d06cfc = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_01d06d00 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_01d06d1c = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01d06d20 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  _DAT_01d06d24 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  _DAT_01d06cf8 = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_01d06d0c = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d06d10 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d06d1c = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01d06d24 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00569eb0(iVar1);
  uVar3 = FUN_00565780(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xc274) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0xc278) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xc27c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0xc280) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0xc284) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0xc288) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0xc28c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0xc290) = uVar3;
  uVar3 = FUN_00565780(uVar2,"ass01",1);
  *(uint *)(param_1 + 0xc294) = uVar3;
  uVar3 = FUN_00565780(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xc298) = uVar3;
  uVar2 = FUN_00565780(uVar2,"head01",1);
  *(uint *)(param_1 + 0xc268) = 0;
  *(uint *)(param_1 + 0xc26c) = 0;
  *(uint *)(param_1 + 0xc29c) = uVar2;
  *(uint *)(param_1 + 0x25a8) = _DAT_01d06cfc;
  *(uint *)(param_1 + 0x25ac) = *(uint *)(param_1 + 0xc278);
  *(uint *)(param_1 + 0x2620) = _DAT_01d06d00;
  *(uint *)(param_1 + 0x2624) = *(uint *)(param_1 + 0xc280);
  uVar2 = FUN_0040cc00(0x41200000,0x41a00000);
  *(uint *)(param_1 + 0xc270) = uVar2;
  return;
}
