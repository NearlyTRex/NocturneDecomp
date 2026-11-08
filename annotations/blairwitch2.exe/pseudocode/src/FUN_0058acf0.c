// Name: FUN_0058acf0
// Address: 0058acf0
// Address Range: [[0058acf0, 0058ad3c]]
// Convention: unknown
// Signature: void FUN_0058acf0(int param_1)

#include "nocturne.h"

void FUN_0058acf0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_0040cf60(0x41200000,0x41a00000);
  uVar1 = 0x0264B290;
  *(uint *)(param_1 + 0x20) = uVar2;
  FUN_0055ae30(uVar1,param_1,"thndr?.wav");
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x34) = 0x3f800000;
  return;
}
