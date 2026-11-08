// Name: FUN_0040dd20
// Address: 0040dd20
// Address Range: [[0040dd20, 0040dd41]]
// Convention: unknown
// Signature: void FUN_0040dd20(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040dd20(int param_1,uint param_2)

{
  FUN_005b77c0(*(uint *)(param_1 + 4),param_2,
               *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x10));
  return;
}
