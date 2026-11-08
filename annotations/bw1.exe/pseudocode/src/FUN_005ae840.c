// Name: FUN_005ae840
// Address: 005ae840
// Address Range: [[005ae840, 005ae88c]]
// Convention: unknown
// Signature: void FUN_005ae840(int param_1)

#include "nocturne.h"

void FUN_005ae840(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_0040cc00(0x41200000,0x41a00000);
  uVar1 = 0x02C82A60;
  *(uint *)(param_1 + 0x20) = uVar2;
  FUN_0057d880(uVar1,param_1,"thndr?.wav");
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x34) = 0x3f800000;
  return;
}
