// Name: FUN_004d6770
// Address: 004d6770
// Address Range: [[004d6770, 004d6a67]]
// Convention: unknown
// Signature: void FUN_004d6770(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d6770(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00489110(param_1);
  iVar1 = param_1 + 0x158;
  FUN_0054e6b0(iVar1);
  uVar2 = FUN_0054eac0(iVar1);
  _DAT_01d5bc0c = FUN_00548090(uVar2,"Bip01 Head",1);
  _DAT_01d5bc18 = FUN_00548090(uVar2,"Bip01 L ForeArm",1);
  _DAT_01d5bc1c = FUN_00548090(uVar2,"Bip01 R ForeArm",1);
  _DAT_01d5bc20 = FUN_00548090(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d5bc24 = FUN_00548090(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d5bc28 = FUN_00548090(uVar2,"Bip01 L Foot",1);
  _DAT_01d5bc2c = FUN_00548090(uVar2,"Bip01 R Foot",1);
  _DAT_01d5bc10 = FUN_00548090(uVar2,"Bip01 L Hand",1);
  _DAT_01d5bc14 = FUN_00548090(uVar2,"Bip01 R Hand",1);
  _DAT_01d5bc30 = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_01d5bc34 = FUN_00548090(uVar2,"Bip01 Spine1",1);
  _DAT_01d5bc38 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  _DAT_01d5bc0c = FUN_00548090(uVar2,"Bip01 Head",1);
  _DAT_01d5bc20 = FUN_00548090(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d5bc24 = FUN_00548090(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d5bc30 = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_01d5bc38 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_0054ea40(iVar1);
  uVar3 = FUN_0054a310(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xd060) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0xd064) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xd068) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"r4arm01",1);
  *(uint *)(param_1 + 0xd06c) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"rthigh01",1);
  *(uint *)(param_1 + 0xd070) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"rshin01",1);
  *(uint *)(param_1 + 0xd074) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"lthigh01",1);
  *(uint *)(param_1 + 0xd078) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"lshin01",1);
  *(uint *)(param_1 + 0xd07c) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"ass01",1);
  *(uint *)(param_1 + 0xd080) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xd084) = uVar3;
  uVar2 = FUN_0054a310(uVar2,"head01",1);
  *(uint *)(param_1 + 0xd054) = 0;
  *(uint *)(param_1 + 0xd058) = 0;
  *(uint *)(param_1 + 0xd088) = uVar2;
  *(uint *)(param_1 + 0x25a8) = _DAT_01d5bc10;
  *(uint *)(param_1 + 0x25ac) = *(uint *)(param_1 + 0xd064);
  *(uint *)(param_1 + 0x2620) = _DAT_01d5bc14;
  *(uint *)(param_1 + 0x2624) = *(uint *)(param_1 + 0xd06c);
  uVar2 = FUN_0040ce40(0x41200000,0x41a00000);
  *(uint *)(param_1 + 0xd05c) = uVar2;
  return;
}
