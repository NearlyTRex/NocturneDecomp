// Name: FUN_004d5490
// Address: 004d5490
// Address Range: [[004d5490, 004d566e]]
// Convention: unknown
// Signature: void FUN_004d5490(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d5490(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (*(int *)(0x01D2130C + 0x18) == 0) {
    pcVar3 = "hotdemonx.dfm";
  }
  else {
    pcVar3 = "hotdemon.dfm";
  }
  FUN_0054eae0(param_1 + 0x158,pcVar3);
  FUN_00489110(param_1);
  iVar1 = param_1 + 0x158;
  FUN_0054e6b0(iVar1);
  uVar2 = FUN_0054eac0(iVar1);
  _DAT_01d5baec = FUN_00548090(uVar2,"Bip01 Head",1);
  _DAT_01d5baf8 = FUN_00548090(uVar2,"Bip01 L ForeArm",1);
  _DAT_01d5bafc = FUN_00548090(uVar2,"Bip01 R ForeArm",1);
  _DAT_01d5bb00 = FUN_00548090(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d5bb04 = FUN_00548090(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d5bb08 = FUN_00548090(uVar2,"Bip01 L Foot",1);
  _DAT_01d5bb0c = FUN_00548090(uVar2,"Bip01 R Foot",1);
  _DAT_01d5baf0 = FUN_00548090(uVar2,"Bip01 L Hand",1);
  _DAT_01d5baf4 = FUN_00548090(uVar2,"Bip01 R Hand",1);
  _DAT_01d5bb10 = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_01d5bb14 = FUN_00548090(uVar2,"Bip01 Spine1",1);
  _DAT_01d5bb18 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  _DAT_01d5baec = FUN_00548090(uVar2,"Bip01 Head",1);
  _DAT_01d5bb00 = FUN_00548090(uVar2,"Bip01 L UpperArm",1);
  _DAT_01d5bb04 = FUN_00548090(uVar2,"Bip01 R UpperArm",1);
  _DAT_01d5bb10 = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_01d5bb18 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  FUN_0054ea40(iVar1);
  *(uint *)(param_1 + 0xd054) = 0;
  *(uint *)(param_1 + 0xd058) = 0;
  return;
}
