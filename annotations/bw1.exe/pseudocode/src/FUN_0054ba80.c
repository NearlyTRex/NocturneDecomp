// Name: FUN_0054ba80
// Address: 0054ba80
// Address Range: [[0054ba80, 0054bc2f]]
// Convention: unknown
// Signature: void FUN_0054ba80(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054ba80(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_004a0510(param_1);
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  uVar2 = FUN_00569f30(iVar1);
  _DAT_01e820fc = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_01e82108 = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01e8210c = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01e82110 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01e82114 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01e82118 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_01e8211c = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_01e82100 = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_01e82104 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_01e82120 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01e82124 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  _DAT_01e82128 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  _DAT_01e820fc = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_01e82110 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01e82114 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01e82120 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01e82128 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  FUN_00569eb0(iVar1);
  *(uint *)(param_1 + 0xc26c) = 0;
  *(uint *)(param_1 + 0xc268) = 0;
  return;
}
