// Name: FUN_004cc7d0
// Address: 004cc7d0
// Address Range: [[004cc7d0, 004cc961]]
// Convention: unknown
// Signature: void FUN_004cc7d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004cc7d0(int param_1)

{
  uint uVar1;
  
  FUN_004ce4a0(param_1);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  _DAT_01cede20 = FUN_00540e80(uVar1,"Bip01 head",1);
  _DAT_01cede24 = FUN_00540e80(uVar1,"Bip01 L Clavicle",1);
  _DAT_01cede28 = FUN_00540e80(uVar1,"Bip01 R Clavicle",1);
  _DAT_01cede2c = FUN_00540e80(uVar1,"Bip01 L UpperArm",1);
  _DAT_01cede30 = FUN_00540e80(uVar1,"Bip01 R UpperArm",1);
  _DAT_01cede34 = FUN_00540e80(uVar1,"Bip01 L ForeArm",1);
  _DAT_01cede38 = FUN_00540e80(uVar1,"Bip01 R ForeArm",1);
  _DAT_01cede3c = FUN_00540e80(uVar1,"Bip01 L Foot",1);
  _DAT_01cede40 = FUN_00540e80(uVar1,"Bip01 R Foot",1);
  _DAT_01cede44 = FUN_00540e80(uVar1,"Bip01 L Thigh",1);
  _DAT_01cede48 = FUN_00540e80(uVar1,"Bip01 R Thigh",1);
  _DAT_01cede4c = FUN_00540e80(uVar1,"Bip01 L Calf",1);
  _DAT_01cede50 = FUN_00540e80(uVar1,"Bip01 R Calf",1);
  _DAT_01cede54 = FUN_00540e80(uVar1,"Bip01 L Hand",1);
  _DAT_01cede58 = FUN_00540e80(uVar1,"Bip01 R Hand",1);
  _DAT_01cede5c = FUN_00540e80(uVar1,"Bip01 Spine2",1);
  _DAT_01cede60 = FUN_00540e80(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x25640) = 0;
  return;
}
