// Name: FUN_004287e0
// Address: 004287e0
// Address Range: [[004287e0, 00428a7e]]
// Convention: unknown
// Signature: void FUN_004287e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004287e0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00569b20(param_1 + 0x158);
  iVar1 = FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xc2f0) = 0x3f400000;
  }
  else {
    *(uint *)(param_1 + 0xc2f0) = 0x3f800000;
  }
  uVar2 = FUN_00569f30(param_1 + 0x158);
  uVar3 = FUN_005634f0(uVar2,"Bip01 Head",1);
  *(uint *)(param_1 + 0xc28c) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 L Forearm",1);
  *(uint *)(param_1 + 0xc298) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  *(uint *)(param_1 + 0xc29c) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  *(uint *)(param_1 + 0xc2a0) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  *(uint *)(param_1 + 0xc2a4) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  *(uint *)(param_1 + 0xc2a8) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  *(uint *)(param_1 + 0xc2ac) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  *(uint *)(param_1 + 0xc290) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  *(uint *)(param_1 + 0xc294) = uVar3;
  uVar3 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  *(uint *)(param_1 + 0xc2b0) = uVar3;
  uVar2 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  *(uint *)(param_1 + 0xc2b4) = uVar2;
  uVar2 = FUN_00569eb0(param_1 + 0x158);
  uVar3 = FUN_00565780(uVar2,"larm01",1);
  *(uint *)(param_1 + 0xc2b8) = uVar3;
  uVar3 = FUN_00565780(uVar2,"l4arm01",1);
  *(uint *)(param_1 + 0xc2bc) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rarm01",1);
  *(uint *)(param_1 + 0xc2c0) = uVar3;
  iVar1 = FUN_00565780(uVar2,"r4arm01",0);
  *(int *)(param_1 + 0xc2c4) = iVar1;
  if (iVar1 < 0) {
    *(uint *)(param_1 + 0xc2c4) = 0x3b;
  }
  uVar3 = FUN_00565780(uVar2,"waist01",0);
  *(uint *)(param_1 + 0xc2c8) = uVar3;
  uVar3 = FUN_00565780(uVar2,"torso01",1);
  *(uint *)(param_1 + 0xc2cc) = uVar3;
  uVar2 = FUN_00565780(uVar2,"head01",1);
  *(uint *)(param_1 + 0x2384) = 0;
  *(uint *)(param_1 + 0xc2d0) = uVar2;
  *(uint *)(param_1 + 0x25a8) = *(uint *)(param_1 + 0xc290);
  *(uint *)(param_1 + 0x25ac) = *(uint *)(param_1 + 0xc2bc);
  *(uint *)(param_1 + 0x2620) = *(uint *)(param_1 + 0xc294);
  *(uint *)(param_1 + 0x2624) = *(uint *)(param_1 + 0xc2c4);
  FUN_004a0510(param_1);
  if ((-1 < *(int *)(param_1 + 0xc2c8)) && (*(float *)(param_1 + 0x3000) < 0.0)) {
    *(float *)(param_1 + 0x3000) = *(float *)(param_1 + 0x2490) + (float)_DAT_005d52d5;
  }
  *(uint *)(param_1 + 0xc288) = 0;
  *(uint *)(param_1 + 0xc2dc) = 0;
  *(uint *)(param_1 + 0xc2e0) = 0;
  *(uint *)(param_1 + 0xc2d8) = 0;
  return;
}
