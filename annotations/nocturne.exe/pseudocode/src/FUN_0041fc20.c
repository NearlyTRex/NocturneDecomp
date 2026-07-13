// Name: FUN_0041fc20
// Address: 0041fc20
// Address Range: [[0041fc20, 0041fe3f]]
// Convention: unknown
// Signature: void FUN_0041fc20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041fc20(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1 + 0x150;
  FUN_0051dcd0(iVar1);
  uVar2 = FUN_0051e0a0(iVar1);
  DAT_00764b2c = FUN_005179d0(uVar2,"Bip01 Head",1);
  DAT_00764b38 = FUN_005179d0(uVar2,"Bip01 L ForeArm",1);
  DAT_00764b3c = FUN_005179d0(uVar2,"Bip01 R ForeArm",1);
  _DAT_00764b48 = FUN_005179d0(uVar2,"Bip01 L Foot",1);
  _DAT_00764b4c = FUN_005179d0(uVar2,"Bip01 R Foot",1);
  DAT_00764b30 = FUN_005179d0(uVar2,"Bip01 L Hand",1);
  DAT_00764b34 = FUN_005179d0(uVar2,"Bip01 R Hand",1);
  DAT_00764b40 = FUN_005179d0(uVar2,"Bip01 L UpperArm",1);
  DAT_00764b44 = FUN_005179d0(uVar2,"Bip01 R UpperArm",1);
  DAT_00764b50 = FUN_005179d0(uVar2,"Bip01 Spine",1);
  _DAT_00764b54 = FUN_005179d0(uVar2,"Bip01 Spine2",1);
  uVar2 = FUN_0051e020(iVar1);
  uVar3 = FUN_00519b30(uVar2,"lshoulderpiece",1);
  *(uint *)(param_1 + 0xbd24) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"l4armpiece",1);
  *(uint *)(param_1 + 0xbd28) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rshoulderpiece",1);
  *(uint *)(param_1 + 0xbd2c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"r4armpiece",1);
  *(uint *)(param_1 + 0xbd30) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lshinpiece",1);
  *(uint *)(param_1 + 0xbd34) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"rshinpiece",1);
  *(uint *)(param_1 + 0xbd38) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"torsopiece",1);
  *(uint *)(param_1 + 0xbd3c) = uVar3;
  uVar3 = FUN_00519b30(uVar2,"lowerbodypiece",1);
  *(uint *)(param_1 + 0xbd40) = uVar3;
  uVar2 = FUN_00519b30(uVar2,"headpiece",1);
  *(uint *)(param_1 + 0xbd44) = uVar2;
  FUN_004796b0(param_1);
  uVar2 = FUN_0040dda0(0x40000000,0x41a00000);
  *(uint *)(param_1 + 0xbd4c) = 0;
  *(uint *)(param_1 + 0xbd50) = 0;
  *(uint *)(param_1 + 0xbd48) = uVar2;
  return;
}
