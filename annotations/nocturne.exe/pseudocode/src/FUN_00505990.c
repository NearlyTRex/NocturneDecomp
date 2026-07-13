// Name: FUN_00505990
// Address: 00505990
// Address Range: [[00505990, 00505b3f]]
// Convention: unknown
// Signature: void FUN_00505990(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00505990(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_004796b0(param_1);
  iVar1 = param_1 + 0x150;
  FUN_0051dcd0(iVar1);
  uVar2 = FUN_0051e0a0(iVar1);
  _DAT_01e57218 = FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_01e57224 = FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01e57228 = FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01e5722c = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01e57230 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01e57234 = FUN_005179d0(uVar2,"Bip01 L Foot",1);
  _DAT_01e57238 = FUN_005179d0(uVar2,"Bip01 R Foot",1);
  _DAT_01e5721c = FUN_005179d0(uVar2,"Bip01 L Hand",1);
  _DAT_01e57220 = FUN_005179d0(uVar2,"Bip01 R Hand",1);
  _DAT_01e5723c = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_01e57240 = FUN_005179d0(uVar2,"Bip01 Spine1",1);
  _DAT_01e57244 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  _DAT_01e57218 = FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_01e5722c = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01e57230 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01e5723c = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_01e57244 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  FUN_0051e020(iVar1);
  *(uint *)(param_1 + 0xbd28) = 0;
  *(uint *)(param_1 + 0xbd24) = 0;
  return;
}
