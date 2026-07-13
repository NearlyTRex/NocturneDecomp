// Name: FUN_004b8d00
// Address: 004b8d00
// Address Range: [[004b8d00, 004b8ede]]
// Convention: unknown
// Signature: void FUN_004b8d00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b8d00(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*(int *)(0x01C775EC + 0x18) == 0) {
    pcVar3 = "hotdemonx.dfm";
  }
  else {
    pcVar3 = "hotdemon.dfm";
  }
  FUN_0051e0c0(param_1 + 0x150,pcVar3);
  FUN_004796b0(param_1);
  iVar1 = param_1 + 0x150;
  FUN_0051dcd0(iVar1);
  uVar2 = FUN_0051e0a0(iVar1);
  _DAT_01cae1e0 = FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_01cae1ec = FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01cae1f0 = FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01cae1f4 = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cae1f8 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cae1fc = FUN_005179d0(uVar2,"Bip01 L Foot",1);
  _DAT_01cae200 = FUN_005179d0(uVar2,"Bip01 R Foot",1);
  _DAT_01cae1e4 = FUN_005179d0(uVar2,"Bip01 L Hand",1);
  _DAT_01cae1e8 = FUN_005179d0(uVar2,"Bip01 R Hand",1);
  _DAT_01cae204 = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_01cae208 = FUN_005179d0(uVar2,"Bip01 Spine1",1);
  _DAT_01cae20c = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  _DAT_01cae1e0 = FUN_005179d0(uVar2,"Bip01 Head",1);
  _DAT_01cae1f4 = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cae1f8 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cae204 = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_01cae20c = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  FUN_0051e020(iVar1);
  *(uint *)(param_1 + 0xbd24) = 0;
  *(uint *)(param_1 + 0xbd28) = 0;
  return;
}
