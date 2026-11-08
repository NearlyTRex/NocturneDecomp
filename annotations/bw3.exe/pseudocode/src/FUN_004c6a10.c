// Name: FUN_004c6a10
// Address: 004c6a10
// Address Range: [[004c6a10, 004c6c71]]
// Convention: unknown
// Signature: void FUN_004c6a10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c6a10(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x158;
  FUN_0054e6b0(iVar1);
  uVar2 = FUN_0054eac0(iVar1);
  _DAT_01d22da0 = FUN_00548090(uVar2,"@Bip01 Head" + 1,1);
  _DAT_01d22dac = FUN_00548090(uVar2,"Bip01 L ForeArm",1);
  _DAT_01d22db0 = FUN_00548090(uVar2,"Bip01 R ForeArm",1);
  _DAT_01d22db4 = FUN_00548090(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d22db8 = FUN_00548090(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d22dbc = FUN_00548090(uVar2,"Bip01 L Foot",1);
  _DAT_01d22dc0 = FUN_00548090(uVar2,"Bip01 R Foot",1);
  _DAT_01d22da4 = FUN_00548090(uVar2,"Bip01 L Hand",1);
  _DAT_01d22da8 = FUN_00548090(uVar2,"Bip01 R Hand",1);
  _DAT_01d22dc4 = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_01d22dc8 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_0054ea40(iVar1);
  uVar3 = FUN_0054a310(uVar2,"r high arm01",1);
  *(uint *)(param_1 + 0xd078) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"r lo arm01",1);
  *(uint *)(param_1 + 0xd07c) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"l high arm01",1);
  *(uint *)(param_1 + 0xd080) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"l lo arm01",1);
  *(uint *)(param_1 + 0xd084) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"r thigh01",1);
  *(uint *)(param_1 + 0xd088) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"r shin01",1);
  *(uint *)(param_1 + 0xd08c) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"l thigh01",1);
  *(uint *)(param_1 + 0xd090) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"l shin01",1);
  *(uint *)(param_1 + 0xd094) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"lo torso01",1);
  *(uint *)(param_1 + 0xd098) = uVar3;
  uVar3 = FUN_0054a310(uVar2,"high torso01",1);
  *(uint *)(param_1 + 0xd09c) = uVar3;
  uVar2 = FUN_0054a310(uVar2,"head01",1);
  *(uint *)(param_1 + 0xd0a0) = uVar2;
  FUN_00489110(param_1);
  *(uint *)(param_1 + 0xd0b0) = 0;
  *(uint *)(param_1 + 0xd0b4) = 0;
  *(uint *)(param_1 + 0xd0b8) = 0;
  *(uint *)(param_1 + 0xd0bc) = 0;
  *(uint *)(param_1 + 0xd0c0) = 0;
  *(uint *)(param_1 + 0xd0a4) = 0;
  *(uint *)(param_1 + 0xd0a8) = 0;
  *(uint *)(param_1 + 0xd0ac) = 0;
  return;
}
