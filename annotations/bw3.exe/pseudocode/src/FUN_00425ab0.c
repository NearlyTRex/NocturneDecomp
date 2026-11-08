// Name: FUN_00425ab0
// Address: 00425ab0
// Address Range: [[00425ab0, 00425d3d]]
// Convention: unknown
// Signature: void FUN_00425ab0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425ab0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x158;
  FUN_0054e6b0(iVar3);
  uVar1 = FUN_0054eac0(iVar3);
  uVar2 = FUN_00548090(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd078) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L Forearm",1);
  *(uint *)(param_1 + 0xd084) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R ForeArm",1);
  *(uint *)(param_1 + 0xd088) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L UpperArm",1);
  *(uint *)(param_1 + 0xd08c) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R UpperArm",1);
  *(uint *)(param_1 + 0xd090) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0xd094) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0xd098) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0xd07c) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0xd080) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0xd09c) = uVar2;
  uVar1 = FUN_00548090(uVar1,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xd0a0) = uVar1;
  uVar1 = FUN_0054ea40(iVar3);
  uVar2 = FUN_0054a310(uVar1,"larm01",1);
  *(uint *)(param_1 + 0xd0a4) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"l4arm01",1);
  *(uint *)(param_1 + 0xd0a8) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"rarm01",1);
  *(uint *)(param_1 + 0xd0ac) = uVar2;
  iVar3 = FUN_0054a310(uVar1,"r4arm01",0);
  *(int *)(param_1 + 0xd0b0) = iVar3;
  if (iVar3 < 0) {
    *(uint *)(param_1 + 0xd0b0) = 0x3b;
  }
  uVar2 = FUN_0054a310(uVar1,"waist01",0);
  *(uint *)(param_1 + 0xd0b4) = uVar2;
  uVar2 = FUN_0054a310(uVar1,"torso01",1);
  *(uint *)(param_1 + 0xd0b8) = uVar2;
  uVar1 = FUN_0054a310(uVar1,"head01",1);
  *(uint *)(param_1 + 0x2384) = 0;
  *(uint *)(param_1 + 0xd0bc) = uVar1;
  *(uint *)(param_1 + 0x25a8) = *(uint *)(param_1 + 0xd07c);
  *(uint *)(param_1 + 0x25ac) = *(uint *)(param_1 + 0xd0a8);
  *(uint *)(param_1 + 0x2620) = *(uint *)(param_1 + 0xd080);
  *(uint *)(param_1 + 0x2624) = *(uint *)(param_1 + 0xd0b0);
  FUN_00489110(param_1);
  if ((-1 < *(int *)(param_1 + 0xd0b4)) && (*(float *)(param_1 + 0x3280) < 0.0)) {
    *(float *)(param_1 + 0x3280) = *(float *)(param_1 + 0x2490) + (float)_DAT_005b7ab7;
  }
  *(uint *)(param_1 + 0xd074) = 0;
  *(uint *)(param_1 + 0xd0c8) = 0;
  *(uint *)(param_1 + 0xd0cc) = 0;
  *(uint *)(param_1 + 0xd0c4) = 0;
  if (*(int *)(param_1 + 0x3268) != 0) {
    return;
  }
  *(uint *)(param_1 + 0xce5c) = 0x41200000;
  *(uint *)(param_1 + 0xce60) = 0x40a00000;
  *(uint *)(param_1 + 0x2538) = 0x41a00000;
  return;
}
