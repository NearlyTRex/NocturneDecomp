// Name: FUN_004d3850
// Address: 004d3850
// Address Range: [[004d3850, 004d3a2e]]
// Convention: unknown
// Signature: void FUN_004d3850(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d3850(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*(int *)(0x01CB6900 + 0x18) == 0) {
    pcVar3 = "hotdemonx.dfm";
  }
  else {
    pcVar3 = "hotdemon.dfm";
  }
  FUN_005478b0(param_1 + 0x2b4,pcVar3);
  FUN_00487eb0(param_1);
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  uVar2 = FUN_00547890(iVar1);
  _DAT_01cee00c = FUN_00540e80(uVar2,"Bip01 Head",1);
  _DAT_01cee018 = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_01cee01c = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_01cee020 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cee024 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cee028 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_01cee02c = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_01cee010 = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  _DAT_01cee014 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_01cee030 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_01cee034 = FUN_00540e80(uVar2,"Bip01 Spine1",1);
  _DAT_01cee038 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  _DAT_01cee00c = FUN_00540e80(uVar2,"Bip01 Head",1);
  _DAT_01cee020 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cee024 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cee030 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_01cee038 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  FUN_00547810(iVar1);
  *(uint *)(param_1 + 0x10af8) = 0;
  *(uint *)(param_1 + 0x10afc) = 0;
  return;
}
