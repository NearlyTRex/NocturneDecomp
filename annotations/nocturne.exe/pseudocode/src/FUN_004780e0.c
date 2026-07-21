// Name: FUN_004780e0
// Address: 004780e0
// Address Range: [[004780e0, 0047811f]]
// Convention: unknown
// Signature: undefined4 FUN_004780e0(int param_1)

#include "nocturne.h"

uint FUN_004780e0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x564) == 6) {
    return 0;
  }
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x43e10000,0x44160000);
  return uVar1;
}
