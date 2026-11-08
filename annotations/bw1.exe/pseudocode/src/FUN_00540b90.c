// Name: FUN_00540b90
// Address: 00540b90
// Address Range: [[00540b90, 00540d4c]]
// Convention: unknown
// Signature: void FUN_00540b90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540b90(int param_1)

{
  uint uVar1;
  
  FUN_004eaa10(param_1);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  _DAT_01e7e014 = FUN_005634f0(uVar1,"Bip01 head",1);
  _DAT_01e7e018 = FUN_005634f0(uVar1,"Bip01 L Clavicle",1);
  _DAT_01e7e01c = FUN_005634f0(uVar1,"Bip01 R Clavicle",1);
  _DAT_01e7e020 = FUN_005634f0(uVar1,"Bip01 L UpperArm",1);
  _DAT_01e7e024 = FUN_005634f0(uVar1,"Bip01 R UpperArm",1);
  _DAT_01e7e028 = FUN_005634f0(uVar1,"Bip01 L ForeArm",1);
  _DAT_01e7e02c = FUN_005634f0(uVar1,"Bip01 R ForeArm",1);
  _DAT_01e7e030 = FUN_005634f0(uVar1,"Bip01 L Foot",1);
  _DAT_01e7e034 = FUN_005634f0(uVar1,"Bip01 R Foot",1);
  _DAT_01e7e038 = FUN_005634f0(uVar1,"Bip01 L Thigh",1);
  _DAT_01e7e03c = FUN_005634f0(uVar1,"Bip01 R Thigh",1);
  _DAT_01e7e040 = FUN_005634f0(uVar1,"Bip01 L Calf",1);
  _DAT_01e7e044 = FUN_005634f0(uVar1,"Bip01 R Calf",1);
  _DAT_01e7e048 = FUN_005634f0(uVar1,"Bip01 L Hand",1);
  _DAT_01e7e04c = FUN_005634f0(uVar1,"Bip01 R Hand",1);
  _DAT_01e7e050 = FUN_005634f0(uVar1,"Bip01 Spine2",1);
  _DAT_01e7e058 = FUN_005634f0(uVar1,"Bip01 Spine",1);
  _DAT_01e7e054 = FUN_005634f0(uVar1,"Bip01 Spine1",1);
  uVar1 = FUN_005634f0(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x1ffac) = 0;
  *(uint *)(param_1 + 0x2750) = uVar1;
  return;
}
