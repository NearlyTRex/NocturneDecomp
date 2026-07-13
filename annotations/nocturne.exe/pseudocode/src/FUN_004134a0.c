// Name: FUN_004134a0
// Address: 004134a0
// Address Range: [[004134a0, 00413771]]
// Convention: unknown
// Signature: void FUN_004134a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004134a0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_004796b0(param_1);
  iVar1 = param_1 + 0x150;
  FUN_0051dcd0(iVar1);
  uVar2 = FUN_0051e0a0(iVar1);
  DAT_00764608 = FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_00764614 = FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_00764618 = FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_0076461c = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_00764620 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_00764624 = FUN_005179d0(uVar2,"Bip01 L Foot",1);
  _DAT_00764628 = FUN_005179d0(uVar2,"Bip01 R Foot",1);
  _DAT_0076460c = FUN_005179d0(uVar2,"Bip01 L Hand",1);
  DAT_00764610 = FUN_005179d0(uVar2,"Bip01 R Hand",1);
  DAT_0076462c = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_00764630 = FUN_005179d0(uVar2,"Bip01 Spine1",1);
  DAT_00764634 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  DAT_00764608 = FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_0076461c = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_00764620 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  DAT_0076462c = FUN_005179d0(uVar2,"Bip01 Spine",1);
  DAT_00764634 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_0051e020(iVar1);
  uVar3 = FUN_00519b30(uVar2,"head01",1);
  *(uint *)(param_1 + 0xbd88) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xbd8c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xbd90) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0xbd94) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xbd98) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0xbd9c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"ass01",1);
  *(uint *)(param_1 + 0xbda0) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"tail01",1);
  *(uint *)(param_1 + 0xbda4) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0xbda8) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0xbdac) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0xbdb0) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0xbdb4) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lfoot01",1);
  *(uint *)(param_1 + 0xbdb8) = uVar3;
  uVar2 = FUN_00519b30(uVar2,"rfoot01",1);
  *(uint *)(param_1 + 0xbdbc) = uVar2;
  return;
}
