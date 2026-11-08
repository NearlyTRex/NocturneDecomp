// Name: FUN_0052a790
// Address: 0052a790
// Address Range: [[0052a790, 0052a93f]]
// Convention: unknown
// Signature: void FUN_0052a790(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052a790(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00487eb0(param_1);
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  uVar2 = FUN_00547890(iVar1);
  _DAT_01e6614c = FUN_00540e80(uVar2,"Bip01 Head",1);
  _DAT_01e66158 = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_01e6615c = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_01e66160 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_01e66164 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_01e66168 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_01e6616c = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_01e66150 = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  _DAT_01e66154 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_01e66170 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_01e66174 = FUN_00540e80(uVar2,"Bip01 Spine1",1);
  _DAT_01e66178 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  _DAT_01e6614c = FUN_00540e80(uVar2,"Bip01 Head",1);
  _DAT_01e66160 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_01e66164 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_01e66170 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_01e66178 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  FUN_00547810(iVar1);
  *(uint *)(param_1 + 0x10afc) = 0;
  *(uint *)(param_1 + 0x10af8) = 0;
  return;
}
