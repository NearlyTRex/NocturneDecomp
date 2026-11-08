// Name: FUN_005bdfa0
// Address: 005bdfa0
// Address Range: [[005bdfa0, 005bdfd8]]
// Convention: unknown
// Signature: void FUN_005bdfa0(int param_1)

#include "nocturne.h"

void FUN_005bdfa0(int param_1)

{
  *(uint *)(param_1 + 0xc278) = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
  return;
}
