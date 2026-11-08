// Name: FUN_0040f300
// Address: 0040f300
// Address Range: [[0040f300, 0040f4b4]]
// Convention: unknown
// Signature: void FUN_0040f300(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f300(int param_1)

{
  uint uVar1;
  
  FUN_004eaa10(param_1);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  DAT_007c3498 = FUN_005634f0(uVar1,"Bip01 head",1);
  _DAT_007c349c = FUN_005634f0(uVar1,"Bip01 L Clavicle",1);
  _DAT_007c34a0 = FUN_005634f0(uVar1,"Bip01 R Clavicle",1);
  _DAT_007c34a4 = FUN_005634f0(uVar1,"Bip01 L UpperArm",1);
  _DAT_007c34a8 = FUN_005634f0(uVar1,"Bip01 R UpperArm",1);
  _DAT_007c34ac = FUN_005634f0(uVar1,"Bip01 L ForeArm",1);
  _DAT_007c34b0 = FUN_005634f0(uVar1,"Bip01 R ForeArm",1);
  _DAT_007c34b4 = FUN_005634f0(uVar1,"Bip01 L Foot",1);
  _DAT_007c34b8 = FUN_005634f0(uVar1,"Bip01 R Foot",1);
  _DAT_007c34bc = FUN_005634f0(uVar1,"Bip01 L Thigh",1);
  _DAT_007c34c0 = FUN_005634f0(uVar1,"Bip01 R Thigh",1);
  _DAT_007c34c4 = FUN_005634f0(uVar1,"Bip01 L Calf",1);
  _DAT_007c34c8 = FUN_005634f0(uVar1,"Bip01 R Calf",1);
  DAT_007c34cc = FUN_005634f0(uVar1,"Bip01 L Hand",1);
  DAT_007c34d0 = FUN_005634f0(uVar1,"Bip01 R Hand",1);
  _DAT_007c34d4 = FUN_005634f0(uVar1,"Bip01 Spine2",1);
  _DAT_007c34d8 = FUN_005634f0(uVar1,"Bip01 Spine",1);
  uVar1 = FUN_005634f0(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x20084) = 0;
  *(uint *)(param_1 + 0x2750) = uVar1;
  FUN_004688e0(&DAT_007c351c);
  return;
}
