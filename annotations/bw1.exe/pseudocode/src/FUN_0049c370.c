// Name: FUN_0049c370
// Address: 0049c370
// Address Range: [[0049c370, 0049c3d3]]
// Convention: unknown
// Signature: void FUN_0049c370(int param_1)

#include "nocturne.h"

void FUN_0049c370(int param_1)

{
  if (*(int *)(param_1 + 0x1b0) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x1b0));
    *(uint *)(param_1 + 0x1b0) = 0;
  }
  *(uint *)(param_1 + 0x1ac) = 0;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x1b8));
    *(uint *)(param_1 + 0x1b8) = 0;
  }
  *(uint *)(param_1 + 0x1b4) = 0;
  FUN_00499470(param_1);
  return;
}
