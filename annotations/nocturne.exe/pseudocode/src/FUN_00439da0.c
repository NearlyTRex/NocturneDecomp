// Name: FUN_00439da0
// Address: 00439da0
// Address Range: [[00439da0, 00439f31]]
// Convention: unknown
// Signature: void FUN_00439da0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00439da0(int param_1)

{
  uint uVar1;
  
  FUN_004b48d0(param_1);
  uVar1 = FUN_0051e0a0(param_1 + 0x150);
  DAT_0077ac8c = FUN_005179d0(uVar1,"Bip01 head",1);
  _DAT_0077ac90 = FUN_005179d0(uVar1,"Bip01 L Clavicle",1);
  _DAT_0077ac94 = FUN_005179d0(uVar1,"Bip01 R Clavicle",1);
  _DAT_0077ac98 = FUN_005179d0(uVar1,"Bip01 L UpperArm",1);
  _DAT_0077ac9c = FUN_005179d0(uVar1,"Bip01 R UpperArm",1);
  _DAT_0077aca0 = FUN_005179d0(uVar1,"Bip01 L ForeArm",1);
  _DAT_0077aca4 = FUN_005179d0(uVar1,"Bip01 R ForeArm",1);
  _DAT_0077aca8 = FUN_005179d0(uVar1,"Bip01 L Foot",1);
  _DAT_0077acac = FUN_005179d0(uVar1,"Bip01 R Foot",1);
  _DAT_0077acb0 = FUN_005179d0(uVar1,"Bip01 L Thigh",1);
  _DAT_0077acb4 = FUN_005179d0(uVar1,"Bip01 R Thigh",1);
  _DAT_0077acb8 = FUN_005179d0(uVar1,"Bip01 L Calf",1);
  _DAT_0077acbc = FUN_005179d0(uVar1,"Bip01 R Calf",1);
  _DAT_0077acc0 = FUN_005179d0(uVar1,"Bip01 L Hand",1);
  _DAT_0077acc4 = FUN_005179d0(uVar1,"Bip01 R Hand",1);
  _DAT_0077acc8 = FUN_005179d0(uVar1,"Bip01 Spine2",1);
  _DAT_0077accc = FUN_005179d0(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x1fa3c) = 0;
  return;
}
