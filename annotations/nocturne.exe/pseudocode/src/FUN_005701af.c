// Name: FUN_005701af
// Address: 005701af
// Address Range: [[005701af, 005701cb]]
// Convention: unknown
// Signature: void FUN_005701af(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005701af(int param_1,uint param_2,uint param_3)

{
  (**(code **)(*(int *)(param_1 + 0x28) + 0x18))(param_1,param_2,0,param_3);
  return;
}
