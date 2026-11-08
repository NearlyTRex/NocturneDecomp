// Name: FUN_0041d9c0
// Address: 0041d9c0
// Address Range: [[0041d9c0, 0041dbdf]]
// Convention: unknown
// Signature: void FUN_0041d9c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d9c0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x2b4;
  FUN_00547480(iVar1);
  uVar2 = FUN_00547890(iVar1);
  DAT_007bccdc = FUN_00540e80(uVar2,"Bip01 Head",1);
  DAT_007bcce8 = FUN_00540e80(uVar2,"Bip01 L ForeArm",1);
  DAT_007bccec = FUN_00540e80(uVar2,"Bip01 R ForeArm",1);
  _DAT_007bccf8 = FUN_00540e80(uVar2,"Bip01 L Foot",1);
  _DAT_007bccfc = FUN_00540e80(uVar2,"Bip01 R Foot",1);
  DAT_007bcce0 = FUN_00540e80(uVar2,"Bip01 L Hand",1);
  DAT_007bcce4 = FUN_00540e80(uVar2,"Bip01 R Hand",1);
  DAT_007bccf0 = FUN_00540e80(uVar2,"Bip01 L UpperArm",1);
  DAT_007bccf4 = FUN_00540e80(uVar2,"Bip01 R UpperArm",1);
  DAT_007bcd00 = FUN_00540e80(uVar2,"Bip01 Spine",1);
  _DAT_007bcd04 = FUN_00540e80(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_00547810(iVar1);
  uVar3 = FUN_00543100(uVar2,"lshoulderpiece",1);
  *(uint *)(param_1 + 0x10af8) = uVar3;
  uVar3 = FUN_00543100(uVar2,"l4armpiece",1);
  *(uint *)(param_1 + 0x10afc) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rshoulderpiece",1);
  *(uint *)(param_1 + 0x10b00) = uVar3;
  uVar3 = FUN_00543100(uVar2,"r4armpiece",1);
  *(uint *)(param_1 + 0x10b04) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lshinpiece",1);
  *(uint *)(param_1 + 0x10b08) = uVar3;
  uVar3 = FUN_00543100(uVar2,"rshinpiece",1);
  *(uint *)(param_1 + 0x10b0c) = uVar3;
  uVar3 = FUN_00543100(uVar2,"torsopiece",1);
  *(uint *)(param_1 + 0x10b10) = uVar3;
  uVar3 = FUN_00543100(uVar2,"lowerbodypiece",1);
  *(uint *)(param_1 + 0x10b14) = uVar3;
  uVar2 = FUN_00543100(uVar2,"headpiece",1);
  *(uint *)(param_1 + 0x10b18) = uVar2;
  FUN_00487eb0(param_1);
  uVar2 = FUN_0040cf60(0x40000000,0x41a00000);
  *(uint *)(param_1 + 0x10b20) = 0;
  *(uint *)(param_1 + 0x10b24) = 0;
  *(uint *)(param_1 + 0x10b1c) = uVar2;
  return;
}
