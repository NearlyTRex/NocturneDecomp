// Name: FUN_00592e90
// Address: 00592e90
// Address Range: [[00592e90, 0059311b]]
// Convention: unknown
// Signature: void FUN_00592e90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00592e90(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  if (*(int *)(0x01CCF390 + 0x18) == 0) {
    pcVar4 = "svetlanax.dfm";
  }
  else {
    pcVar4 = "svetlana.dfm";
  }
  FUN_00569f50(param_1 + 0x158,pcVar4);
  FUN_004eaa10(param_1);
  iVar1 = param_1 + 0x158;
  uVar2 = FUN_00569f30(iVar1);
  _DAT_02c83708 = FUN_005634f0(uVar2,"Bip01 head",1);
  _DAT_02c8370c = FUN_005634f0(uVar2,"Bip01 L Clavicle",1);
  _DAT_02c83710 = FUN_005634f0(uVar2,"Bip01 R Clavicle",1);
  _DAT_02c83714 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_02c83718 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_02c8371c = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_02c83720 = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_02c83724 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_02c83728 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_02c8372c = FUN_005634f0(uVar2,"Bip01 L Thigh",1);
  _DAT_02c83730 = FUN_005634f0(uVar2,"Bip01 R Thigh",1);
  _DAT_02c83734 = FUN_005634f0(uVar2,"Bip01 L Calf",1);
  _DAT_02c83738 = FUN_005634f0(uVar2,"Bip01 R Calf",1);
  _DAT_02c8373c = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_02c83740 = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_02c83744 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  _DAT_02c83748 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  _DAT_02c8374c = FUN_005634f0(uVar2,"Bipblade01",1);
  _DAT_02c83750 = FUN_005634f0(uVar2,"BipR14",1);
  iVar5 = param_1 + 0x1ffb4;
  *(uint *)(param_1 + 0x1ffac) = 0;
  FUN_0043e6d0(iVar5,"svetcape.cth",iVar5);
  FUN_0043eea0(iVar5,param_1 + 0x20,param_1 + 0x30,iVar1);
  iVar5 = param_1 + 0x5aae4;
  FUN_0043e6d0(iVar5,"svethair.cth",iVar5);
  FUN_0043eea0(iVar5,param_1 + 0x20,param_1 + 0x30,iVar1);
  uVar2 = FUN_00569eb0(iVar1);
  uVar3 = FUN_00565780(uVar2,"lblade01",1);
  *(uint *)(param_1 + 0x95628) = uVar3;
  uVar2 = FUN_00565780(uVar2,"rblade02",1);
  *(uint *)(param_1 + 0x95614) = 0;
  *(uint *)(param_1 + 0x9562c) = uVar2;
  return;
}
