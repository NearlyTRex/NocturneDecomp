// Name: FUN_005a0fd0
// Address: 005a0fd0
// Address Range: [[005a0fd0, 005a0ff0]]
// Convention: unknown
// Signature: void FUN_005a0fd0(int param_1)

#include "nocturne.h"

void FUN_005a0fd0(int param_1)

{
  if (*(int *)(param_1 + 0x11390) < 0) {
    return;
  }
  FUN_00503620(param_1 + 0x2b4,*(int *)(param_1 + 0x11390),1);
  return;
}
