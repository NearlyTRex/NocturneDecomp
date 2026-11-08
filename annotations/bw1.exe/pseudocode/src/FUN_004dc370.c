// Name: FUN_004dc370
// Address: 004dc370
// Address Range: [[004dc370, 004dc629]]
// Convention: unknown
// Signature: void FUN_004dc370(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dc370(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_004a0510(param_1);
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  uVar2 = FUN_00569f30(iVar1);
  _DAT_01cd0c9c = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_01cd0ca8 = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01cd0cac = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01cd0cb0 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cd0cb4 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cd0cb8 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_01cd0cbc = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_01cd0ca0 = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_01cd0ca4 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_01cd0cc0 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01cd0cc4 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  _DAT_01cd0cc8 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  _DAT_01cd0c9c = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_01cd0cb0 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cd0cb4 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cd0cc0 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01cd0cc8 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00569eb0(iVar1);
  uVar3 = FUN_00565780(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xc268) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0xc26c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xc270) = uVar3;
  uVar3 = FUN_00565780(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0xc274) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0xc278) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0xc27c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0xc280) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0xc284) = uVar3;
  uVar3 = FUN_00565780(uVar2,"ass01",1);
  *(uint *)(param_1 + 0xc288) = uVar3;
  uVar3 = FUN_00565780(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xc28c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"head01",1);
  *(uint *)(param_1 + 0xc290) = uVar3;
  uVar2 = FUN_00565780(uVar2,"tail01",1);
  *(uint *)(param_1 + 0xc2a8) = 0;
  *(uint *)(param_1 + 0xc2ac) = 0;
  *(uint *)(param_1 + 0xc294) = uVar2;
  return;
}
