// Name: FUN_00408560
// Address: 00408560
// Address Range: [[00408560, 0040857d]]
// Convention: unknown
// Signature: void FUN_00408560(int param_1)

#include "nocturne.h"

void FUN_00408560(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xd0))(param_1,2);
  return;
}
