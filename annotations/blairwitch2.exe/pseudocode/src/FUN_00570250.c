// Name: FUN_00570250
// Address: 00570250
// Address Range: [[00570250, 005704db]]
// Convention: unknown
// Signature: void FUN_00570250(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00570250(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  if (*(int *)(0x01CB6900 + 0x18) == 0) {
    pcVar4 = "svetlanax.dfm";
  }
  else {
    pcVar4 = "svetlana.dfm";
  }
  FUN_005478b0(param_1 + 0x2b4,pcVar4);
  FUN_004ce4a0(param_1);
  iVar1 = param_1 + 0x2b4;
  uVar2 = FUN_00547890(iVar1);
  _DAT_0264bf38 = FUN_00540e80(uVar2,"Bip01 head",1);
  _DAT_0264bf3c = FUN_00540e80(uVar2,"Bip01 L Clavicle",1);
  _DAT_0264bf40 = FUN_00540e80(uVar2,"Bip01 R Clavicle",1);
  _DAT_0264bf44 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_0264bf48 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_0264bf4c = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_0264bf50 = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_0264bf54 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_0264bf58 = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_0264bf5c = FUN_00540e80(uVar2,"Bip01 L Thigh",1);
  _DAT_0264bf60 = FUN_00540e80(uVar2,"Bip01 R Thigh",1);
  _DAT_0264bf64 = FUN_00540e80(uVar2,"Bip01 L Calf",1);
  _DAT_0264bf68 = FUN_00540e80(uVar2,"Bip01 R Calf",1);
  _DAT_0264bf6c = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  _DAT_0264bf70 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_0264bf74 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  _DAT_0264bf78 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_0264bf7c = FUN_00540e80(uVar2,"Bipblade01",1);
  _DAT_0264bf80 = FUN_00540e80(uVar2,"BipR14",1);
  iVar5 = param_1 + 0x25648;
  *(uint *)(param_1 + 0x25640) = 0;
  FUN_005adeb0(iVar5,"svetcape.cth",iVar5);
  FUN_005ae680(iVar5,param_1 + 0x20,param_1 + 0x30,iVar1);
  iVar5 = param_1 + 0x60178;
  FUN_005adeb0(iVar5,"svethair.cth",iVar5);
  FUN_005ae680(iVar5,param_1 + 0x20,param_1 + 0x30,iVar1);
  uVar2 = FUN_00547810(iVar1);
  uVar3 = FUN_00543100(uVar2,"lblade01",1);
  *(uint *)(param_1 + 0x9acbc) = uVar3;
  uVar2 = FUN_00543100(uVar2,"rblade02",1);
  *(uint *)(param_1 + 0x9aca8) = 0;
  *(uint *)(param_1 + 0x9acc0) = uVar2;
  return;
}
