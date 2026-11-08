// Name: FUN_0042c1e0
// Address: 0042c1e0
// Address Range: [[0042c1e0, 0042c226]]
// Convention: unknown
// Signature: void FUN_0042c1e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c1e0(int param_1,float param_2)

{
  if (*(int *)(param_1 + 0x27a8) != 0) {
    *(uint *)(param_1 + 0x2520) = 0;
    *(uint *)(param_1 + 0x251c) = *(uint *)(param_1 + 0x2520);
    *(uint *)(param_1 + 0x2518) = *(uint *)(param_1 + 0x251c);
    return;
  }
  *(float *)(param_1 + 0x251c) = param_2 * _DAT_005b8226 + *(float *)(param_1 + 0x251c);
  return;
}
