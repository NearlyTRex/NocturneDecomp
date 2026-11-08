// Name: FUN_00417630
// Address: 00417630
// Address Range: [[00417630, 00417991]]
// Convention: unknown
// Signature: void FUN_00417630(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417630(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x158;
  FUN_0054e6b0(iVar2);
  uVar1 = FUN_0054eac0(iVar2);
  DAT_007e1620 = FUN_00548090(uVar1,"CBip01 Head" + 1,1);
  _DAT_007e162c = FUN_00548090(uVar1,"Bip01 L ForeArm",1);
  _DAT_007e1630 = FUN_00548090(uVar1,"Bip01 R ForeArm",1);
  DAT_007e1634 = FUN_00548090(uVar1,"Bip01 L UpperArm",1);
  DAT_007e1638 = FUN_00548090(uVar1,"Bip01 R UpperArm",1);
  _DAT_007e163c = FUN_00548090(uVar1,"Bip01 L Foot",1);
  _DAT_007e1640 = FUN_00548090(uVar1,"Bip01 R Foot",1);
  DAT_007e1624 = FUN_00548090(uVar1,"Bip01 L Hand",1);
  DAT_007e1628 = FUN_00548090(uVar1,"Bip01 R Hand",1);
  DAT_007e1644 = FUN_00548090(uVar1,"Bip01 Spine",1);
  DAT_007e1648 = FUN_00548090(uVar1,"Bip01 Spine2",1);
  DAT_007e1620 = FUN_00548090(uVar1,"Bip01 Head",1);
  DAT_007e1634 = FUN_00548090(uVar1,"Bip01 L UpperArm",1);
  DAT_007e1638 = FUN_00548090(uVar1,"Bip01 R UpperArm",1);
  DAT_007e1644 = FUN_00548090(uVar1,"Bip01 Spine",1);
  DAT_007e1648 = FUN_00548090(uVar1,"Bip01 Spine2",1);
  iVar2 = FUN_0054ea40(iVar2);
  iVar2 = *(int *)(iVar2 + 0xc00);
  *(int *)(param_1 + 0xd0e8) = iVar2;
  if (0x14 < iVar2) {
    _DAT_01d71de0 = "..\\core\\boneguy.cpp";
    _DAT_01d71de4 = 0x136;
    FUN_004e4330("CBoneGuy::explode - Not enough containers");
  }
  *(uint *)(param_1 + 0x25a8) = DAT_007e1624;
  *(uint *)(param_1 + 0x2620) = DAT_007e1628;
  FUN_00489110(param_1);
  *(uint *)(param_1 + 0xd078) = 0;
  *(uint *)(param_1 + 0xd690) = 0;
  uVar1 = FUN_0040ce40(0x3fa66666,0x3fe66666);
  *(uint *)(param_1 + 0xcdcc) = uVar1;
  if (*(int *)(param_1 + 0x3268) == 0) {
    switch(*(uint *)(param_1 + 0xd074)) {
    case 0:
    case 1:
      *(uint *)(param_1 + 0xce5c) = 0x41000000;
      *(uint *)(param_1 + 0xce60) = 0x40a00000;
      *(uint *)(param_1 + 0x2538) = 0x41c80000;
      break;
    case 2:
      *(uint *)(param_1 + 0xce5c) = 0x41400000;
      *(uint *)(param_1 + 0xce60) = 0x41000000;
      *(uint *)(param_1 + 0x2538) = 0x41f00000;
      *(uint *)(param_1 + 0xd058) = *(uint *)(param_1 + 0x2538);
      return;
    case 3:
      *(uint *)(param_1 + 0xce5c) = 0x41a00000;
      *(uint *)(param_1 + 0xce60) = 0x41200000;
      *(uint *)(param_1 + 0x2538) = 0x42200000;
      *(uint *)(param_1 + 0xd058) = *(uint *)(param_1 + 0x2538);
      return;
    case 4:
      *(uint *)(param_1 + 0x2538) = 0x41200000;
      *(uint *)(param_1 + 0xce5c) = 0x40a00000;
      *(uint *)(param_1 + 0xce60) = 0x40a00000;
      uVar1 = FUN_0040ce40(0x40000000,0x40200000);
      *(uint *)(param_1 + 0xcdcc) = uVar1;
      *(uint *)(param_1 + 0xd058) = *(uint *)(param_1 + 0x2538);
      return;
    }
    *(uint *)(param_1 + 0xd058) = *(uint *)(param_1 + 0x2538);
    return;
  }
  switch(*(uint *)(param_1 + 0xd074)) {
  case 0:
  case 1:
    *(uint *)(param_1 + 0xd058) = 0x41c80000;
    break;
  case 2:
    *(uint *)(param_1 + 0xd058) = 0x41f00000;
    return;
  case 3:
    *(uint *)(param_1 + 0xd058) = 0x42200000;
    return;
  case 4:
    *(uint *)(param_1 + 0xd058) = 0x41200000;
    return;
  }
  return;
}
