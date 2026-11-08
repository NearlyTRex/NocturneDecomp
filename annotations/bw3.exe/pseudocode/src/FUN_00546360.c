// Name: FUN_00546360
// Address: 00546360
// Address Range: [[00546360, 005463e3]]
// Convention: unknown
// Signature: void FUN_00546360(int param_1)

#include "nocturne.h"

void FUN_00546360(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0054e6b0(param_1 + 0x158);
  uVar1 = FUN_0054eac0(param_1 + 0x158);
  uVar2 = FUN_00548090(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xd054) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd058) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R Finger0",1);
  *(uint *)(param_1 + 0xd05c) = uVar2;
  uVar1 = FUN_00548090(uVar1,"Bip01 L Finger0",1);
  *(uint *)(param_1 + 0xd060) = uVar1;
  FUN_00489110(param_1);
  return;
}
