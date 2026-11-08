// Name: FUN_0046e120
// Address: 0046e120
// Address Range: [[0046e120, 0046e157]]
// Convention: unknown
// Signature: void FUN_0046e120(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046e120(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(uint *)(param_1 + 0x1c) = 0;
    return;
  }
  _DAT_01bdd85c = 0xffffffff;
  _DAT_01bdd858 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 0x1c) = (param_2 != 0) + 1;
  return;
}
