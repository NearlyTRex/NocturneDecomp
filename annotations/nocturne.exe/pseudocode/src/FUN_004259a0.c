// Name: FUN_004259a0
// Address: 004259a0
// Address Range: [[004259a0, 004259e8]]
// Convention: unknown
// Signature: void FUN_004259a0(int param_1)

#include "nocturne.h"

void FUN_004259a0(int param_1)

{
  uint local_c;
  float local_8;
  uint local_4;
  
  local_c = *(uint *)(param_1 + 0x30);
  local_4 = *(uint *)(param_1 + 0x38);
  local_8 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2410);
  *(uint *)(param_1 + 0x2410) = 0;
  FUN_0042a060(param_1,&local_c);
  return;
}
