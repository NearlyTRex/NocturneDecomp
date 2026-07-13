// Name: FUN_004957c0
// Address: 004957c0
// Address Range: [[004957c0, 00495a09]]
// Convention: unknown
// Signature: void FUN_004957c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004957c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_004b48d0(param_1);
  iVar1 = param_1 + 0x150;
  FUN_0051e0c0(iVar1,"gabriela.dfm");
  FUN_0051dcd0(iVar1);
  FUN_00435240(param_1 + 0x1fa7c,"gabcoat.cth");
  FUN_004359e0(param_1 + 0x1fa7c,param_1 + 0x20,param_1 + 0x30,iVar1);
  uVar2 = FUN_0051e0a0(iVar1);
  _DAT_01c71398 = FUN_005179d0(uVar2,"Bip01 head",1);
  _DAT_01c7139c = FUN_005179d0(uVar2,"Bip01 L Clavicle",1);
  _DAT_01c713a0 = FUN_005179d0(uVar2,"Bip01 R Clavicle",1);
  _DAT_01c713a4 = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01c713a8 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01c713ac = FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01c713b0 = FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01c713b4 = FUN_005179d0(uVar2,"Bip01 L Foot",1);
  _DAT_01c713b8 = FUN_005179d0(uVar2,"Bip01 R Foot",1);
  _DAT_01c713bc = FUN_005179d0(uVar2,"Bip01 L Thigh",1);
  _DAT_01c713c0 = FUN_005179d0(uVar2,"Bip01 R Thigh",1);
  _DAT_01c713c4 = FUN_005179d0(uVar2,"Bip01 L Calf",1);
  _DAT_01c713c8 = FUN_005179d0(uVar2,"Bip01 R Calf",1);
  _DAT_01c713d8 = FUN_005179d0(uVar2,"Bip01 L Hand",1);
  _DAT_01c713dc = FUN_005179d0(uVar2,"Bip01 R Hand",1);
  _DAT_01c713e0 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  _DAT_01c713e4 = FUN_005179d0(uVar2,"Bip01 Spine",1);
  uVar2 = FUN_004e1890(iVar1,"gab draw",1);
  _DAT_01c713cc = FUN_004e1010(uVar2);
  uVar2 = FUN_004e1890(iVar1,"gab shoot",1);
  _DAT_01c713d4 = FUN_004e1010(uVar2);
  uVar2 = FUN_004e1890(iVar1,"gab crossbow shoot",1);
  _DAT_01c713d0 = FUN_004e1010(uVar2);
  *(uint *)(param_1 + 0x1fa0c) = 0;
  *(uint *)(param_1 + 0x1fa10) = 0;
  *(uint *)(param_1 + 0x1fa14) = 0;
  *(uint *)(param_1 + 0x24a4) = _DAT_01c713d8;
  return;
}
