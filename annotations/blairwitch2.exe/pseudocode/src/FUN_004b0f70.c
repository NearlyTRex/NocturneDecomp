// Name: FUN_004b0f70
// Address: 004b0f70
// Address Range: [[004b0f70, 004b0fa2]]
// Convention: unknown
// Signature: undefined4 FUN_004b0f70(int param_1)

#include "nocturne.h"

uint FUN_004b0f70(int param_1)

{
  *(uint *)(param_1 + 0x25608) = 0;
  if (*(int *)(param_1 + 0x2620) == 0) {
    return 0;
  }
  FUN_00503620(param_1 + 0x2b4,5,1);
  return 1;
}
