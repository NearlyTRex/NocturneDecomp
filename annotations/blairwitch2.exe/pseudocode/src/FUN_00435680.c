// Name: FUN_00435680
// Address: 00435680
// Address Range: [[00435680, 00435811]]
// Convention: unknown
// Signature: void FUN_00435680(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435680(int param_1)

{
  uint uVar1;
  
  FUN_004ce4a0(param_1);
  uVar1 = FUN_00547890(param_1 + 0x2b4);
  DAT_007c150c = FUN_00540e80(uVar1,"Bip01 head",1);
  _DAT_007c1510 = FUN_00540e80(uVar1,"Bip01 L Clavicle",1);
  _DAT_007c1514 = FUN_00540e80(uVar1,"Bip01 R Clavicle",1);
  _DAT_007c1518 = FUN_00540e80(uVar1,"Bip01 L UpperArm",1);
  _DAT_007c151c = FUN_00540e80(uVar1,"Bip01 R UpperArm",1);
  _DAT_007c1520 = FUN_00540e80(uVar1,"Bip01 L ForeArm",1);
  _DAT_007c1524 = FUN_00540e80(uVar1,"Bip01 R ForeArm",1);
  _DAT_007c1528 = FUN_00540e80(uVar1,"Bip01 L Foot",1);
  _DAT_007c152c = FUN_00540e80(uVar1,"Bip01 R Foot",1);
  _DAT_007c1530 = FUN_00540e80(uVar1,"Bip01 L Thigh",1);
  _DAT_007c1534 = FUN_00540e80(uVar1,"Bip01 R Thigh",1);
  _DAT_007c1538 = FUN_00540e80(uVar1,"Bip01 L Calf",1);
  _DAT_007c153c = FUN_00540e80(uVar1,"Bip01 R Calf",1);
  _DAT_007c1540 = FUN_00540e80(uVar1,"Bip01 L Hand",1);
  _DAT_007c1544 = FUN_00540e80(uVar1,"Bip01 R Hand",1);
  _DAT_007c1548 = FUN_00540e80(uVar1,"Bip01 Spine2",1);
  _DAT_007c154c = FUN_00540e80(uVar1,"Bip01 Spine",1);
  *(uint *)(param_1 + 0x25640) = 0;
  return;
}
