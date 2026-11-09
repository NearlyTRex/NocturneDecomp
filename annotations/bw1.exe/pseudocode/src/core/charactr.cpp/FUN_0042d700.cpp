// Name: core_charactr.cpp_FUN_0042d700
// Address: 0042d700
// Address Range: [[0042d700, 0042d746]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042d700(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042d700(int param_1,float param_2)

{
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0x2520) = 0;
    *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
    *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
    return;
  }
  *(float *)(param_1 + 0x251c) = param_2 * _DAT_005d5907 + *(float *)(param_1 + 0x251c);
  return;
}
