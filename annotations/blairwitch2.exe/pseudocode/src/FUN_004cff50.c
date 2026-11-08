// Name: FUN_004cff50
// Address: 004cff50
// Address Range: [[004cff50, 004cff84]]
// Convention: unknown
// Signature: void FUN_004cff50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004cff50(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x25608) == 0) {
    return;
  }
  FUN_00428b10(param_1,param_2,*(int *)(param_1 + 0x25608),0x3dcccccd,0);
  *(uint *)(param_1 + 0x25608) = 0;
  return;
}
