// Name: FUN_0058d5e0
// Address: 0058d5e0
// Address Range: [[0058d5e0, 0058d937]]
// Convention: unknown
// Signature: void FUN_0058d5e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058d5e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3268) == 0) {
    *(uint *)(param_1 + 0xce5c) = 0x41200000;
    *(uint *)(param_1 + 0xce60) = 0x41700000;
    *(uint *)(param_1 + 0x2538) = 0x42fa0000;
  }
  iVar3 = param_1 + 0x158;
  FUN_0054e6b0(iVar3);
  uVar1 = FUN_0054eac0(iVar3);
  _DAT_02d24970 = FUN_00548090(uVar1,"Bip01 Head",1);
  _DAT_02d2497c = FUN_00548090(uVar1,"Bip01 L ForeArm",1);
  _DAT_02d24980 = FUN_00548090(uVar1,"Bip01 R ForeArm",1);
  _DAT_02d24984 = FUN_00548090(uVar1,"Bip01 L UpperArm",1);
  _DAT_02d24988 = FUN_00548090(uVar1,"Bip01 R UpperArm",1);
  _DAT_02d2498c = FUN_00548090(uVar1,"Bip01 L Foot",1);
  _DAT_02d24990 = FUN_00548090(uVar1,"Bip01 R Foot",1);
  _DAT_02d24974 = FUN_00548090(uVar1,"Bip01 L Hand",1);
  _DAT_02d24978 = FUN_00548090(uVar1,"Bip01 R Hand",1);
  _DAT_02d24994 = FUN_00548090(uVar1,"Bip01 Spine",1);
  _DAT_02d24998 = FUN_00548090(uVar1,"Bip01 Spine1",1);
  _DAT_02d2499c = FUN_00548090(uVar1,"Bip01 Spine2",1);
  _DAT_02d24970 = FUN_00548090(uVar1,"Bip01 Head",1);
  _DAT_02d24984 = FUN_00548090(uVar1,"Bip01 L UpperArm",1);
  _DAT_02d24988 = FUN_00548090(uVar1,"Bip01 R UpperArm",1);
  _DAT_02d24994 = FUN_00548090(uVar1,"Bip01 Spine",1);
  _DAT_02d2499c = FUN_00548090(uVar1,"Bip01 Spine2",1);
  uVar1 = FUN_0054ea40(iVar3);
  uVar2 = FUN_0054a310(uVar1,"larm01",1);
  *(uint *)(param_1 + 0xd0e0) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"l4arm01",1);
  *(uint *)(param_1 + 0xd0e4) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"rarm01",1);
  *(uint *)(param_1 + 0xd0e8) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"r4arm01",1);
  *(uint *)(param_1 + 0xd0ec) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"rthigh01",1);
  *(uint *)(param_1 + 0xd0f0) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"rshin01",1);
  *(uint *)(param_1 + 0xd0f4) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"lthigh01",1);
  *(uint *)(param_1 + 0xd0f8) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"lshin01",1);
  *(uint *)(param_1 + 0xd0fc) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"waist01",1);
  *(uint *)(param_1 + 0xd100) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"torso01",1);
  *(uint *)(param_1 + 0xd104) = uVar2;
  uVar1 = FUN_0054a310(uVar1,"head01",1);
  *(uint *)(param_1 + 0xd108) = uVar1;
  *(uint *)(param_1 + 0x25a8) = _DAT_02d24974;
  *(uint *)(param_1 + 0x25ac) = *(uint *)(param_1 + 0xd0e4);
  *(uint *)(param_1 + 0x2620) = _DAT_02d24978;
  *(uint *)(param_1 + 0x2624) = *(uint *)(param_1 + 0xd0ec);
  FUN_00489110(param_1);
  *(uint *)(param_1 + 0xd10c) = 0;
  *(uint *)(param_1 + 0xd110) = 0;
  if (*(int *)(param_1 + 0xd068) != 0) {
    *(uint *)(param_1 + 0xd050) = 1;
  }
  iVar3 = FUN_004fc070(param_1 + 0x158);
  if (*(int *)(iVar3 + 0x24) == 5) {
    *(uint *)(param_1 + 0x2540) = 0;
  }
  else {
    *(uint *)(param_1 + 0x2540) = 2;
  }
  *(uint *)(param_1 + 0xd0d8) = 0;
  *(uint *)(param_1 + 0xd0dc) = 0;
  *(uint *)(param_1 + 0xd0d4) = 0;
  return;
}
