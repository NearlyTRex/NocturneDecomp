// Name: FUN_004cf090
// Address: 004cf090
// Address Range: [[004cf090, 004cf0be]]
// Convention: unknown
// Signature: void FUN_004cf090(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004cf090(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x590) = 0x3f800000;
  *(uint *)(param_1 + 0x584) = param_3;
  *(uint *)(param_1 + 0x58c) = *(uint *)(param_1 + 0x590);
  *(uint *)(param_1 + 0x588) = param_2;
  return;
}
