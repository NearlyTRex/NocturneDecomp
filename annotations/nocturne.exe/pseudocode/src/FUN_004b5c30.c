// Name: FUN_004b5c30
// Address: 004b5c30
// Address Range: [[004b5c30, 004b5c62]]
// Convention: unknown
// Signature: void FUN_004b5c30(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004b5c30(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x1fa08) == 0) {
    return;
  }
  FUN_00428f40(param_1,param_2,*(int *)(param_1 + 0x1fa08),0x3dcccccd);
  *(uint *)(param_1 + 0x1fa08) = 0;
  return;
}
