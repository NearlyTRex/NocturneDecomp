// Name: FUN_004459c0
// Address: 004459c0
// Address Range: [[004459c0, 00445c60]]
// Convention: unknown
// Signature: void FUN_004459c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004459c0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  
  iVar1 = FUN_004a6c30(0x01C51D80,"COMBATMODEHARD");
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0xca68) = 0x3f400000;
  }
  else {
    *(uint *)(param_1 + 0xca68) = 0x3f800000;
  }
  FUN_004a0510(param_1);
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  fVar4 = (float10)*(float *)(param_1 + 0x2538);
  FUN_005c03a0();
  *(int *)(param_1 + 0xc390) = (int)ROUND(fVar4);
  uVar2 = FUN_00569f30(iVar1);
  DAT_007dc5b0 = FUN_005634f0(uVar2,"Bip01 Head",1);
  DAT_007dc5b4 = FUN_005634f0(uVar2,"Dummy05",1);
  _DAT_007dc5c8 = FUN_005634f0(uVar2,"Bip01 L Forearm",1);
  _DAT_007dc5cc = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_007dc5d0 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_007dc5d4 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_007dc5d8 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_007dc5dc = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  DAT_007dc5b8 = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_007dc5bc = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  DAT_007dc5c0 = FUN_005634f0(uVar2,"Bip01 R Finger0",1);
  _DAT_007dc5c4 = FUN_005634f0(uVar2,"Bip01 L Finger0",1);
  DAT_007dc5e0 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_007dc5e4 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  uVar2 = FUN_00569eb0(iVar1);
  uVar3 = FUN_00565780(uVar2,&DAT_005d6dff,1);
  *(uint *)(param_1 + 0xc2cc) = uVar3;
  uVar3 = FUN_00565780(uVar2,"torso",1);
  *(uint *)(param_1 + 0xc2d0) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lforearm",1);
  *(uint *)(param_1 + 0xc2d4) = uVar3;
  uVar3 = FUN_00565780(uVar2,&DAT_005d6e13,1);
  *(uint *)(param_1 + 0xc2d8) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rforearm",1);
  *(uint *)(param_1 + 0xc2dc) = uVar3;
  uVar3 = FUN_00565780(uVar2,&DAT_005d6e21,1);
  *(uint *)(param_1 + 0xc2e0) = uVar3;
  uVar3 = FUN_00565780(uVar2,"waist",1);
  *(uint *)(param_1 + 0xc2e4) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lthigh",1);
  *(uint *)(param_1 + 0xc2ec) = uVar3;
  uVar3 = FUN_00565780(uVar2,"lshin",1);
  *(uint *)(param_1 + 0xc2f0) = uVar3;
  uVar3 = FUN_00565780(uVar2,"rthigh",1);
  *(uint *)(param_1 + 0xc2f4) = uVar3;
  uVar2 = FUN_00565780(uVar2,"rshin",1);
  *(uint *)(param_1 + 0xc304) = 0;
  *(uint *)(param_1 + 0xc2f8) = uVar2;
  return;
}
