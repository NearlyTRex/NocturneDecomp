// Name: FUN_00412160
// Address: 00412160
// Address Range: [[00412160, 00412459]]
// Convention: unknown
// Signature: void FUN_00412160(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412160(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_004796b0(param_1);
  iVar1 = param_1 + 0x150;
  FUN_0051dcd0(iVar1);
  uVar2 = FUN_0051e0a0(iVar1);
  DAT_0076459c = FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_007645a8 = FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_007645ac = FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_007645b0 = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_007645b4 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_007645b8 = FUN_005179d0(uVar2,"Bip01 L Foot",1);
  _DAT_007645bc = FUN_005179d0(uVar2,"Bip01 R Foot",1);
  _DAT_007645a0 = FUN_005179d0(uVar2,"Bip01 L Hand",1);
  DAT_007645a4 = FUN_005179d0(uVar2,"Bip01 R Hand",1);
  _DAT_007645c0 = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_007645c4 = FUN_005179d0(uVar2,"Bip01 Spine1",1);
  _DAT_007645c8 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  DAT_0076459c = FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_007645b0 = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_007645b4 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_007645c0 = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_007645c8 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_0051e020(iVar1);
  uVar3 = FUN_00519b30(uVar2,"head01",1);
  *(uint *)(param_1 + 0xbd24) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xbd28) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"ass01",1);
  *(uint *)(param_1 + 0xbd2c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"tail01",1);
  *(uint *)(param_1 + 0xbd30) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0xbd34) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0xbd38) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0xbd3c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0xbd40) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xbd44) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0xbd48) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xbd4c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0xbd50) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lwing",1);
  *(uint *)(param_1 + 0xbd54) = uVar3;
  uVar2 = FUN_00519b30(uVar2,"rwing",1);
  *(uint *)(param_1 + 0xbd5c) = 0;
  *(uint *)(param_1 + 0xbd60) = 0;
  *(uint *)(param_1 + 0xbd64) = 0;
  *(uint *)(param_1 + 0xbd68) = 0;
  *(uint *)(param_1 + 0xbd58) = uVar2;
  return;
}
