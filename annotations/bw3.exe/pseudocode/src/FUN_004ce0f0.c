// Name: FUN_004ce0f0
// Address: 004ce0f0
// Address Range: [[004ce0f0, 004ce169]]
// Convention: unknown
// Signature: void FUN_004ce0f0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004ce0f0(int param_1,uint param_2)

{
  FUN_005a3140(param_2,"%f,%f,%f,%d\n",(double)*(float *)(param_1 + 4),
               (double)*(float *)(param_1 + 8),(double)*(float *)(param_1 + 0xc),
               *(uint *)(param_1 + 0x14));
  FUN_005a3140();
  FUN_005a3140(param_2,"%d,%f,%d,%d,%d\n",*(uint *)(param_1 + 0x18),
               (double)*(float *)(param_1 + 0x1c),*(uint *)(param_1 + 0x20),
               *(uint *)(param_1 + 0x24),*(uint *)(param_1 + 0x28));
  return;
}
