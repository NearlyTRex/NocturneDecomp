// Name: FUN_004efa70
// Address: 004efa70
// Address Range: [[004efa70, 004efc4e]]
// Convention: unknown
// Signature: void FUN_004efa70(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004efa70(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*(int *)(0x01CCF390 + 0x18) == 0) {
    pcVar3 = "hotdemonx.dfm";
  }
  else {
    pcVar3 = "hotdemon.dfm";
  }
  FUN_00569f50(param_1 + 0x158,pcVar3);
  FUN_004a0510(param_1);
  iVar1 = param_1 + 0x158;
  FUN_00569b20(iVar1);
  uVar2 = FUN_00569f30(iVar1);
  _DAT_01d06bcc = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_01d06bd8 = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01d06bdc = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01d06be0 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d06be4 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d06be8 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_01d06bec = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_01d06bd0 = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_01d06bd4 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_01d06bf0 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01d06bf4 = FUN_005634f0(uVar2,"Bip01 Spine1",1);
  _DAT_01d06bf8 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  _DAT_01d06bcc = FUN_005634f0(uVar2,"Bip01 Head",1);
  _DAT_01d06be0 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d06be4 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d06bf0 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_01d06bf8 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  FUN_00569eb0(iVar1);
  *(uint *)(param_1 + 0xc268) = 0;
  *(uint *)(param_1 + 0xc26c) = 0;
  return;
}
