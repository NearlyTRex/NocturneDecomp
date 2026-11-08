// Name: FUN_004c4ee0
// Address: 004c4ee0
// Address Range: [[004c4ee0, 004c5199]]
// Convention: unknown
// Signature: void FUN_004c4ee0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c4ee0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00489110(param_1);
  iVar1 = param_1 + 0x158;
  FUN_0054e6b0(iVar1);
  uVar2 = FUN_0054eac0(iVar1);
  _DAT_01d22ca4 = FUN_00548090(uVar2,"Bip01 Head",1);
  _DAT_01d22cb0 = FUN_00548090(uVar2,"Bip01 L ForeArm",1);
  _DAT_01d22cb4 = FUN_00548090(uVar2,"Bip01 R ForeArm",1);
  _DAT_01d22cb8 = FUN_00548090(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d22cbc = FUN_00548090(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d22cc0 = FUN_00548090(uVar2,"Bip01 L Foot",1);
  _DAT_01d22cc4 = FUN_00548090(uVar2,"Bip01 R Foot",1);
  _DAT_01d22ca8 = FUN_00548090(uVar2,"Bip01 L Hand",1);
  _DAT_01d22cac = FUN_00548090(uVar2,"Bip01 R Hand",1);
  _DAT_01d22cc8 = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_01d22ccc = FUN_00548090(uVar2,"Bip01 Spine1",1);
  _DAT_01d22cd0 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  _DAT_01d22ca4 = FUN_00548090(uVar2,"Bip01 Head",1);
  _DAT_01d22cb8 = FUN_00548090(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d22cbc = FUN_00548090(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d22cc8 = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_01d22cd0 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_0054ea40(iVar1);
  uVar3 = FUN_0054a310(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xd054) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0xd058) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xd05c) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0xd060) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0xd064) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0xd068) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0xd06c) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0xd070) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"ass01",1);
  *(uint *)(param_1 + 0xd074) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xd078) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"head01",1);
  *(uint *)(param_1 + 0xd07c) = uVar3;
  uVar2 = FUN_0054a310(uVar2,"tail01",1);
  *(uint *)(param_1 + 0xd094) = 0;
  *(uint *)(param_1 + 0xd098) = 0;
  *(uint *)(param_1 + 0xd080) = uVar2;
  return;
}
