// Name: FUN_0041b940
// Address: 0041b940
// Address Range: [[0041b940, 0041bb1c]]
// Convention: unknown
// Signature: void FUN_0041b940(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041b940(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x158;
  FUN_00569b20(iVar2);
  uVar1 = FUN_00569f30(iVar2);
  DAT_007c4ff0 = FUN_005634f0(uVar1,"CBip01 Head" + 1,1);
  _DAT_007c4ffc = FUN_005634f0(uVar1,"Bip01 L ForeArm",1);
  _DAT_007c5000 = FUN_005634f0(uVar1,"Bip01 R ForeArm",1);
  DAT_007c5004 = FUN_005634f0(uVar1,"Bip01 L UpperArm",1);
  DAT_007c5008 = FUN_005634f0(uVar1,"Bip01 R UpperArm",1);
  _DAT_007c500c = FUN_005634f0(uVar1,"Bip01 L Foot",1);
  _DAT_007c5010 = FUN_005634f0(uVar1,"Bip01 R Foot",1);
  DAT_007c4ff4 = FUN_005634f0(uVar1,"Bip01 L Hand",1);
  DAT_007c4ff8 = FUN_005634f0(uVar1,"Bip01 R Hand",1);
  DAT_007c5014 = FUN_005634f0(uVar1,"Bip01 Spine",1);
  DAT_007c5018 = FUN_005634f0(uVar1,"Bip01 Spine2",1);
  DAT_007c4ff0 = FUN_005634f0(uVar1,"Bip01 Head",1);
  DAT_007c5004 = FUN_005634f0(uVar1,"Bip01 L UpperArm",1);
  DAT_007c5008 = FUN_005634f0(uVar1,"Bip01 R UpperArm",1);
  DAT_007c5014 = FUN_005634f0(uVar1,"Bip01 Spine",1);
  DAT_007c5018 = FUN_005634f0(uVar1,"Bip01 Spine2",1);
  iVar2 = FUN_00569eb0(iVar2);
  iVar2 = *(int *)(iVar2 + 0xc00);
  *(int *)(param_1 + 0xc2e4) = iVar2;
  if (0x14 < iVar2) {
    _DAT_01d1d400 = "..\\core\\boneguy.cpp";
    _DAT_01d1d404 = 0x130;
    FUN_005030e0("CBoneGuy::explode - Not enough containers");
  }
  *(uint *)(param_1 + 0x25a8) = DAT_007c4ff4;
  *(uint *)(param_1 + 0x2620) = DAT_007c4ff8;
  FUN_004a0510(param_1);
  *(uint *)(param_1 + 0xc278) = 0;
  return;
}
