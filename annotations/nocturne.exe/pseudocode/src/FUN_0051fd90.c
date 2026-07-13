// Name: FUN_0051fd90
// Address: 0051fd90
// Address Range: [[0051fd90, 0052008f]]
// Convention: unknown
// Signature: void FUN_0051fd90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051fd90(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004796b0(param_1);
  iVar3 = param_1 + 0x150;
  FUN_0051dcd0(iVar3);
  uVar1 = FUN_0051e0a0(iVar3);
  _DAT_02da8a74 = FUN_005179d0(uVar1,"Bip01 Head",1);
  _DAT_02da8a80 = FUN_005179d0(uVar1,"Bip01 L ForeArm",1);
  _DAT_02da8a84 = FUN_005179d0(uVar1,"Bip01 R ForeArm",1);
  _DAT_02da8a88 = FUN_005179d0(uVar1,"Bip01 L UpperArm",1);
  _DAT_02da8a8c = FUN_005179d0(uVar1,"Bip01 R UpperArm",1);
  _DAT_02da8a90 = FUN_005179d0(uVar1,"Bip01 L Foot",1);
  _DAT_02da8a94 = FUN_005179d0(uVar1,"Bip01 R Foot",1);
  _DAT_02da8a78 = FUN_005179d0(uVar1,"Bip01 L Hand",1);
  _DAT_02da8a7c = FUN_005179d0(uVar1,"Bip01 R Hand",1);
  _DAT_02da8a98 = FUN_005179d0(uVar1,"Bip01 Spine",1);
  _DAT_02da8a9c = FUN_005179d0(uVar1,"Bip01 Spine1",1);
  _DAT_02da8aa0 = FUN_005179d0(uVar1,"Bip01 Spine2",1);
  _DAT_02da8a74 = FUN_005179d0(uVar1,"Bip01 Head",1);
  _DAT_02da8a88 = FUN_005179d0(uVar1,"Bip01 L UpperArm",1);
  _DAT_02da8a8c = FUN_005179d0(uVar1,"Bip01 R UpperArm",1);
  _DAT_02da8a98 = FUN_005179d0(uVar1,"Bip01 Spine",1);
  _DAT_02da8aa0 = FUN_005179d0(uVar1,"Bip01 Spine2",1);
  uVar1 = FUN_0051e020(iVar3);
  uVar2 = FUN_00519b30(uVar1,"larm01",1);
  *(uint *)(param_1 + 0xbd2c) = uVar2;
  uVar2 = FUN_00519b30(uVar1,"l4arm01",1);
  *(uint *)(param_1 + 0xbd30) = uVar2;
  uVar2 = FUN_00519b30(uVar1,"rarm01",1);
  *(uint *)(param_1 + 0xbd34) = uVar2;
  uVar2 = FUN_00519b30(uVar1,"r4arm01",1);
  *(uint *)(param_1 + 0xbd38) = uVar2;
  uVar2 = FUN_00519b30(uVar1,"rthigh01",1);
  *(uint *)(param_1 + 0xbd3c) = uVar2;
  uVar2 = FUN_00519b30(uVar1,"rshin01",1);
  *(uint *)(param_1 + 0xbd40) = uVar2;
  uVar2 = FUN_00519b30(uVar1,"lthigh01",1);
  *(uint *)(param_1 + 0xbd44) = uVar2;
  uVar2 = FUN_00519b30(uVar1,"lshin01",1);
  *(uint *)(param_1 + 0xbd48) = uVar2;
  uVar2 = FUN_00519b30(uVar1,"ass01",1);
  *(uint *)(param_1 + 0xbd4c) = uVar2;
  uVar2 = FUN_00519b30(uVar1,"torso01",1);
  *(uint *)(param_1 + 0xbd50) = uVar2;
  uVar1 = FUN_00519b30(uVar1,"head01",1);
  *(uint *)(param_1 + 0xbd58) = 0;
  *(uint *)(param_1 + 0xbd54) = uVar1;
  *(uint *)(param_1 + 0xbd5c) = 0;
  *(uint *)(param_1 + 0xbd64) = 1;
  iVar3 = FUN_00564520(param_1 + 0x23b0,"smiley2.dfm");
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xbd64) = 2;
  }
  iVar3 = FUN_00564520(param_1 + 0x23b0,"smiley3.dfm");
  if (iVar3 != 0) {
    return;
  }
  *(uint *)(param_1 + 0xbd64) = 3;
  *(uint *)(param_1 + 0x261c) = 0;
  return;
}
