// Name: FUN_0041f910
// Address: 0041f910
// Address Range: [[0041f910, 0041f930]]
// Convention: unknown
// Signature: void FUN_0041f910(int param_1,int param_2)

#include "nocturne.h"

void FUN_0041f910(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x281c) != 0) {
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  FUN_00488890(param_1,param_2);
  return;
}
