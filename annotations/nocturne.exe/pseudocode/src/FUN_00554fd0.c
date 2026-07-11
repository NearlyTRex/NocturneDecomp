// Name: FUN_00554fd0
// Address: 00554fd0
// Address Range: [[00554fd0, 0055501c]]
// Convention: unknown
// Signature: void FUN_00554fd0(int param_1)

#include "nocturne.h"

void FUN_00554fd0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_0040dda0(0x41200000,0x41a00000);
  uVar1 = 0x02DC9450;
  *(uint *)(param_1 + 0x20) = uVar2;
  FUN_0052ea40(uVar1,param_1,"thndr?.wav");
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x34) = 0x3f800000;
  return;
}
