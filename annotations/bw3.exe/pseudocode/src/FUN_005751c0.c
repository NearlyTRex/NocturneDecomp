// Name: FUN_005751c0
// Address: 005751c0
// Address Range: [[005751c0, 00575224]]
// Convention: unknown
// Signature: void FUN_005751c0(int param_1)

#include "nocturne.h"

void FUN_005751c0(int param_1)

{
  uint uVar1;
  
  FUN_00462580(param_1 + 0xd058);
  FUN_00489110(param_1);
  *(uint *)(param_1 + 0x2538) = 0x41200000;
  *(uint *)(param_1 + 0xd288) = 0;
  *(uint *)(param_1 + 0xd280) = 0;
  uVar1 = FUN_0040ce40(*(uint *)(param_1 + 0xd278),*(uint *)(param_1 + 0xd27c));
  *(uint *)(param_1 + 0xd284) = uVar1;
  return;
}
