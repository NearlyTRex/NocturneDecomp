// Name: FUN_0040fbc0
// Address: 0040fbc0
// Address Range: [[0040fbc0, 0040fbf7]]
// Convention: unknown
// Signature: void FUN_0040fbc0(int param_1,int param_2)

#include "nocturne.h"

void FUN_0040fbc0(int param_1,int param_2)

{
  if ((param_2 == *(int *)(param_1 + 0x20084)) && (*(int *)(param_1 + 0x20084) != 0)) {
    FUN_005247c0(param_1 + 0x158,7,1);
    *(uint *)(param_1 + 0x20084) = 0;
    return;
  }
  return;
}
