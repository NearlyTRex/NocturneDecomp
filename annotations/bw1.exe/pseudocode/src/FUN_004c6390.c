// Name: FUN_004c6390
// Address: 004c6390
// Address Range: [[004c6390, 004c65d9]]
// Convention: unknown
// Signature: void FUN_004c6390(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c6390(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_004eaa10(param_1);
  iVar1 = param_1 + 0x158;
  FUN_00569f50(iVar1,"gabriela.dfm");
  FUN_00569b20(iVar1);
  FUN_0043e6d0(param_1 + 0x1ffec,"gabcoat.cth");
  FUN_0043eea0(param_1 + 0x1ffec,param_1 + 0x20,param_1 + 0x30,iVar1);
  uVar2 = FUN_00569f30(iVar1);
  _DAT_01cc9108 = FUN_005634f0(uVar2,"Bip01 head",1);
  _DAT_01cc910c = FUN_005634f0(uVar2,"Bip01 L Clavicle",1);
  _DAT_01cc9110 = FUN_005634f0(uVar2,"Bip01 R Clavicle",1);
  _DAT_01cc9114 = FUN_005634f0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cc9118 = FUN_005634f0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cc911c = FUN_005634f0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01cc9120 = FUN_005634f0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01cc9124 = FUN_005634f0(uVar2,"Bip01 L Foot",1);
  _DAT_01cc9128 = FUN_005634f0(uVar2,"Bip01 R Foot",1);
  _DAT_01cc912c = FUN_005634f0(uVar2,"Bip01 L Thigh",1);
  _DAT_01cc9130 = FUN_005634f0(uVar2,"Bip01 R Thigh",1);
  _DAT_01cc9134 = FUN_005634f0(uVar2,"Bip01 L Calf",1);
  _DAT_01cc9138 = FUN_005634f0(uVar2,"Bip01 R Calf",1);
  _DAT_01cc9148 = FUN_005634f0(uVar2,"Bip01 L Hand",1);
  _DAT_01cc914c = FUN_005634f0(uVar2,"Bip01 R Hand",1);
  _DAT_01cc9150 = FUN_005634f0(uVar2,"Bip01 Spine2",1);
  _DAT_01cc9154 = FUN_005634f0(uVar2,"Bip01 Spine",1);
  uVar2 = FUN_00524a00(iVar1,"gab draw",1);
  _DAT_01cc913c = FUN_005240c0(uVar2);
  uVar2 = FUN_00524a00(iVar1,"gab shoot",1);
  _DAT_01cc9144 = FUN_005240c0(uVar2);
  uVar2 = FUN_00524a00(iVar1,"gab crossbow shoot",1);
  _DAT_01cc9140 = FUN_005240c0(uVar2);
  *(uint *)(param_1 + 0x1ff7c) = 0;
  *(uint *)(param_1 + 0x1ff80) = 0;
  *(uint *)(param_1 + 0x1ff84) = 0;
  *(uint *)(param_1 + 0x25a8) = _DAT_01cc9148;
  return;
}
