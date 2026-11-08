// Name: FUN_004d4a20
// Address: 004d4a20
// Address Range: [[004d4a20, 004d4c34]]
// Convention: unknown
// Signature: void FUN_004d4a20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4a20(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_004ce4a0(param_1);
  uVar2 = FUN_00547890(param_1 + 0x2b4);
  _DAT_01cee0b4 = FUN_00540e80(uVar2,"Bip01 head",1);
  _DAT_01cee0b8 = FUN_00540e80(uVar2,"Bip01 L Clavicle",1);
  _DAT_01cee0bc = FUN_00540e80(uVar2,"Bip01 R Clavicle",1);
  _DAT_01cee0c0 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cee0c4 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cee0c8 = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_01cee0cc = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_01cee0d0 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_01cee0d4 = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_01cee0d8 = FUN_00540e80(uVar2,"Bip01 L Thigh",1);
  _DAT_01cee0dc = FUN_00540e80(uVar2,"Bip01 R Thigh",1);
  _DAT_01cee0e0 = FUN_00540e80(uVar2,"Bip01 L Calf",1);
  _DAT_01cee0e4 = FUN_00540e80(uVar2,"Bip01 R Calf",1);
  _DAT_01cee0e8 = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  _DAT_01cee0ec = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_01cee0f0 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  _DAT_01cee0f4 = FUN_00540e80(uVar2,"Bip01 Spine1",1);
  _DAT_01cee0f8 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x261c) = 0;
  *(uint *)(param_1 + 0x2694) = 0;
  *(uint *)(param_1 + 0x25640) = 0;
  *(uint *)(param_1 + 0x2618) = _DAT_01cee0e8;
  *(uint *)(param_1 + 0x2690) = _DAT_01cee0ec;
  iVar1 = _DAT_01cedef4;
  *(uint *)(param_1 + 0x25664) = 0;
  iVar1 = *(int *)(iVar1 * 4 + 0x1cedee4);
  if (param_1 == iVar1) {
    *(uint *)(iVar1 + 0x3434) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0x2564c) = 0;
  *(uint *)(param_1 + 0x25648) = 0;
  *(uint *)(param_1 + 0x2566c) = 0;
  return;
}
