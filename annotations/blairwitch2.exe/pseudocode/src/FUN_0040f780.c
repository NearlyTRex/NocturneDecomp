// Name: FUN_0040f780
// Address: 0040f780
// Address Range: [[0040f780, 0040f934]]
// Convention: unknown
// Signature: void FUN_0040f780(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f780(int param_1)

{
  uint uVar1;
  
  FUN_004ce4a0(param_1);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  DAT_007bc498 = FUN_00540e80(uVar1,"Bip01 head",1);
  _DAT_007bc49c = FUN_00540e80(uVar1,"Bip01 L Clavicle",1);
  _DAT_007bc4a0 = FUN_00540e80(uVar1,"Bip01 R Clavicle",1);
  _DAT_007bc4a4 = FUN_00540e80(uVar1,"Bip01 L UpperArm",1);
  _DAT_007bc4a8 = FUN_00540e80(uVar1,"Bip01 R UpperArm",1);
  _DAT_007bc4ac = FUN_00540e80(uVar1,"Bip01 L ForeArm",1);
  _DAT_007bc4b0 = FUN_00540e80(uVar1,"Bip01 R ForeArm",1);
  _DAT_007bc4b4 = FUN_00540e80(uVar1,"Bip01 L Foot",1);
  _DAT_007bc4b8 = FUN_00540e80(uVar1,"Bip01 R Foot",1);
  _DAT_007bc4bc = FUN_00540e80(uVar1,"Bip01 L Thigh",1);
  _DAT_007bc4c0 = FUN_00540e80(uVar1,"Bip01 R Thigh",1);
  _DAT_007bc4c4 = FUN_00540e80(uVar1,"Bip01 L Calf",1);
  _DAT_007bc4c8 = FUN_00540e80(uVar1,"Bip01 R Calf",1);
  DAT_007bc4cc = FUN_00540e80(uVar1,"Bip01 L Hand",1);
  DAT_007bc4d0 = FUN_00540e80(uVar1,"Bip01 R Hand",1);
  _DAT_007bc4d4 = FUN_00540e80(uVar1,"Bip01 Spine2",1);
  _DAT_007bc4d8 = FUN_00540e80(uVar1,"Bip01 Spine",1);
  uVar1 = FUN_00540e80(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x25718) = 0;
  *(uint *)(param_1 + 0x27c0) = uVar1;
  FUN_0044fd00(&DAT_007bc51c);
  return;
}
