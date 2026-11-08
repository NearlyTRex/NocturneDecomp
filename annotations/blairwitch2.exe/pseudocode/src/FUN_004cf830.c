// Name: FUN_004cf830
// Address: 004cf830
// Address Range: [[004cf830, 004cf884]]
// Convention: unknown
// Signature: void FUN_004cf830(int param_1)

#include "nocturne.h"

void FUN_004cf830(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2560c) == 0) {
    return;
  }
  iVar1 = FUN_0040c8f0(*(int *)(param_1 + 0x2560c),DAT_007bc9e8);
  if (param_1 == *(int *)(iVar1 + 0x47c)) {
    *(uint *)(iVar1 + 0x47c) = 0;
    FUN_00551050(*(uint *)(iVar1 + 0x484));
  }
  *(uint *)(param_1 + 0x2560c) = 0;
  return;
}
