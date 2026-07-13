// Name: FUN_004bb7d0
// Address: 004bb7d0
// Address Range: [[004bb7d0, 004bbac7]]
// Convention: unknown
// Signature: void FUN_004bb7d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bb7d0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_004796b0(param_1);
  iVar1 = param_1 + 0x150;
  FUN_0051dcd0(iVar1);
  uVar2 = FUN_0051e0a0(iVar1);
  _DAT_01cae30c = FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_01cae318 = FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01cae31c = FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01cae320 = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cae324 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cae328 = FUN_005179d0(uVar2,"Bip01 L Foot",1);
  _DAT_01cae32c = FUN_005179d0(uVar2,"Bip01 R Foot",1);
  _DAT_01cae310 = FUN_005179d0(uVar2,"Bip01 L Hand",1);
  _DAT_01cae314 = FUN_005179d0(uVar2,"Bip01 R Hand",1);
  _DAT_01cae330 = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_01cae334 = FUN_005179d0(uVar2,"Bip01 Spine1",1);
  _DAT_01cae338 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  _DAT_01cae30c = FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_01cae320 = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cae324 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cae330 = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_01cae338 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_0051e020(iVar1);
  uVar3 = FUN_00519b30(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xbd30) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0xbd34) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xbd38) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0xbd3c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0xbd40) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0xbd44) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0xbd48) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0xbd4c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"ass01",1);
  *(uint *)(param_1 + 0xbd50) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xbd54) = uVar3;
  uVar2 = FUN_00519b30(uVar2,"head01",1);
  *(uint *)(param_1 + 0xbd24) = 0;
  *(uint *)(param_1 + 0xbd28) = 0;
  *(uint *)(param_1 + 0xbd58) = uVar2;
  *(uint *)(param_1 + 0x24a4) = _DAT_01cae310;
  *(uint *)(param_1 + 0x24a8) = *(uint *)(param_1 + 0xbd34);
  *(uint *)(param_1 + 0x24e8) = _DAT_01cae314;
  *(uint *)(param_1 + 0x24ec) = *(uint *)(param_1 + 0xbd3c);
  uVar2 = FUN_0040dda0(0x41200000,0x41a00000);
  *(uint *)(param_1 + 0xbd2c) = uVar2;
  return;
}
