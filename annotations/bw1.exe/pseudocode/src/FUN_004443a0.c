// Name: FUN_004443a0
// Address: 004443a0
// Address Range: [[004443a0, 00444531]]
// Convention: unknown
// Signature: void FUN_004443a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004443a0(int param_1)

{
  uint uVar1;
  
  FUN_004eaa10(param_1);
  uVar1 = FUN_00569f30(param_1 + 0x158);
  DAT_007db570 = FUN_005634f0(uVar1,"Bip01 head",1);
  _DAT_007db574 = FUN_005634f0(uVar1,"Bip01 L Clavicle",1);
  _DAT_007db578 = FUN_005634f0(uVar1,"Bip01 R Clavicle",1);
  _DAT_007db57c = FUN_005634f0(uVar1,"Bip01 L UpperArm",1);
  _DAT_007db580 = FUN_005634f0(uVar1,"Bip01 R UpperArm",1);
  _DAT_007db584 = FUN_005634f0(uVar1,"Bip01 L ForeArm",1);
  _DAT_007db588 = FUN_005634f0(uVar1,"Bip01 R ForeArm",1);
  _DAT_007db58c = FUN_005634f0(uVar1,"Bip01 L Foot",1);
  _DAT_007db590 = FUN_005634f0(uVar1,"Bip01 R Foot",1);
  _DAT_007db594 = FUN_005634f0(uVar1,"Bip01 L Thigh",1);
  _DAT_007db598 = FUN_005634f0(uVar1,"Bip01 R Thigh",1);
  _DAT_007db59c = FUN_005634f0(uVar1,"Bip01 L Calf",1);
  _DAT_007db5a0 = FUN_005634f0(uVar1,"Bip01 R Calf",1);
  _DAT_007db5a4 = FUN_005634f0(uVar1,"Bip01 L Hand",1);
  _DAT_007db5a8 = FUN_005634f0(uVar1,"Bip01 R Hand",1);
  _DAT_007db5ac = FUN_005634f0(uVar1,"Bip01 Spine2",1);
  _DAT_007db5b0 = FUN_005634f0(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x1ffac) = 0;
  return;
}
