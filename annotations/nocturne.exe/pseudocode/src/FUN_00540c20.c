// Name: FUN_00540c20
// Address: 00540c20
// Address Range: [[00540c20, 00540f45]]
// Convention: unknown
// Signature: void FUN_00540c20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540c20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(0x01C775EC + 0x18) == 0) {
    FUN_0051e0c0(param_1 + 0x150,"succubusx.dfm");
    pcVar4 = "hotdemonx.dfm";
  }
  else {
    FUN_0051e0c0(param_1 + 0x150,"succubus.dfm");
    pcVar4 = "hotdemon.dfm";
  }
  FUN_0051e0c0(param_1 + 0xbd24,pcVar4);
  FUN_004796b0(param_1);
  iVar1 = param_1 + 0x150;
  FUN_0051dcd0(iVar1);
  iVar2 = param_1 + 0xbd24;
  FUN_0051dcd0(iVar2);
  FUN_00438270(param_1 + 0xdfd8);
  iVar5 = param_1 + 0x30;
  iVar6 = param_1 + 0x20;
  FUN_00438510(param_1 + 0xdfd8,iVar6,iVar5,iVar2,iVar5,iVar6);
  FUN_00438550(param_1 + 0x2a8c,iVar6,iVar5,0x3d4ccccd,*(uint *)(param_1 + 0x240c),iVar2);
  uVar3 = FUN_0051e0a0(iVar1);
  _DAT_02dc9fec = FUN_005179d0(uVar3,"Bip01 Head",1);
  _DAT_02dc9ff8 = FUN_005179d0(uVar3,"Bip01 L ForeArm",1);
  _DAT_02dc9ffc = FUN_005179d0(uVar3,"Bip01 R ForeArm",1);
  _DAT_02dca000 = FUN_005179d0(uVar3,"Bip01 L UpperArm",1);
  _DAT_02dca004 = FUN_005179d0(uVar3,"Bip01 R UpperArm",1);
  _DAT_02dca008 = FUN_005179d0(uVar3,"Bip01 L Foot",1);
  _DAT_02dca00c = FUN_005179d0(uVar3,"Bip01 R Foot",1);
  _DAT_02dc9ff0 = FUN_005179d0(uVar3,"Bip01 L Hand",1);
  _DAT_02dc9ff4 = FUN_005179d0(uVar3,"Bip01 R Hand",1);
  _DAT_02dca010 = FUN_005179d0(uVar3,"Bip01 Spine",1);
  _DAT_02dca014 = FUN_005179d0(uVar3,"Bip01 Spine1",1);
  _DAT_02dca018 = FUN_005179d0(uVar3,"Bip01 Spine2",1);
  _DAT_02dc9fec = FUN_005179d0(uVar3,"Bip01 Head",1);
  _DAT_02dca000 = FUN_005179d0(uVar3,"Bip01 L UpperArm",1);
  _DAT_02dca004 = FUN_005179d0(uVar3,"Bip01 R UpperArm",1);
  _DAT_02dca010 = FUN_005179d0(uVar3,"Bip01 Spine",1);
  _DAT_02dca018 = FUN_005179d0(uVar3,"Bip01 Spine2",1);
  FUN_0051b800(iVar2);
  FUN_0051b800(iVar1);
  *(float *)(param_1 + 0x7fc) = *(float *)(param_1 + 0x7fc) + _DAT_00596148;
  FUN_0051d3c0(iVar1);
  FUN_0051d3c0(iVar2);
  iVar5 = param_1 + 0xe1a4;
  FUN_004e0170(iVar5,0,iVar1);
  FUN_004e0170(iVar5,1,iVar2);
  _DAT_01cd4314 = 0;
  FUN_004e02c0(iVar5,1,*(uint *)(param_1 + 0xe16c),0);
  _DAT_01cd4314 = 1;
  FUN_004e02c0(iVar5,1,*(uint *)(param_1 + 0xe16c),0);
  _DAT_01cd4314 = 0;
  *(uint *)(param_1 + 0xedcc) = 0;
  FUN_004e03c0(iVar5);
  *(uint *)(param_1 + 0xe19c) = 0;
  *(uint *)(param_1 + 0xe1a0) = 0;
  *(uint *)(param_1 + 0xe194) = 0;
  *(uint *)(param_1 + 0xe198) = 0x40a00000;
  FUN_0051b880(iVar2);
  FUN_0051b880(iVar1);
  return;
}
