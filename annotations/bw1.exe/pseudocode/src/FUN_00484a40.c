// Name: FUN_00484a40
// Address: 00484a40
// Address Range: [[00484a40, 00484a77]]
// Convention: unknown
// Signature: void FUN_00484a40(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484a40(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(uint *)(param_1 + 0x1c) = 0;
    return;
  }
  _DAT_01bc1284 = 0xffffffff;
  _DAT_01bc1280 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 0x1c) = (param_2 != 0) + 1;
  return;
}
