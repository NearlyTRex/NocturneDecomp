// Name: FUN_0051ea60
// Address: 0051ea60
// Address Range: [[0051ea60, 0051ec1c]]
// Convention: unknown
// Signature: void FUN_0051ea60(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051ea60(int param_1)

{
  uint uVar1;
  
  FUN_004ce4a0(param_1);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  _DAT_01e62068 = FUN_00540e80(uVar1,"Bip01 head",1);
  _DAT_01e6206c = FUN_00540e80(uVar1,"Bip01 L Clavicle",1);
  _DAT_01e62070 = FUN_00540e80(uVar1,"Bip01 R Clavicle",1);
  _DAT_01e62074 = FUN_00540e80(uVar1,"Bip01 L UpperArm",1);
  _DAT_01e62078 = FUN_00540e80(uVar1,"Bip01 R UpperArm",1);
  _DAT_01e6207c = FUN_00540e80(uVar1,"Bip01 L ForeArm",1);
  _DAT_01e62080 = FUN_00540e80(uVar1,"Bip01 R ForeArm",1);
  _DAT_01e62084 = FUN_00540e80(uVar1,"Bip01 L Foot",1);
  _DAT_01e62088 = FUN_00540e80(uVar1,"Bip01 R Foot",1);
  _DAT_01e6208c = FUN_00540e80(uVar1,"Bip01 L Thigh",1);
  _DAT_01e62090 = FUN_00540e80(uVar1,"Bip01 R Thigh",1);
  _DAT_01e62094 = FUN_00540e80(uVar1,"Bip01 L Calf",1);
  _DAT_01e62098 = FUN_00540e80(uVar1,"Bip01 R Calf",1);
  _DAT_01e6209c = FUN_00540e80(uVar1,"Bip01 L Hand",1);
  _DAT_01e620a0 = FUN_00540e80(uVar1,"Bip01 R Hand",1);
  _DAT_01e620a4 = FUN_00540e80(uVar1,"Bip01 Spine2",1);
  _DAT_01e620ac = FUN_00540e80(uVar1,"Bip01 Spine",1);
  _DAT_01e620a8 = FUN_00540e80(uVar1,"Bip01 Spine1",1);
  uVar1 = FUN_00540e80(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0x25640) = 0;
  *(uint *)(param_1 + 0x27c0) = uVar1;
  return;
}
