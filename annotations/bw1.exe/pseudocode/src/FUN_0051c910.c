// Name: FUN_0051c910
// Address: 0051c910
// Address Range: [[0051c910, 0051cc1f]]
// Convention: unknown
// Signature: void FUN_0051c910(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051c910(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  uVar2 = FUN_00569f30(iVar1);
  _DAT_01d33c00 = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_01d33c0c = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01d33c10 = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01d33c14 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d33c18 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d33c1c = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_01d33c20 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_01d33c04 = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_01d33c08 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_01d33c24 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01d33c28 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  _DAT_01d33c2c = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  _DAT_01d33c00 = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_01d33c14 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d33c18 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d33c24 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01d33c2c = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00569eb0(iVar1);
  uVar3 = FUN_00565780(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xc30c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0xc310) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xc314) = uVar3;
  uVar3 = FUN_00565780(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0xc318) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0xc31c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0xc320) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0xc324) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0xc328) = uVar3;
  uVar3 = FUN_00565780(uVar2,"waist01",1);
  *(uint *)(param_1 + 0xc32c) = uVar3;
  uVar3 = FUN_00565780(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xc330) = uVar3;
  uVar2 = FUN_00565780(uVar2,"head01",1);
  *(uint *)(param_1 + 0xc334) = uVar2;
  *(uint *)(param_1 + 0x25a8) = _DAT_01d33c04;
  *(uint *)(param_1 + 0x25ac) = *(uint *)(param_1 + 0xc310);
  *(uint *)(param_1 + 0x2620) = _DAT_01d33c08;
  *(uint *)(param_1 + 0x2624) = *(uint *)(param_1 + 0xc318);
  FUN_004a0510(param_1);
  *(uint *)(param_1 + 0xc338) = 0;
  *(uint *)(param_1 + 0xc33c) = 0;
  if (*(int *)(param_1 + 0xc288) != 0) {
    *(uint *)(param_1 + 0xc264) = 1;
  }
  *(uint *)(param_1 + 0xc300) = 0;
  *(uint *)(param_1 + 0xc304) = 0;
  *(uint *)(param_1 + 0xc308) = 0;
  *(uint *)(param_1 + 0xc2fc) = 0;
  return;
}
