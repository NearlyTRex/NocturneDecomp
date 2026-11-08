// Name: FUN_0048a100
// Address: 0048a100
// Address Range: [[0048a100, 0048a121]]
// Convention: unknown
// Signature: void FUN_0048a100(int param_1,int param_2)

#include "nocturne.h"

void FUN_0048a100(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0xcde4)) {
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  return;
}
