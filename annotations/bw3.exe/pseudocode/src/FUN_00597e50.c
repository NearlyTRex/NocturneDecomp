// Name: FUN_00597e50
// Address: 00597e50
// Address Range: [[00597e50, 00597f1b]]
// Convention: unknown
// Signature: void FUN_00597e50(int param_1)

#include "nocturne.h"

void FUN_00597e50(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_0054e6b0(param_1 + 0x158);
  *(uint *)(param_1 + 0xd068) = 0x3f800000;
  uVar1 = FUN_0054eac0(param_1 + 0x158);
  uVar2 = FUN_00548090(uVar1,"Bip01 Spine1",1);
  *(uint *)(param_1 + 0xd054) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 Head",1);
  *(uint *)(param_1 + 0xd058) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 R Finger0",1);
  *(uint *)(param_1 + 0xd05c) = uVar2;
  uVar2 = FUN_00548090(uVar1,"Bip01 L Finger0",1);
  *(uint *)(param_1 + 0xd060) = uVar2;
  uVar1 = FUN_00548090(uVar1,"Dummy05",1);
  *(uint *)(param_1 + 0xd070) = 0;
  *(uint *)(param_1 + 0xd074) = 0x10000;
  *(uint *)(param_1 + 0xfc) = 1;
  *(uint *)(param_1 + 0xf8) = 0;
  *(uint *)(param_1 + 0xd064) = uVar1;
  FUN_00489110(param_1);
  return;
}
