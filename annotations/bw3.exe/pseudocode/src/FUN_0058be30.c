// Name: FUN_0058be30
// Address: 0058be30
// Address Range: [[0058be30, 0058be68]]
// Convention: unknown
// Signature: void FUN_0058be30(int param_1)

#include "nocturne.h"

void FUN_0058be30(int param_1)

{
  *(uint *)(param_1 + 0xd064) = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  return;
}
