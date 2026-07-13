// Name: FUN_004b9db0
// Address: 004b9db0
// Address Range: [[004b9db0, 004b9fc4]]
// Convention: unknown
// Signature: void FUN_004b9db0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b9db0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_004b48d0(param_1);
  uVar2 = FUN_0051e0a0(param_1 + 0x150);
  _DAT_01cae288 = FUN_005179d0(uVar2,"Bip01 head",1);
  _DAT_01cae28c = FUN_005179d0(uVar2,"Bip01 L Clavicle",1);
  _DAT_01cae290 = FUN_005179d0(uVar2,"Bip01 R Clavicle",1);
  _DAT_01cae294 = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  _DAT_01cae298 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  _DAT_01cae29c = FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  _DAT_01cae2a0 = FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_01cae2a4 = FUN_005179d0(uVar2,"Bip01 L Foot",1);
  _DAT_01cae2a8 = FUN_005179d0(uVar2,"Bip01 R Foot",1);
  _DAT_01cae2ac = FUN_005179d0(uVar2,"Bip01 L Thigh",1);
  _DAT_01cae2b0 = FUN_005179d0(uVar2,"Bip01 R Thigh",1);
  _DAT_01cae2b4 = FUN_005179d0(uVar2,"Bip01 L Calf",1);
  _DAT_01cae2b8 = FUN_005179d0(uVar2,"Bip01 R Calf",1);
  _DAT_01cae2bc = FUN_005179d0(uVar2,"Bip01 L Hand",1);
  _DAT_01cae2c0 = FUN_005179d0(uVar2,"Bip01 R Hand",1);
  _DAT_01cae2c4 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  _DAT_01cae2c8 = FUN_005179d0(uVar2,"Bip01 Spine1",1);
  _DAT_01cae2cc = FUN_005179d0(uVar2,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x24a8) = 0;
  *(uint *)(param_1 + 0x24ec) = 0;
  *(uint *)(param_1 + 0x1fa3c) = 0;
  *(uint *)(param_1 + 0x24a4) = _DAT_01cae2bc;
  *(uint *)(param_1 + 0x24e8) = _DAT_01cae2c0;
  iVar1 = _DAT_01cae0e8;
  *(uint *)(param_1 + 0x1fa60) = 0;
  iVar1 = *(int *)(iVar1 * 4 + 0x1cae0d8);
  if (param_1 == iVar1) {
    *(uint *)(iVar1 + 0x2dd8) = 0x3fc00000;
  }
  *(uint *)(param_1 + 0x1fa48) = 0;
  *(uint *)(param_1 + 0x1fa44) = 0;
  *(uint *)(param_1 + 0x1fa68) = 0;
  return;
}
