// Name: FUN_004ca3e0
// Address: 004ca3e0
// Address Range: [[004ca3e0, 004ca437]]
// Convention: unknown
// Signature: void FUN_004ca3e0(int param_1)

#include "nocturne.h"

void FUN_004ca3e0(int param_1)

{
  if ((*(int *)(param_1 + 0x438) == 0) && (*(int *)(param_1 + 0x43c) == 0)) {
    *(uint *)(param_1 + 0x43c) = 1;
    *(uint *)(param_1 + 0x430) = 0;
    if (*(char *)(param_1 + 0x4a8) != '\0') {
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,param_1 + 0x4a8);
    }
    FUN_0052dd80(0x01E661B8,param_1);
  }
  return;
}
