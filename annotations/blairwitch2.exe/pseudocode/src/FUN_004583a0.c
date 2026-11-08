// Name: FUN_004583a0
// Address: 004583a0
// Address Range: [[004583a0, 004583e5]]
// Convention: unknown
// Signature: void FUN_004583a0(int param_1)

#include "nocturne.h"

void FUN_004583a0(int param_1)

{
  if (*(int *)(param_1 + 0x25698) == *(int *)(param_1 + 0x2698)) {
    *(uint *)(param_1 + 0x25698) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
  FUN_00503620(param_1 + 0x2b4,0,1);
  return;
}
