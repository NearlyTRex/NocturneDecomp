// Name: FUN_004c1710
// Address: 004c1710
// Address Range: [[004c1710, 004c1971]]
// Convention: unknown
// Signature: void FUN_004c1710(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c1710(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  uVar2 = FUN_00547890(iVar1);
  _DAT_01cb821c = FUN_00540e80(uVar2,"@Bip01 Head" + 1,1);
  _DAT_01cb8228 = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_01cb822c = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_01cb8230 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cb8234 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cb8238 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_01cb823c = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_01cb8220 = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  _DAT_01cb8224 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_01cb8240 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_01cb8244 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00547810(iVar1);
  uVar3 = FUN_00543100(uVar2,"r high arm01",1);
  *(uint *)(param_1 + 0x10b1c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"r lo arm01",1);
  *(uint *)(param_1 + 0x10b20) = uVar3;
  uVar3 = FUN_00543100(uVar2,"l high arm01",1);
  *(uint *)(param_1 + 0x10b24) = uVar3;
  uVar3 = FUN_00543100(uVar2,"l lo arm01",1);
  *(uint *)(param_1 + 0x10b28) = uVar3;
  uVar3 = FUN_00543100(uVar2,"r thigh01",1);
  *(uint *)(param_1 + 0x10b2c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"r shin01",1);
  *(uint *)(param_1 + 0x10b30) = uVar3;
  uVar3 = FUN_00543100(uVar2,"l thigh01",1);
  *(uint *)(param_1 + 0x10b34) = uVar3;
  uVar3 = FUN_00543100(uVar2,"l shin01",1);
  *(uint *)(param_1 + 0x10b38) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lo torso01",1);
  *(uint *)(param_1 + 0x10b3c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"high torso01",1);
  *(uint *)(param_1 + 0x10b40) = uVar3;
  uVar2 = FUN_00543100(uVar2,"head01",1);
  *(uint *)(param_1 + 0x10b44) = uVar2;
  FUN_00487eb0(param_1);
  *(uint *)(param_1 + 0x10b54) = 0;
  *(uint *)(param_1 + 0x10b58) = 0;
  *(uint *)(param_1 + 0x10b5c) = 0;
  *(uint *)(param_1 + 0x10b60) = 0;
  *(uint *)(param_1 + 0x10b64) = 0;
  *(uint *)(param_1 + 0x10b48) = 0;
  *(uint *)(param_1 + 0x10b4c) = 0;
  *(uint *)(param_1 + 0x10b50) = 0;
  return;
}
