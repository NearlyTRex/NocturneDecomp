// Name: FUN_00408730
// Address: 00408730
// Address Range: [[00408730, 0040874d]]
// Convention: unknown
// Signature: void FUN_00408730(int param_1)

#include "nocturne.h"

void FUN_00408730(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0xd8))(param_1,2);
  return;
}
