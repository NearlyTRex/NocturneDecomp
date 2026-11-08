// Name: FUN_0047b1b0
// Address: 0047b1b0
// Address Range: [[0047b1b0, 0047b490]]
// Convention: unknown
// Signature: void FUN_0047b1b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b1b0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  iVar2 = param_1 + 0x24a8;
  if (*(int *)(0x01CCF390 + 0x18) == 0) {
    iVar1 = FUN_005c04e0(iVar2,"nbride2.dfm");
    if (iVar1 == 0) {
      FUN_00569f50(param_1 + 0x158,"nbride2x.dfm");
    }
    iVar1 = FUN_005c04e0(iVar2,"nbride3.dfm");
    if (iVar1 == 0) {
      FUN_00569f50(param_1 + 0x158,"nbride3x.dfm");
    }
    iVar2 = FUN_005c04e0(iVar2,"nbride4.dfm");
    if (iVar2 != 0) goto LAB_0047b245;
    pcVar5 = "nbride4x.dfm";
  }
  else {
    iVar1 = FUN_005c04e0(iVar2,"nbride2x.dfm");
    if (iVar1 == 0) {
      FUN_00569f50(param_1 + 0x158,"nbride2.dfm");
    }
    iVar1 = FUN_005c04e0(iVar2,"nbride3x.dfm");
    if (iVar1 == 0) {
      FUN_00569f50(param_1 + 0x158,"nbride3.dfm");
    }
    iVar2 = FUN_005c04e0(iVar2,"nbride4x.dfm");
    if (iVar2 != 0) goto LAB_0047b245;
    pcVar5 = "nbride4.dfm";
  }
  FUN_00569f50(param_1 + 0x158,pcVar5);
LAB_0047b245:
  FUN_004a0510(param_1);
  uVar3 = FUN_00569f30(param_1 + 0x158);
  _DAT_01bc0d34 = FUN_005634f0(uVar3,"Bip01 Head",1);
  _DAT_01bc0d38 = FUN_005634f0(uVar3,"Bip01 L Hand",1);
  _DAT_01bc0d3c = FUN_005634f0(uVar3,"Bip01 R Hand",1);
  _DAT_01bc0d40 = FUN_005634f0(uVar3,"Bip01 L UpperArm",1);
  _DAT_01bc0d44 = FUN_005634f0(uVar3,"Bip01 R UpperArm",1);
  _DAT_01bc0d48 = FUN_005634f0(uVar3,"Bip01 Spine",1);
  _DAT_01bc0d4c = FUN_005634f0(uVar3,"Bip01 Spine1",1);
  _DAT_01bc0d50 = FUN_005634f0(uVar3,"Bip01 Spine2",1);
  uVar3 = FUN_00569eb0(param_1 + 0x158);
  uVar4 = FUN_00565780(uVar3,"larm01",1);
  *(uint *)(param_1 + 0xc268) = uVar4;
  uVar4 = FUN_00565780(uVar3,"l4arm01",1);
  *(uint *)(param_1 + 0xc26c) = uVar4;
  uVar4 = FUN_00565780(uVar3,"rarm01",1);
  *(uint *)(param_1 + 0xc270) = uVar4;
  uVar4 = FUN_00565780(uVar3,"r4arm01",1);
  *(uint *)(param_1 + 0xc274) = uVar4;
  uVar4 = FUN_00565780(uVar3,"lshin01",1);
  *(uint *)(param_1 + 0xc278) = uVar4;
  uVar4 = FUN_00565780(uVar3,"rshin01",1);
  *(uint *)(param_1 + 0xc27c) = uVar4;
  uVar4 = FUN_00565780(uVar3,"torso01",1);
  *(uint *)(param_1 + 0xc280) = uVar4;
  uVar4 = FUN_00565780(uVar3,"waist01",1);
  *(uint *)(param_1 + 0xc284) = uVar4;
  uVar3 = FUN_00565780(uVar3,"head01",1);
  *(uint *)(param_1 + 0xc288) = uVar3;
  *(uint *)(param_1 + 0xc310) = 0;
  uVar3 = FUN_0040cc00(0x40a00000,0x41200000);
  *(uint *)(param_1 + 0xc2fc) = uVar3;
  uVar3 = FUN_0040cc00(0x40000000,0x41a00000);
  *(uint *)(param_1 + 0xc300) = uVar3;
  return;
}
