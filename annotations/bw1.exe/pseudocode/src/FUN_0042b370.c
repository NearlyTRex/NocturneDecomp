// Name: FUN_0042b370
// Address: 0042b370
// Address Range: [[0042b370, 0042b3a8]]
// Convention: unknown
// Signature: void FUN_0042b370(int param_1)

#include "nocturne.h"

void FUN_0042b370(int param_1)

{
  *(uint *)(param_1 + 0xc278) = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  return;
}
