// Name: FUN_004039d0
// Address: 004039d0
// Address Range: [[004039d0, 004039ef]]
// Convention: unknown
// Signature: void FUN_004039d0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004039d0(int param_1)

{
  _DAT_01c4f024 =
       FUN_004ffd40(*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),
                    *(uint *)(param_1 + 0x10));
  return;
}
