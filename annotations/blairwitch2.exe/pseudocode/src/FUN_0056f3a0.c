// Name: FUN_0056f3a0
// Address: 0056f3a0
// Address Range: [[0056f3a0, 0056f6c5]]
// Convention: unknown
// Signature: void FUN_0056f3a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056f3a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(0x01CB6900 + 0x18) == 0) {
    FUN_005478b0(param_1 + 0x2b4,"succubusx.dfm");
    pcVar4 = "hotdemonx.dfm";
  }
  else {
    FUN_005478b0(param_1 + 0x2b4,"succubus.dfm");
    pcVar4 = "hotdemon.dfm";
  }
  FUN_005478b0(param_1 + 0x10af8,pcVar4);
  FUN_00487eb0(param_1);
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  iVar2 = param_1 + 0x10af8;
  FUN_00547480(iVar2);
  FUN_005b14a0(param_1 + 0x12dac);
  iVar5 = param_1 + 0x30;
  iVar6 = param_1 + 0x20;
  FUN_005b1740(param_1 + 0x12dac,iVar6,iVar5,iVar2,iVar5,iVar6);
  FUN_005b1780(param_1 + 0x2d0c,iVar6,iVar5,0x3d4ccccd,*(uint *)(param_1 + 0x2574),iVar2);
  uVar3 = FUN_00547890(iVar1);
  _DAT_0264becc = FUN_00540e80(uVar3,"Bip01 Head",1);
  _DAT_0264bed8 = FUN_00540e80(uVar3,"Bip01 L ForeArm",1);
  _DAT_0264bedc = FUN_00540e80(uVar3,"Bip01 R ForeArm",1);
  _DAT_0264bee0 = FUN_00540e80(uVar3,"Bip01 L UpperArm",1);
  _DAT_0264bee4 = FUN_00540e80(uVar3,"Bip01 R UpperArm",1);
  _DAT_0264bee8 = FUN_00540e80(uVar3,"Bip01 L Foot",1);
  _DAT_0264beec = FUN_00540e80(uVar3,"Bip01 R Foot",1);
  _DAT_0264bed0 = FUN_00540e80(uVar3,"Bip01 L Hand",1);
  _DAT_0264bed4 = FUN_00540e80(uVar3,"Bip01 R Hand",1);
  _DAT_0264bef0 = FUN_00540e80(uVar3,"Bip01 Spine",1);
  _DAT_0264bef4 = FUN_00540e80(uVar3,"Bip01 Spine1",1);
  _DAT_0264bef8 = FUN_00540e80(uVar3,"Bip01 Spine2",1);
  _DAT_0264becc = FUN_00540e80(uVar3,"Bip01 Head",1);
  _DAT_0264bee0 = FUN_00540e80(uVar3,"Bip01 L UpperArm",1);
  _DAT_0264bee4 = FUN_00540e80(uVar3,"Bip01 R UpperArm",1);
  _DAT_0264bef0 = FUN_00540e80(uVar3,"Bip01 Spine",1);
  _DAT_0264bef8 = FUN_00540e80(uVar3,"Bip01 Spine2",1);
  FUN_00544e60(iVar2);
  FUN_00544e60(iVar1);
  *(float *)(param_1 + 0x960) = *(float *)(param_1 + 0x960) + _DAT_005ec0de;
  FUN_00546ae0(iVar1);
  FUN_00546ae0(iVar2);
  iVar5 = param_1 + 0x12f78;
  FUN_005b6f80(iVar5,0,iVar1);
  FUN_005b6f80(iVar5,1,iVar2);
  _DAT_0268014c = 0;
  FUN_005b70d0(iVar5,1,*(uint *)(param_1 + 0x12f40),0);
  _DAT_0268014c = 1;
  FUN_005b70d0(iVar5,1,*(uint *)(param_1 + 0x12f40),0);
  _DAT_0268014c = 0;
  *(uint *)(param_1 + 0x13ba0) = 0;
  FUN_005b71d0(iVar5);
  *(uint *)(param_1 + 0x12f70) = 0;
  *(uint *)(param_1 + 0x12f74) = 0;
  *(uint *)(param_1 + 0x12f68) = 0;
  *(uint *)(param_1 + 0x12f6c) = 0x40a00000;
  FUN_00544ee0(iVar2);
  FUN_00544ee0(iVar1);
  return;
}
