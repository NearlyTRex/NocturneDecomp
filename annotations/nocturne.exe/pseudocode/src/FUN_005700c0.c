// Name: FUN_005700c0
// Address: 005700c0
// Address Range: [[005700c0, 005700cf]]
// Convention: unknown
// Signature: void FUN_005700c0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void FUN_005700c0(int param_1,uint param_2,int param_3)

{
  if (0 < param_3) {
    *(int *)(param_1 + 0x34) = param_3;
  }
  return;
}
