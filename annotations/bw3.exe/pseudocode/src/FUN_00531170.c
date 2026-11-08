// Name: FUN_00531170
// Address: 00531170
// Address Range: [[00531170, 0053131f]]
// Convention: unknown
// Signature: void FUN_00531170(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00531170(int param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_00489110(param_1);
  iVar1 = param_1 + 0x158;
  FUN_0054e6b0(iVar1);
  uVar2 = FUN_0054eac0(iVar1);
  _DAT_01ed785c = FUN_00548090(uVar2,"Bip01 Head",1);
  _DAT_01ed7868 = FUN_00548090(uVar2,"Bip01 L ForeArm",1);
  _DAT_01ed786c = FUN_00548090(uVar2,"Bip01 R ForeArm",1);
  _DAT_01ed7870 = FUN_00548090(uVar2,"Bip01 L UpperArm",1);
  _DAT_01ed7874 = FUN_00548090(uVar2,"Bip01 R UpperArm",1);
  _DAT_01ed7878 = FUN_00548090(uVar2,"Bip01 L Foot",1);
  _DAT_01ed787c = FUN_00548090(uVar2,"Bip01 R Foot",1);
  _DAT_01ed7860 = FUN_00548090(uVar2,"Bip01 L Hand",1);
  _DAT_01ed7864 = FUN_00548090(uVar2,"Bip01 R Hand",1);
  _DAT_01ed7880 = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_01ed7884 = FUN_00548090(uVar2,"Bip01 Spine1",1);
  _DAT_01ed7888 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  _DAT_01ed785c = FUN_00548090(uVar2,"Bip01 Head",1);
  _DAT_01ed7870 = FUN_00548090(uVar2,"Bip01 L UpperArm",1);
  _DAT_01ed7874 = FUN_00548090(uVar2,"Bip01 R UpperArm",1);
  _DAT_01ed7880 = FUN_00548090(uVar2,"Bip01 Spine",1);
  _DAT_01ed7888 = FUN_00548090(uVar2,"Bip01 Spine2",1);
  FUN_0054ea40(iVar1);
  *(uint *)(param_1 + 0xd058) = 0;
  *(uint *)(param_1 + 0xd054) = 0;
  return;
}
