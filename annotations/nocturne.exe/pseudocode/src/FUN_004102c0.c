// Name: FUN_004102c0
// Address: 004102c0
// Address Range: [[004102c0, 00410474]]
// Convention: unknown
// Signature: void FUN_004102c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004102c0(int param_1)

{
  uint uVar1;
  
  FUN_004b48d0(param_1);
  uVar1 = FUN_0051e0a0(param_1 + 0x150);
  DAT_007642e8 = FUN_005179d0(uVar1,"Bip01 head",1);
  _DAT_007642ec = FUN_005179d0(uVar1,"Bip01 L Clavicle",1);
  _DAT_007642f0 = FUN_005179d0(uVar1,"Bip01 R Clavicle",1);
  _DAT_007642f4 = FUN_005179d0(uVar1,"Bip01 L UpperArm",1);
  _DAT_007642f8 = FUN_005179d0(uVar1,"Bip01 R UpperArm",1);
  _DAT_007642fc = FUN_005179d0(uVar1,"Bip01 L ForeArm",1);
  _DAT_00764300 = FUN_005179d0(uVar1,"Bip01 R ForeArm",1);
  _DAT_00764304 = FUN_005179d0(uVar1,"Bip01 L Foot",1);
  _DAT_00764308 = FUN_005179d0(uVar1,"Bip01 R Foot",1);
  _DAT_0076430c = FUN_005179d0(uVar1,"Bip01 L Thigh",1);
  _DAT_00764310 = FUN_005179d0(uVar1,"Bip01 R Thigh",1);
  _DAT_00764314 = FUN_005179d0(uVar1,"Bip01 L Calf",1);
  _DAT_00764318 = FUN_005179d0(uVar1,"Bip01 R Calf",1);
  DAT_0076431c = FUN_005179d0(uVar1,"Bip01 L Hand",1);
  DAT_00764320 = FUN_005179d0(uVar1,"Bip01 R Hand",1);
  _DAT_00764324 = FUN_005179d0(uVar1,"Bip01 Spine2",1);
  _DAT_00764328 = FUN_005179d0(uVar1,"Bip01 Spine",1);
  uVar1 = FUN_005179d0(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x1fb14) = 0;
  *(uint *)(param_1 + 0x25bc) = uVar1;
  FUN_00454510(&DAT_0076436c);
  return;
}
