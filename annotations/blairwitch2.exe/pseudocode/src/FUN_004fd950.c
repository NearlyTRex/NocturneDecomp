// Name: FUN_004fd950
// Address: 004fd950
// Address Range: [[004fd950, 004fdc5f]]
// Convention: unknown
// Signature: void FUN_004fd950(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fd950(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  uVar2 = FUN_00547890(iVar1);
  _DAT_01d1c710 = FUN_00540e80(uVar2,"Bip01 Head",1);
  _DAT_01d1c71c = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_01d1c720 = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_01d1c724 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d1c728 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d1c72c = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_01d1c730 = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_01d1c714 = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  _DAT_01d1c718 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_01d1c734 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_01d1c738 = FUN_00540e80(uVar2,"Bip01 Spine1",1);
  _DAT_01d1c73c = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  _DAT_01d1c710 = FUN_00540e80(uVar2,"Bip01 Head",1);
  _DAT_01d1c724 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d1c728 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d1c734 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_01d1c73c = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00547810(iVar1);
  uVar3 = FUN_00543100(uVar2,"larm01",1);
  *(uint *)(param_1 + 0x10b9c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0x10ba0) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0x10ba4) = uVar3;
  uVar3 = FUN_00543100(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0x10ba8) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0x10bac) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0x10bb0) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0x10bb4) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0x10bb8) = uVar3;
  uVar3 = FUN_00543100(uVar2,"waist01",1);
  *(uint *)(param_1 + 0x10bbc) = uVar3;
  uVar3 = FUN_00543100(uVar2,"torso01",1);
  *(uint *)(param_1 + 0x10bc0) = uVar3;
  uVar2 = FUN_00543100(uVar2,"head01",1);
  *(uint *)(param_1 + 0x10bc4) = uVar2;
  *(uint *)(param_1 + 0x2618) = _DAT_01d1c714;
  *(uint *)(param_1 + 0x261c) = *(uint *)(param_1 + 0x10ba0);
  *(uint *)(param_1 + 0x2690) = _DAT_01d1c718;
  *(uint *)(param_1 + 0x2694) = *(uint *)(param_1 + 0x10ba8);
  FUN_00487eb0(param_1);
  *(uint *)(param_1 + 0x10bc8) = 0;
  *(uint *)(param_1 + 0x10bcc) = 0;
  if (*(int *)(param_1 + 0x10b18) != 0) {
    *(uint *)(param_1 + 0x10af4) = 1;
  }
  *(uint *)(param_1 + 0x10b90) = 0;
  *(uint *)(param_1 + 0x10b94) = 0;
  *(uint *)(param_1 + 0x10b98) = 0;
  *(uint *)(param_1 + 0x10b8c) = 0;
  return;
}
