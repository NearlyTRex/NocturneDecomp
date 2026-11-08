// Name: FUN_004ad3e0
// Address: 004ad3e0
// Address Range: [[004ad3e0, 004ad629]]
// Convention: unknown
// Signature: void FUN_004ad3e0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ad3e0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_004ce4a0(param_1);
  iVar1 = param_1 + 0x2b4;
  FUN_005478b0(iVar1,"gabriela.dfm");
  FUN_00547480(iVar1);
  FUN_005adeb0(param_1 + 0x25680,"gabcoat.cth");
  FUN_005ae680(param_1 + 0x25680,param_1 + 0x20,param_1 + 0x30,iVar1);
  uVar2 = FUN_00547890(iVar1);
  _DAT_01cb0678 = FUN_00540e80(uVar2,"Bip01 head",1);
  _DAT_01cb067c = FUN_00540e80(uVar2,"Bip01 L Clavicle",1);
  _DAT_01cb0680 = FUN_00540e80(uVar2,"Bip01 R Clavicle",1);
  _DAT_01cb0684 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cb0688 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cb068c = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  _DAT_01cb0690 = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_01cb0694 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_01cb0698 = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  _DAT_01cb069c = FUN_00540e80(uVar2,"Bip01 L Thigh",1);
  _DAT_01cb06a0 = FUN_00540e80(uVar2,"Bip01 R Thigh",1);
  _DAT_01cb06a4 = FUN_00540e80(uVar2,"Bip01 L Calf",1);
  _DAT_01cb06a8 = FUN_00540e80(uVar2,"Bip01 R Calf",1);
  _DAT_01cb06b8 = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  _DAT_01cb06bc = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  _DAT_01cb06c0 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  _DAT_01cb06c4 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  uVar2 = FUN_00503860(iVar1,"gab draw",1);
  _DAT_01cb06ac = FUN_00502f10(uVar2);
  uVar2 = FUN_00503860(iVar1,"gab shoot",1);
  _DAT_01cb06b4 = FUN_00502f10(uVar2);
  uVar2 = FUN_00503860(iVar1,"gab crossbow shoot",1);
  _DAT_01cb06b0 = FUN_00502f10(uVar2);
  *(uint *)(param_1 + 0x2560c) = 0;
  *(uint *)(param_1 + 0x25610) = 0;
  *(uint *)(param_1 + 0x25614) = 0;
  *(uint *)(param_1 + 0x2618) = _DAT_01cb06b8;
  return;
}
