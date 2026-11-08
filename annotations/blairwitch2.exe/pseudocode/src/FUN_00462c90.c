// Name: FUN_00462c90
// Address: 00462c90
// Address Range: [[00462c90, 00462f70]]
// Convention: unknown
// Signature: void FUN_00462c90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462c90(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar2 = param_1 + 0x2514;
  if (*(int *)(0x01CB6900 + 0x18) == 0) {
    iVar1 = FUN_005b8130(iVar2,"nbride2.dfm");
    if (iVar1 == 0) {
      FUN_005478b0(param_1 + 0x2b4,"nbride2x.dfm");
    }
    iVar1 = FUN_005b8130(iVar2,"nbride3.dfm");
    if (iVar1 == 0) {
      FUN_005478b0(param_1 + 0x2b4,"nbride3x.dfm");
    }
    iVar2 = FUN_005b8130(iVar2,"nbride4.dfm");
    if (iVar2 != 0) goto LAB_00462d25;
    pcVar5 = "nbride4x.dfm";
  }
  else {
    iVar1 = FUN_005b8130(iVar2,"nbride2x.dfm");
    if (iVar1 == 0) {
      FUN_005478b0(param_1 + 0x2b4,"nbride2.dfm");
    }
    iVar1 = FUN_005b8130(iVar2,"nbride3x.dfm");
    if (iVar1 == 0) {
      FUN_005478b0(param_1 + 0x2b4,"nbride3.dfm");
    }
    iVar2 = FUN_005b8130(iVar2,"nbride4x.dfm");
    if (iVar2 != 0) goto LAB_00462d25;
    pcVar5 = "nbride4.dfm";
  }
  FUN_005478b0(param_1 + 0x2b4,pcVar5);
LAB_00462d25:
  FUN_00487eb0(param_1);
  uVar3 = FUN_00547890(param_1 + 0x2b4);
  _DAT_01ba5778 = FUN_00540e80(uVar3,"Bip01 Head",1);
  _DAT_01ba577c = FUN_00540e80(uVar3,"Bip01 L Hand",1);
  _DAT_01ba5780 = FUN_00540e80(uVar3,"Bip01 R Hand",1);
  _DAT_01ba5784 = FUN_00540e80(uVar3,"Bip01 L UpperArm",1);
  _DAT_01ba5788 = FUN_00540e80(uVar3,"Bip01 R UpperArm",1);
  _DAT_01ba578c = FUN_00540e80(uVar3,"Bip01 Spine",1);
  _DAT_01ba5790 = FUN_00540e80(uVar3,"Bip01 Spine1",1);
  _DAT_01ba5794 = FUN_00540e80(uVar3,"Bip01 Spine2",1);
  uVar3 = FUN_00547810(param_1 + 0x2b4);
  uVar4 = FUN_00543100(uVar3,"larm01",1);
  *(uint *)(param_1 + 0x10af8) = uVar4;
  uVar4 = FUN_00543100(uVar3,"l4arm01",1);
  *(uint *)(param_1 + 0x10afc) = uVar4;
  uVar4 = FUN_00543100(uVar3,"rarm01",1);
  *(uint *)(param_1 + 0x10b00) = uVar4;
  uVar4 = FUN_00543100(uVar3,"r4arm01",1);
  *(uint *)(param_1 + 0x10b04) = uVar4;
  uVar4 = FUN_00543100(uVar3,"lshin01",1);
  *(uint *)(param_1 + 0x10b08) = uVar4;
  uVar4 = FUN_00543100(uVar3,"rshin01",1);
  *(uint *)(param_1 + 0x10b0c) = uVar4;
  uVar4 = FUN_00543100(uVar3,"torso01",1);
  *(uint *)(param_1 + 0x10b10) = uVar4;
  uVar4 = FUN_00543100(uVar3,"waist01",1);
  *(uint *)(param_1 + 0x10b14) = uVar4;
  uVar3 = FUN_00543100(uVar3,"head01",1);
  *(uint *)(param_1 + 0x10b18) = uVar3;
  *(uint *)(param_1 + 0x10ba0) = 0;
  uVar3 = FUN_0040cf60(0x40a00000,0x41200000);
  *(uint *)(param_1 + 0x10b8c) = uVar3;
  uVar3 = FUN_0040cf60(0x40000000,0x41a00000);
  *(uint *)(param_1 + 0x10b90) = uVar3;
  return;
}
