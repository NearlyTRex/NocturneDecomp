// Name: FUN_00412be0
// Address: 00412be0
// Address Range: [[00412be0, 00412eb1]]
// Convention: unknown
// Signature: void FUN_00412be0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412be0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00487eb0(param_1);
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  uVar2 = FUN_00547890(iVar1);
  DAT_007bc7b8 = FUN_00540e80(uVar2,"Bip01 Head",1);
  _DAT_007bc7c4 = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_007bc7c8 = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_007bc7cc = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_007bc7d0 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_007bc7d4 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_007bc7d8 = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_007bc7bc = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  DAT_007bc7c0 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  DAT_007bc7dc = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_007bc7e0 = FUN_00540e80(uVar2,"Bip01 Spine1",1);
  DAT_007bc7e4 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  DAT_007bc7b8 = FUN_00540e80(uVar2,"Bip01 Head",1);
  _DAT_007bc7cc = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_007bc7d0 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  DAT_007bc7dc = FUN_00540e80(uVar2,"Bip01 Spine",1);
  DAT_007bc7e4 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00547810(iVar1);
  uVar3 = FUN_00543100(uVar2,"head01",1);
  *(uint *)(param_1 + 0x10b5c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"torso01",1);
  *(uint *)(param_1 + 0x10b60) = uVar3;
  uVar3 = FUN_00543100(uVar2,"larm01",1);
  *(uint *)(param_1 + 0x10b64) = uVar3;
  uVar3 = FUN_00543100(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0x10b68) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0x10b6c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0x10b70) = uVar3;
  uVar3 = FUN_00543100(uVar2,"ass01",1);
  *(uint *)(param_1 + 0x10b74) = uVar3;
  uVar3 = FUN_00543100(uVar2,"tail01",1);
  *(uint *)(param_1 + 0x10b78) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0x10b7c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0x10b80) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0x10b84) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0x10b88) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lfoot01",1);
  *(uint *)(param_1 + 0x10b8c) = uVar3;
  uVar2 = FUN_00543100(uVar2,"rfoot01",1);
  *(uint *)(param_1 + 0x10b90) = uVar2;
  return;
}
