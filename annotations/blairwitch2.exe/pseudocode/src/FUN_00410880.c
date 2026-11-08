// Name: FUN_00410880
// Address: 00410880
// Address Range: [[00410880, 004108a0]]
// Convention: unknown
// Signature: void FUN_00410880(int param_1,int param_2)

#include "nocturne.h"

void FUN_00410880(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x281c) != 0) {
    return;
  }
  *(uint *)(param_2 + 4) = 0;
  FUN_00427fb0(param_1,param_2);
  return;
}
