// Name: FUN_004f0c20
// Address: 004f0c20
// Address Range: [[004f0c20, 004f0e34]]
// Convention: unknown
// Signature: void FUN_004f0c20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0c20(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_004eaa10(param_1);
  uVar2 = FUN_00569f30(param_1 + 0x158);
  _DAT_01d06c74 = FUN_005634f0(uVar2,"Bip01 head",1);
  _DAT_01d06c78 = FUN_005634f0(uVar2,"Bip01 L Clavicle",1);
  _DAT_01d06c7c = FUN_005634f0(uVar2,"Bip01 R Clavicle",1);
  _DAT_01d06c80 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d06c84 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d06c88 = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01d06c8c = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01d06c90 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_01d06c94 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_01d06c98 = FUN_005634f0(uVar2,"Bip01 L Thigh",1);
  _DAT_01d06c9c = FUN_005634f0(uVar2,"Bip01 R Thigh",1);
  _DAT_01d06ca0 = FUN_005634f0(uVar2,"Bip01 L Calf",1);
  _DAT_01d06ca4 = FUN_005634f0(uVar2,"Bip01 R Calf",1);
  _DAT_01d06ca8 = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_01d06cac = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_01d06cb0 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  _DAT_01d06cb4 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  _DAT_01d06cb8 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x25ac) = 0;
  *(uint *)(param_1 + 0x2624) = 0;
  *(uint *)(param_1 + 0x1ffac) = 0;
  *(uint *)(param_1 + 0x25a8) = _DAT_01d06ca8;
  *(uint *)(param_1 + 0x2620) = _DAT_01d06cac;
  iVar1 = _DAT_01d06ab4;
  *(uint *)(param_1 + 0x1ffd0) = 0;
  iVar1 = *(int *)(iVar1 * 4 + 0x1d06aa4);
  if (param_1 == iVar1) {
    *(uint *)(iVar1 + 0x2ff0) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0x1ffb8) = 0;
  *(uint *)(param_1 + 0x1ffb4) = 0;
  *(uint *)(param_1 + 0x1ffd8) = 0;
  return;
}
