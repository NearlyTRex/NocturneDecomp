// Name: FUN_004116f0
// Address: 004116f0
// Address Range: [[004116f0, 004119e9]]
// Convention: unknown
// Signature: void FUN_004116f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004116f0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00487eb0(param_1);
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  uVar2 = FUN_00547890(iVar1);
  DAT_007bc74c = FUN_00540e80(uVar2,"Bip01 Head",1);
  _DAT_007bc758 = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_007bc75c = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_007bc760 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_007bc764 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_007bc768 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_007bc76c = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_007bc750 = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  DAT_007bc754 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_007bc770 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_007bc774 = FUN_00540e80(uVar2,"Bip01 Spine1",1);
  _DAT_007bc778 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  DAT_007bc74c = FUN_00540e80(uVar2,"Bip01 Head",1);
  _DAT_007bc760 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_007bc764 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_007bc770 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_007bc778 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00547810(iVar1);
  uVar3 = FUN_00543100(uVar2,"head01",1);
  *(uint *)(param_1 + 0x10af8) = uVar3;
  uVar3 = FUN_00543100(uVar2,"torso01",1);
  *(uint *)(param_1 + 0x10afc) = uVar3;
  uVar3 = FUN_00543100(uVar2,"ass01",1);
  *(uint *)(param_1 + 0x10b00) = uVar3;
  uVar3 = FUN_00543100(uVar2,"tail01",1);
  *(uint *)(param_1 + 0x10b04) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0x10b08) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0x10b0c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0x10b10) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0x10b14) = uVar3;
  uVar3 = FUN_00543100(uVar2,"larm01",1);
  *(uint *)(param_1 + 0x10b18) = uVar3;
  uVar3 = FUN_00543100(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0x10b1c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0x10b20) = uVar3;
  uVar3 = FUN_00543100(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0x10b24) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lwing",1);
  *(uint *)(param_1 + 0x10b28) = uVar3;
  uVar2 = FUN_00543100(uVar2,"rwing",1);
  *(uint *)(param_1 + 0x10b30) = 0;
  *(uint *)(param_1 + 0x10b34) = 0;
  *(uint *)(param_1 + 0x10b38) = 0;
  *(uint *)(param_1 + 0x10b3c) = 0;
  *(uint *)(param_1 + 0x10b2c) = uVar2;
  return;
}
