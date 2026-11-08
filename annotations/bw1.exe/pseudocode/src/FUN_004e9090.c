// Name: FUN_004e9090
// Address: 004e9090
// Address Range: [[004e9090, 004e9221]]
// Convention: unknown
// Signature: void FUN_004e9090(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e9090(int param_1)

{
  uint uVar1;
  
  FUN_004eaa10(param_1);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  _DAT_01d069d8 = FUN_005634f0(uVar1,"Bip01 head",1);
  _DAT_01d069dc = FUN_005634f0(uVar1,"Bip01 L Clavicle",1);
  _DAT_01d069e0 = FUN_005634f0(uVar1,"Bip01 R Clavicle",1);
  _DAT_01d069e4 = FUN_005634f0(uVar1,"Bip01 L UpperArm",1);
  _DAT_01d069e8 = FUN_005634f0(uVar1,"Bip01 R UpperArm",1);
  _DAT_01d069ec = FUN_005634f0(uVar1,"Bip01 L ForeArm",1);
  _DAT_01d069f0 = FUN_005634f0(uVar1,"Bip01 R ForeArm",1);
  _DAT_01d069f4 = FUN_005634f0(uVar1,"Bip01 L Foot",1);
  _DAT_01d069f8 = FUN_005634f0(uVar1,"Bip01 R Foot",1);
  _DAT_01d069fc = FUN_005634f0(uVar1,"Bip01 L Thigh",1);
  _DAT_01d06a00 = FUN_005634f0(uVar1,"Bip01 R Thigh",1);
  _DAT_01d06a04 = FUN_005634f0(uVar1,"Bip01 L Calf",1);
  _DAT_01d06a08 = FUN_005634f0(uVar1,"Bip01 R Calf",1);
  _DAT_01d06a0c = FUN_005634f0(uVar1,"Bip01 L Hand",1);
  _DAT_01d06a10 = FUN_005634f0(uVar1,"Bip01 R Hand",1);
  _DAT_01d06a14 = FUN_005634f0(uVar1,"Bip01 Spine2",1);
  _DAT_01d06a18 = FUN_005634f0(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x1ffac) = 0;
  return;
}
