// Name: FUN_005558c0
// Address: 005558c0
// Address Range: [[005558c0, 005558ef]]
// Convention: unknown
// Signature: void FUN_005558c0(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005558c0(int param_1,uint param_2)

{
  if (*(int *)(DAT_00612560 + 0x18) != 0) {
    FUN_00519be0(*(uint *)(param_1 + 0x161668),param_2);
    return;
  }
  FUN_00481eb0(DAT_00612560,param_2);
  return;
}
