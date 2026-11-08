// Name: FUN_0046c540
// Address: 0046c540
// Address Range: [[0046c540, 0046c577]]
// Convention: unknown
// Signature: void FUN_0046c540(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c540(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(uint *)(param_1 + 0x1c) = 0;
    return;
  }
  _DAT_01ba5cc8 = 0xffffffff;
  _DAT_01ba5cc4 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 0x1c) = (param_2 != 0) + 1;
  return;
}
