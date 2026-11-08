// Name: FUN_004184c0
// Address: 004184c0
// Address Range: [[004184c0, 0041869c]]
// Convention: unknown
// Signature: void FUN_004184c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004184c0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x2b4;
  FUN_00547480(iVar2);
  uVar1 = FUN_00547890(iVar2);
  DAT_007bc944 = FUN_00540e80(uVar1,"CBip01 Head" + 1,1);
  _DAT_007bc950 = FUN_00540e80(uVar1,"Bip01 L ForeArm",1);
  _DAT_007bc954 = FUN_00540e80(uVar1,"Bip01 R ForeArm",1);
  DAT_007bc958 = FUN_00540e80(uVar1,"Bip01 L UpperArm",1);
  DAT_007bc95c = FUN_00540e80(uVar1,"Bip01 R UpperArm",1);
  _DAT_007bc960 = FUN_00540e80(uVar1,"Bip01 L Foot",1);
  _DAT_007bc964 = FUN_00540e80(uVar1,"Bip01 R Foot",1);
  DAT_007bc948 = FUN_00540e80(uVar1,"Bip01 L Hand",1);
  DAT_007bc94c = FUN_00540e80(uVar1,"Bip01 R Hand",1);
  DAT_007bc968 = FUN_00540e80(uVar1,"Bip01 Spine",1);
  DAT_007bc96c = FUN_00540e80(uVar1,"Bip01 Spine2",1);
  DAT_007bc944 = FUN_00540e80(uVar1,"Bip01 Head",1);
  DAT_007bc958 = FUN_00540e80(uVar1,"Bip01 L UpperArm",1);
  DAT_007bc95c = FUN_00540e80(uVar1,"Bip01 R UpperArm",1);
  DAT_007bc968 = FUN_00540e80(uVar1,"Bip01 Spine",1);
  DAT_007bc96c = FUN_00540e80(uVar1,"Bip01 Spine2",1);
  iVar2 = FUN_00547810(iVar2);
  iVar2 = *(int *)(iVar2 + 0xc00);
  *(int *)(param_1 + 0x10b74) = iVar2;
  if (0x14 < iVar2) {
    _DAT_01d046a0 = "..\\core\\boneguy.cpp";
    _DAT_01d046a4 = 0x130;
    FUN_004e4500("CBoneGuy::explode - Not enough containers");
  }
  *(uint *)(param_1 + 0x2618) = DAT_007bc948;
  *(uint *)(param_1 + 0x2690) = DAT_007bc94c;
  FUN_00487eb0(param_1);
  *(uint *)(param_1 + 0x10b08) = 0;
  return;
}
